<?php
/**
 * @file
 * Migration for player data.
 */

class R2RStoryMigration extends R2RMigration {

  public function __construct($arguments) {
    parent::__construct($arguments);

    $sourceType = 'story';

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
    $query->innerJoin('content_field_public_story', 'ps', 'ps.nid=n.nid');
    $query->fields('ps', array('field_public_story_value'));

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
    $this->addFieldMapping('field_public_story', 'field_public_story_value');
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
    $this->addFieldMapping('comment','comment');
    $this->addFieldMapping('revision_uid','revision_uid')->sourceMigration('R2RUsers');
  }
}
