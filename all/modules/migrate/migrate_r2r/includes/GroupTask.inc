<?php
class R2RGroupTaskMigration extends R2RMigration {

    public function __construct($arguments) {
        parent::__construct($arguments);

        $sourceType = $destType = 'group_events_task';

        $this->description = t('Import group_events_task from legacy R2R database.');
        $query = $this->getConnection()
            ->select('node', 'n')
            ->fields('n', array('nid', 'vid', 'language', 'title',
                'uid', 'status', 'created', 'changed', 'comment', 'promote',
                'moderate', 'sticky', 'tnid', 'translate'))
            ->condition('type', $sourceType);
        $query->innerJoin('node_revisions', 'nr', 'n.nid=nr.nid');
        $query->fields('nr', array('body', 'teaser', 'format'));
        //
        $query->innerJoin('content_field_group_task_assigned_to', 'cfgtat', 'nr.nid=cfgtat.nid');
        $query->fields('cfgtat', array('field_group_task_assigned_to_uid'));
        $query->innerJoin('content_field_group_task_dates', 'cfgtd', 'nr.nid=cfgtd.nid');
        $query->fields('cfgtd', array('field_group_task_dates_value'));
        $query->innerJoin('content_field_group_task_status', 'cfgts', 'nr.nid=cfgts.nid');
        $query->fields('cfgts', array('field_group_task_status_value'));


        $this->source = new MigrateSourceSQL($query);

        $node_options = MigrateDestinationNode::options('en', 'full_html');
        $this->destination = new MigrateDestinationNode($destType,$node_options);

        $this->map = new MigrateSQLMap($this->machineName,
            array(
                'nid' => array('type' => 'int',
                    'length' => 10,
                    'unsigned' => TRUE,
                    'not null' => TRUE,
                    'alias' => 'n',
                )
            ),
            MigrateDestinationNode::getKeySchema()
        );

        $this->addSimpleMappings(array('title','body', 'created','changed','status','promote','sticky','revision','log','language','tnid','translate','comment'));
        $this->addFieldMapping('uid', 'uid')->sourceMigration('R2RUsers');
        $this->addFieldMapping('body:summary','teaser');
        $this->addFieldMapping('field_group_task_assigned_to','field_group_task_assigned_to_uid')->sourceMigration('R2RUsers');
        $this->addFieldMapping('field_group_task_dates','field_group_task_dates_value'); //no end date to collect!!
        $this->addFieldMapping('field_group_task_status','field_group_task_status_value');
        $this->addFieldMapping('og_group_ref', 'groups_array')->sourceMigration('R2RWorkspace');
    }
    public function prepareRow($current_row) {
        if (parent::prepareRow($row) === FALSE) { //call parent prepare row function -- best practice
            return FALSE;
       }
        $nid = $current_row->nid; //retrieve the current record's nid
        $query = $this->getConnection()->select('og_ancestry', 'o')
                    ->fields('o', array('group_nid'))
                    ->condition('o.nid', $nid); //select the one or many related records from the og_ancestry table
        $results = $query->execute(); //execute, storing results

        //instansiate destination group array property
        $current_row->groups_array = array();

        $delta = 0; //iteration counter
        foreach ($results as $key => $result_row) {
            $current_row->groups_array[$delta] = $result_row->group_nid; //add each retrieved nid to the list of groups this record will be associated with
            $delta++; //post-increment our iteration counter
        }
        return true; //on no condition do we ignore a record; always return true
    }
}