<?php

/**
 * @file
 * Migration for player data.
 */
class R2RTaxonomyMigration extends R2RMigration
{
    public function __construct($arguments)
    {
        parent::__construct($arguments);

        $this->description = t('Import taxonomy terms from legacy R2R database.');

        $query = $this->getConnection()
            ->select('term_data', 'td')
            ->fields('td', array('tid', 'name', 'description', 'weight'));

        $this->source = new MigrateSourceSQL($query);
        $this->destination = new MigrateDestinationTerm('category');
        $this->map = new MigrateSQLMap($this->machineName,
            array(
                'tid' => array('type' => 'int',
                    'unsigned' => TRUE,
                    'not null' => TRUE,
                    'description' => 'Source term ID',
                ),
            ),
            MigrateDestinationTerm::getKeySchema()
        );

        // Added Mappings from Drupal D2D Migration Script
        $this->addSimpleMappings(array('name', 'description', 'weight'));
        $this->addFieldMapping('parent', 'parent')
            ->sourceMigration($this->machineName);

        $this->addUnmigratedDestinations(array('parent_name'));
    }
}
