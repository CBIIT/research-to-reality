<?php
class R2ROGMembershipMigration extends R2RMigration {

  public function __construct($arguments) {
    parent::__construct($arguments);
    $this->description = t('Migrate OG memberships.');

    // Create a map object for tracking the relationships between source rows
    $this->map = new MigrateSQLMap($this->machineName,
      array(
        'nid' => array(
          'type' => 'int',
          'not null' => TRUE,
          'description' => 'ID of the group.',
        ),
        'uid' => array(
          'type' => 'int',
          'not null' => TRUE,
          'description' => 'ID of the user.',
        ),
      ),
      MigrateDestinationOGMembership::getKeySchema()
    );

    // Query the datasource.
    $query = $this->getConnection()
      ->select('og_uid','og')
      ->fields('og', array('nid', 'og_role','is_active','is_admin','uid'));

    $this->source = new MigrateSourceSQL($query, array('gid'=>t('testing')));
    $this->destination = new MigrateDestinationOGMembership();

    // Group reference
    $this->addFieldMapping('group_type')->defaultValue('node');
    $this->addFieldMapping('nid', 'nid') //should nid be gid? -- no, we are querying nid
      ->sourceMigration(array('R2RWorkspace','R2RLCWorkspace'));
    $this->addFieldMapping('gid','nid')->sourceMigration(array('R2RWorkspace','R2RLCWorkspace'));

    // User reference
    $this->addFieldMapping('entity_type')->defaultValue('user');
    $this->addFieldMapping('etid', 'uid')
      ->sourceMigration('R2RUsers');

    // Other membership properties
    $this->addFieldMapping('state','is_active');//->defaultValue(OG_STATE_ACTIVE);
    $this->addFieldMapping('is_admin','is_admin');//->defaultValue(0);

    // Array of roles names or ids.
    $this->addFieldMapping('group_roles')->defaultValue(array(OG_ADMINISTRATOR_ROLE));
  }

  public function prepare($ety, $row) {
    //query from the migration map to get the destination *gid* which is otherwise not
    //accessible and map it into the gid field
    $query1 = $this->getConnection('default') //open query to default db...
      ->select('migrate_map_r2rworkspace','w')
      ->fields('w', array('sourceid1','destid1'))
      ->where('sourceid1 = :nid',array(':nid' => $row->nid));
    $query2 = $this->getConnection('default') //open query to default db...
      ->select('migrate_map_r2rlcworkspace','lc')
      ->fields('lc', array('sourceid1','destid1'))
      ->where('sourceid1 = :nid',array(':nid' => $row->nid));
    $query1->union($query2, 'UNION ALL');
    $row->gid = $query1->execute()->fetchAllAssoc('sourceid1')[$row->nid]->destid1;
   }
}
?>