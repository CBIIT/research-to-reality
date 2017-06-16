<?php

class R2RUserPictureMigration extends R2RMigration {
	 public function __construct($arguments) {
	 	parent::__construct($arguments);

	 	$r2r6_root_filepath = '/var/www/r2r/r2r6/';

	 	$this->description = t('Import pictures from legacy R2R database.');
		$query = $this->getConnection()
			->select('users')
			->fields('users', array('picture', 'uid'))
			->where('picture != :empty',array(':empty' => ''));				
		$this->source = new MigrateSourceSQL($query);
    	$this->destination = new MigrateDestinationFile('file', 'MigrateFileUri');
    	$this->map = new MigrateSQLMap($this->machineName,
	        array(
	          'picture' => array('type' => 'varchar',
	                          'length' => 255,
	                          'not null' => TRUE,
	                         )
	        ),
	        MigrateDestinationFile::getKeySchema()
      	);


      	$this->addFieldMapping('source_dir')->defaultValue($r2r6_root_filepath);
      	$this->addFieldMapping('value', 'picture');
      	$this->addFieldMapping('preserve_files')->defaultValue(FALSE);
	 }

	 // NOTE Uncomment prepare row to revert to filename only paths!!
	 //use the prepare row function to extract only the filename from the path
	 //	this requires that all of the images are in our root filepath
	 public function prepareRow($row) {

	 	//preg_match("#.*[\\\\/](.*?\.\w*)$#", $row->picture, $matches);
	 	//$row->picture = $row->value = $matches[1];
	 }
}