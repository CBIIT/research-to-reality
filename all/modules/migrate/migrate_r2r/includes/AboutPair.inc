<?php
/**
 * @file
 * Migration for player data.
 */

class R2RPairMigration extends R2RMigration {

  public function __construct($arguments) {
    parent::__construct($arguments);
    
    $sourceType = 'about_the_pair';
    $this->description = t('Import '.$sourceType.' content from legacy R2R database.');
    
    $query = $this->getConnection()
      ->select('node', 'n')
      ->fields('n', array('nid', 'vid', 'language', 'title',
           'uid', 'status', 'created', 'changed', 'comment', 'promote',
           'moderate', 'sticky', 'tnid', 'translate'))
      ->condition('type', $sourceType)
      ->orderBy('changed');
    $query->innerJoin('node_revisions', 'nr', 'n.vid=nr.vid');
    $query->fields('nr', array('body', 'teaser', 'format'));
    $query->innerJoin('content_type_about_the_pair','ctap','ctap.vid=nr.vid');
    $query->fields('ctap', array('field_mentorpair_bio_value', 'field_mentor_img_fid', 'field_mentee_img_fid '));
    $query->innerJoin('og_ancestry', 'og', 'og.nid=n.nid');//thankfully, about_the_pair content types are only associated with one group, otherwise, this would need to be mapped with a prepare row function
    $query->fields('og', array('group_nid'));


    $this->source = new MigrateSourceSQL($query);
    $node_options = MigrateDestinationNode::options('en', 'full_html');
    $this->destination = new MigrateDestinationNode($sourceType,$node_options);
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
    
    // TODO: AddSimpleMapping may be substituted here
    $this->addSimpleMappings(array('title','body','field_mentorpair_bio_value','created','changed','status','promote','moderate','sticky','language','translate','comment')); //i just took revision and log out of this array
    $this->addFieldMapping('body:summary', 'teaser');
    $this->addFieldMapping('field_field_mentorpair_bio','field_mentorpair_bio_value');
    $this->addFieldMapping('field_mentor_img:file_class')->defaultValue('MigrateFileFid');
    $this->addFieldMapping('field_mentor_img','field_mentee_img_fid')->sourceMigration('R2RFiles');
    $this->addFieldMapping('field_mentee_img:file_class')->defaultValue('MigrateFileFid');
    $this->addFieldMapping('field_mentee_img','field_mentee_img_fid')->sourceMigration('R2RFiles');
    $this->addFieldMapping('og_group_ref', 'group_nid')->sourceMigration('R2RWorkspace');  //thankfully, about_the_pair content types are only associated with one group, otherwise, this would need to be mapped with a prepare row function
    
  }
}
