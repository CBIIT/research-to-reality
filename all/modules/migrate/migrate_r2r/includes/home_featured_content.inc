<?php
/**
 * @file
 * Migration for player data.
 */

class R2RHomeFeatureMigration extends R2RMigration {

  public function __construct($arguments) {
    parent::__construct($arguments);

    $sourceType = 'home_featured_content';
    $destType = 'homepage_featured_content';

    $this->description = t('Import stories from legacy R2R database.');

    $query = $this->getConnection()
      ->select('node', 'n')
      ->fields('n', array('nid', 'vid', 'language', 'title',
           'uid', 'status', 'created', 'changed', 'comment', 'promote',
           'moderate', 'sticky', 'tnid', 'translate'))
      ->condition('type', $sourceType)
      ->orderBy('changed');
    $query->innerJoin('node_revisions', 'nr', 'n.vid=nr.vid');
    $query->fields('nr', array('body', 'teaser', 'format'));
    $query->innerJoin('content_type_home_featured_content', 'fc', 'n.vid=fc.vid');
    $query->fields('fc', array('field_featured_more_link_url', 'field_featured_teaser_value'));

    /***********************
      array $fields: Optional - keys are field names, values are descriptions. Use to override the default descriptions, or to add additional source fields which the migration will add via other means (e.g., prepareRow()).
    ***********************/

    $this->source = new MigrateSourceSQL($query);

    $node_options = MigrateDestinationNode::options('en', 'filtered_html');
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

    // TODO: AddSimpleMapping may be substituted here
    $this->addFieldMapping('uid', 'uid')->sourceMigration('R2RUsers');
    $this->addFieldMapping('title', 'title');
    $this->addFieldMapping('body', 'body');
    $this->addFieldMapping('field_featured_teaser', 'field_featured_teaser_value');
    $this->addFieldMapping('field_featured_more_link', 'field_featured_more_link_url');
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
  }
}
