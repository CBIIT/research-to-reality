<?php
class R2RLCGroupTaskMigration extends R2RMigration {

    public function __construct($arguments) {
        parent::__construct($arguments);

        $sourceType = $destType = 'lc_task';

        $this->description = t('Import lc_task from legacy R2R database.');
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
        $query->innerJoin('og_ancestry', 'og', 'og.nid=n.nid');
        $query->fields('og', array('group_nid'));


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

        $this->addSimpleMappings(array('title','body', 'created','changed','status','promote','sticky','language','tnid','translate','comment'));
        $this->addFieldMapping('uid', 'uid')->sourceMigration('R2RUsers');
        $this->addFieldMapping('body:summary','teaser');
        $this->addFieldMapping('field_group_task_assigned_to','field_group_task_assigned_to_uid')->sourceMigration('R2RUsers');
        $this->addFieldMapping('field_group_task_dates','field_group_task_dates_value');
        $this->addFieldMapping('field_group_task_status','field_group_task_status_value');
        $this->addFieldMapping('og_group_ref', 'group_nid')->sourceMigration('R2RLCWorkspace');
    }
}