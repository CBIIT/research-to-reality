<?php
/**
 * @file
 * Migration for player data.
 */

class R2RPresenterMigration extends R2RMigration {

  public function __construct($arguments) {
    parent::__construct($arguments);
    
    $sourceType = 'presenter';

    $this->description = t('Import presenters from legacy R2R database.');
    
    $query = $this->getConnection()
      ->select('node', 'n')
      ->fields('n', array('nid', 'vid', 'language', 'title',
           'uid', 'status', 'created', 'changed', 'comment', 'promote',
           'moderate', 'sticky', 'tnid', 'translate'))
      ->condition('type', $sourceType)
      ->orderBy('changed');
    $query->innerJoin('node_revisions', 'nr', 'n.vid=nr.vid');
    $query->fields('nr', array('body', 'teaser', 'format'));
    $query->innerJoin('content_type_presenter', 'ct', "ct.nid = n.nid");
    $query->fields("ct", array("field_presenter_credentials_value","field_presenter_photo_fid"));

    /***********************
      array $fields: Optional - keys are field names, values are descriptions. Use to override the default descriptions, or to add additional source fields which the migration will add via other means (e.g., prepareRow()). 
    ***********************/

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
    $this->addFieldMapping('uid', 'uid')->sourceMigration('R2RUsers');
    $this->addFieldMapping('title', 'title');
    $this->addFieldMapping('body', 'body');
    $this->addFieldMapping('body:summary', 'teaser');
    $this->addFieldMapping('created','created');
    $this->addFieldMapping('changed','changed');
    $this->addFieldMapping('status','status');
    $this->addFieldMapping('promote','promote');
    $this->addFieldMapping('sticky', 'sticky');
    $this->addFieldMapping('revision', 'revision');
    $this->addFieldMapping('log', 'log');
    $this->addFieldMapping('language', 'language');
    $this->addFieldMapping('tnid', 'tnid');
    $this->addFieldMapping('translate', 'translate');
    $this->addFieldMapping('revision_uid','revision_uid')->sourceMigration('R2RUsers');
    $this->addFieldMapping('field_presenter_photo',"field_presenter_photo_fid")->sourceMigration('R2RFiles');
    $this->addFieldMapping('field_presenter_photo:file_class')->defaultValue("MigrateFileFid");
    $this->addFieldMapping("field_presenter_credentials","field_presenter_credentials_value");
  }
}
