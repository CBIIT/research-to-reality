<?php
/**
 * @file
 * Migration for player data.
 */

class R2RGroupDiscussionCommentsMigration extends R2RMigration {

  public function __construct($arguments) {
    parent::__construct($arguments);
    //hard coded arguments to make it easier to generalize this migration
    $d6_node_name = 'group_discussion';
    $d7_node_name = 'group_discussion'; //not working, hardcoded line 34
    $d7_source_migration = 'R2RGroupDiscussion';
    $thisMigration = 'R2RGroupDiscussionComments';


   
    $this->description = t('Import comments for ' + $d7_node_name +' from legacy R2R database.');
    
    $query = $this->getConnection()
      ->select('comments', 'c')
      ->fields('c', array('cid','nid', 'pid', 'subject', 'comment', 'hostname', 'timestamp' , 'status' , 'format' , 'thread' , 'name' , 'mail' , 'homepage' , 'uid','thread'));
    $query->innerJoin('node','n','n.nid=c.nid');
    $query->fields('n', array('type'));
    $query->where('(n.type = :type)', array(':type' => $d6_node_name));

    /***********************
      array $fields: Optional - keys are field names, values are descriptions. Use to override the default descriptions, or to add additional source fields which the migration will add via other means (e.g., prepareRow()). 
    ***********************/

    $this->source = new MigrateSourceSQL($query);
    $node_options = MigrateDestinationComment::options('en', 'filtered_html');
    $this->destination = new MigrateDestinationComment('comment_node_group_discussion', $node_options);
    $this->map = new MigrateSQLMap($this->machineName,
        array(
          'cid' => array('type' => 'int',
                          'length' => 11,
                          'unsigned' => TRUE,
                          'not null' => TRUE,
                         )
        ),
        MigrateDestinationComment::getKeySchema()
      );
    $this->addSimpleMappings(array('subject', 'status', 'hostname', 'format', 'name', 'homepage','thread','mail'));
    $this->addFieldMapping('created','timestamp');
    $this->addFieldMapping('changed','timestamp');
    $this->addFieldMapping('nid','nid')->SourceMigration($d7_source_migration);
    $this->addFieldMapping('uid','uid')->SourceMigration('R2RUsers');
    $this->addFieldMapping('pid', 'pid')->sourceMigration($thisMigration);
    $this->addFieldMapping('comment_body','comment');
    $this->addFieldMapping('comment_body:format')->defaultValue('full_html');
  }
  public function prepareRow($current_row) {
    // In drupal 6, status = 0 means published
    // In drupal 7, status = 1 means published
    //  ...because that makes sense.

    if($current_row->status == 1) {
      $current_row->status = 0;
    } else {
      $current_row->status = 1;
    }
    return true;
  }
  protected function createStub(Migration $migration, array $source_id) {
    $comment = new stdClass();
    $comment->title = t('Stub for @id', array('@id' => $source_id[0]));
    $comment->body[LANGUAGE_NONE][0]['value'] = t('Stub body');
    $comment->type = $this->destination->getBundle();
    $comment->nid = 1;
    $comment->uid = 1;
    $comment->status = 0;
    comment_save($comment);
    if (isset($comment->cid)) {
      return array($comment->cid);
    }
    else {
      return FALSE;
    }
  }
  /*
  protected function createStubWrapper(array $source_key, $migration = NULL) {
    if (method_exists($this, 'createStub')) {
      $destids = $this->createStub($migration, $source_key);
      if ($destids) {
        // Fake a data row with the source key in it
        $map_source_key = $this->map->getSourceKey();
        $data_row = new stdClass;
        $i = 0;
        foreach ($map_source_key as $key => $definition) {
          $data_row->$key = $source_key[$i++];
        }
        $this->map->saveIDMapping($data_row, $destids, 
            MigrateMap::STATUS_NEEDS_UPDATE, $this->defaultRollbackAction);
      }
    }
    else {
      $destids = NULL;
    }
    return $destids;
  }
  */
}
