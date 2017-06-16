<?php
class R2RGroupEventMigration extends R2RMigration {

    public function __construct($arguments) {
        parent::__construct($arguments);

        $sourceType = $destType = 'group_event';

        $this->description = t('Import group_event from legacy R2R database.');
        $query = $this->getConnection()
            ->select('node', 'n')
            ->fields('n', array('nid', 'vid', 'language', 'title',
                'uid', 'status', 'created', 'changed', 'comment', 'promote',
                'moderate', 'sticky', 'tnid', 'translate'))
            ->condition('type', $sourceType);
        $query->innerJoin('node_revisions', 'nr', 'n.nid=nr.nid');
        $query->fields('nr', array('body', 'teaser', 'format'));
        $query->innerJoin('content_type_group_event', 'ctge', 'nr.nid=ctge.nid');
        $query->fields('ctge', array('nid'));
        $query->innerJoin('content_field_group_event_date', 'cfged', 'nr.nid=cfged.nid');
        $query->fields('cfged', array('field_group_event_date_value','field_group_event_date_value2'));
        $query->innerJoin('content_field_group_event_loc', 'cfgel', 'nr.nid=cfgel.nid');
        $query->fields('cfgel', array('field_group_event_loc_value'));

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
        $this->addFieldMapping('body:summary','teaser');
        $this->addFieldMapping('uid', 'uid')->sourceMigration('R2RUsers');
        $this->addFieldMapping('field_group_event_date','field_group_event_date_value');
        $this->addFieldMapping('field_group_event_date:to','field_group_event_date_value2');
        $this->addFieldMapping('field_group_event_loc','field_group_event_loc_value');
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