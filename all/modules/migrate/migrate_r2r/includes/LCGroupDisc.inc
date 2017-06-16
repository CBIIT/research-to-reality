<?php
class R2RLCGroupDiscussionMigration extends R2RMigration {

    public function __construct($arguments) {
        parent::__construct($arguments);

        $sourceType = $destType = 'lc_discussion';

        $this->description = t('Import lc_discussion from legacy R2R database.');
        $query = $this->getConnection()
            ->select('node', 'n')
            ->fields('n', array('nid', 'vid', 'language', 'title',
                'uid', 'status', 'created', 'changed', 'comment', 'promote',
                'moderate', 'sticky', 'tnid', 'translate'))
            ->condition('type', $sourceType);
        $query->innerJoin('node_revisions', 'nr', 'n.nid=nr.nid');
        $query->fields('nr', array('body', 'teaser', 'format'));
        //$query->innerJoin('content_type_group_discussion', 'ctgd', 'nr.nid=ctgd.nid');
        //$query->fields('ctgd', array('nid'));
        $query->innerJoin('og_ancestry', 'og', 'og.nid=n.nid'); //it *looks* like we have 1-1 groups <> lc discussion, so this is Ok
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

        $this->addSimpleMappings(array('title','body', 'created','changed','status','promote','sticky','comment','language','tnid','translate'));
        $this->addFieldMapping('uid', 'uid')->sourceMigration('R2RUsers');
        $this->addFieldMapping('og_group_ref', 'group_nid')->sourceMigration('R2RLCWorkspace');
        $this->addFieldMapping('body:summary','teaser');
    }
}