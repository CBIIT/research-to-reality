<?php
/**
 * @file
 * Migration for player data.
 */

class R2REventMigration extends R2RMigration {

  public function __construct($arguments) {
    parent::__construct($arguments);
    
    $destType = $sourceType = 'event';

    $this->description = t('Import stories from legacy R2R database.');
    
    $query = $this->getConnection()
      ->select('node', 'n')
      ->fields('n', array('nid', 'vid', 'language', 'title',
           'uid', 'status', 'created', 'changed', 'comment', 'promote',
           'moderate', 'sticky', 'tnid', 'translate'))
      ->condition('type', $sourceType);
    $query->innerJoin('node_revisions', 'nr', 'n.vid=nr.vid');
    $query->fields('nr', array('body', 'teaser', 'format'));
    $query->innerJoin('content_field_event_date', 'cfed','nr.vid=cfed.vid');
    $query->fields('cfed', array('field_event_date_value', 'field_event_date_value2', 'field_event_date_timezone', 'field_event_date_offset', 'field_event_date_offset2'));
    $query->innerJoin('content_type_event', 'cte', 'cfed.vid=cte.vid');
    $query->fields('cte', array('field_event_additional_value', 'field_event_additional_format', 'field_event_location_value', 'field_event_location_format'));


    $this->source = new MigrateSourceSQL($query);

    $node_options = MigrateDestinationNode::options('en', 'full_html');
    $this->destination = new MigrateDestinationNode($destType, $node_options);
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
    $this->addSimpleMappings(array('title','body', 'created','changed','status','promote','sticky','revision','log','language','tnid','translate'));
    $this->addFieldMapping('body:summary','teaser');
    $this->addFieldMapping('uid', 'uid')->sourceMigration('R2RUsers');
    $this->addFieldMapping('revision_uid','revision_uid')->sourceMigration('R2RUsers');
    $this->addFieldMapping('field_event_date','field_event_date_value');
    $this->addFieldMapping('field_event_date:to','field_event_date_value2');
    $this->addFieldMapping('field_event_location','field_event_location_value');
    $this->addFieldMapping('field_event_additional','field_event_additional_value');
    $this->addFieldMapping('field_event_date:timezone', 'field_event_date_timezone')->defaultValue("America/New_York");
    $this->addFieldMapping('field_event_date:offset', 'field_event_date_offset');
    $this->addFieldMapping('field_event_date:offset2', 'field_event_date_offset2');
  }
}
