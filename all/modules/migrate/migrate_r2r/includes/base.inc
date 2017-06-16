<?php

abstract class R2RMigration extends Migration {

  public function __construct($arguments) {
    parent::__construct($arguments);

    $this->team = array(
      new MigrateTeamMember('Erik Schafer', 'erik.schafer@icfi.com',
                            t('Implementor')),
      new MigrateTeamMember('Ian Carnaghan', 'ian.carnaghan@icfi.com',
                            t('Implementor')),
    );
  }

  public function getConnection($connection = 'source') {
    return Database::getConnection('default', $connection);
  }
}
