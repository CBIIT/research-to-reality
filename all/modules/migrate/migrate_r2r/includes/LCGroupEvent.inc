<?php
class R2RLCGroupEventMigration extends R2RMigration {

    public function __construct($arguments) {
        parent::__construct($arguments);

        $sourceType = $destType = 'lc_event';

        $this->description = t('Import group_event from legacy R2R database.');
        $query = $this->getConnection()
            ->select('node', 'n')
            ->fields('n', array('nid', 'vid', 'language', 'title',
                'uid', 'status', 'created', 'changed', 'comment', 'promote',
                'moderate', 'sticky', 'tnid', 'translate'))
            ->condition('type', $sourceType);
        $query->innerJoin('node_revisions', 'nr', 'n.nid=nr.nid');
        $query->fields('nr', array('body', 'teaser', 'format'));
        $query->innerJoin('content_field_group_event_date ', 'cfged', 'nr.nid=cfged.nid');
        $query->fields('cfged', array('field_group_event_date_value','field_group_event_date_value2'));
        $query->innerJoin('content_field_group_event_loc', 'cfgel', 'nr.nid=cfgel.nid');
        $query->fields('cfgel', array('field_group_event_loc_value'));
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
        $this->addFieldMapping('body:summary','teaser');
        $this->addFieldMapping('uid', 'uid')->sourceMigration('R2RUsers');
        $this->addFieldMapping('field_event_date','field_group_event_date_value');
        $this->addFieldMapping('field_event_date:to','field_group_event_date_value2');
        $this->addFieldMapping('field_event_location','field_group_event_loc_value');
        $this->addFieldMapping('og_group_ref', 'group_nid')->sourceMigration('R2RLCWorkspace');
    }
}