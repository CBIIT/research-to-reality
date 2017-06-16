<?php
class R2RLCGroupDocMigration extends R2RMigration {

    public function __construct($arguments) {
        parent::__construct($arguments);

        $sourceType = $destType = 'lc_document';

        $this->description = t('Import group_document from legacy R2R database.');
        $query = $this->getConnection()
            ->select('node', 'n')
            ->fields('n', array('nid', 'vid', 'language', 'title',
                'uid', 'status', 'created', 'changed', 'comment', 'promote',
                'moderate', 'sticky', 'tnid', 'translate'))
            ->condition('type', $sourceType);
        $query->innerJoin('node_revisions', 'nr', 'n.nid=nr.nid');
        $query->fields('nr', array('body', 'teaser', 'format'));
        //$query->innerJoin('content_type_group_document', 'ctgd', 'nr.nid=ctgd.nid');
        //$query->fields('ctgd', array('field_cohort_document_value'));
        $query->innerJoin('content_field_document', 'cfd', 'nr.nid=cfd.nid');
        $query->fields('cfd', array('field_document_fid'));
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

        $this->addSimpleMappings(array('title','body', 'created','changed','status','promote','sticky','language','tnid','translate','comment')); //'field_revision_count_value','field_cohort_document_value'
        $this->addFieldMapping('uid', 'uid')->sourceMigration('R2RUsers');
        $this->addFieldMapping('field_document:file_class')->defaultValue('MigrateFileFid');
        $this->addFieldMapping('field_document','field_document_fid')->sourceMigration('R2RFiles');
        $this->addFieldMapping('body:summary','teaser');
        $this->addFieldMapping('og_group_ref', 'group_nid')->sourceMigration('R2RLCWorkspace');
    }
}