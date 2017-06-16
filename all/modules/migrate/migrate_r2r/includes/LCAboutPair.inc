<?php
/**
 * @file
 * Migration for player data.
 */

class R2RLCPairMigration extends R2RMigration {

  public function __construct($arguments) {
    parent::__construct($arguments);
    
    $destType = $sourceType = 'about_the_lc';
    $this->description = t('Import '.$sourceType.' content from legacy R2R database.');
    
    $query = $this->getConnection()
      ->select('node', 'n')
      ->fields('n', array('nid', 'vid', 'language', 'title',
           'uid', 'status', 'created', 'changed', 'comment', 'promote',
           'moderate', 'sticky', 'tnid', 'translate'))
      ->condition('type', $sourceType);
    $query->innerJoin('node_revisions', 'nr', 'n.vid=nr.vid');
    $query->fields('nr', array('body', 'teaser', 'format'));
    $query->innerJoin('content_type_about_the_lc','ctap','ctap.vid=nr.vid');
    $query->fields('ctap', array('field_lc_r_discussio_nid'));
    $query->innerJoin('og_ancestry', 'og', 'og.nid=n.nid');
    $query->fields('og', array('group_nid'));


    $this->source = new MigrateSourceSQL($query);
    $node_options = MigrateDestinationNode::options('en', 'full_html');
    $this->destination = new MigrateDestinationNode($destType ,$node_options);
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
    
    
    $this->addSimpleMappings(array('title','body','created','changed','status','promote','sticky','language','translate','comment')); //i just took revision and log out of this array
    $this->addFieldMapping('body:summary','teaser');
    $this->addFieldMapping('field_lc_r_discussio', 'field_lc_r_discussio_nid')->sourceMigration('r2rlcdiscussion');
    $this->addFieldMapping('og_group_ref', 'group_nid')->sourceMigration('R2RLCWorkspace');
    //related field
      //field_lc_r_discussion_nid unmapped
    
  }
}
