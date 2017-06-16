<?php

class R2RFilesMigration extends R2RMigration {
	 public function __construct($arguments) {
	 	parent::__construct($arguments);

	 	$r2r6_root_filepath = '/var/www/r2r/r2r6/';
	 	$this->description = t('Import files from legacy R2R database.');

		$query = $this->getConnection()
			->select('files')
			->fields('files', array('fid', 'filename','filepath','uid'));

		//source fields holds an array of keys which, when passed as a second argument to MigrateSourceSql, establishes those keys in the $curretn_row variable for both field mappings and the prepare row function
		$source_fields = array(
	      'destPath' => t('The path to add to the base drupal filepath.  Used to sort files by type into subfolders using prepare row.')
    	);		
		$this->source = new MigrateSourceSQL($query, $source_fields);
    	$this->destination = new MigrateDestinationFile('file', 'MigrateFileUri');
    	$this->map = new MigrateSQLMap($this->machineName,
	        array(
	          'fid' => array('type' => 'int',
	                          'length' => 10,
	                          'not null' => TRUE,
	                          'unsigned' => TRUE
	                         )
	        ),
	        MigrateDestinationFile::getKeySchema()
      	);

      	$this->addFieldMapping('source_dir')->defaultValue($r2r6_root_filepath); 
      	$this->addFieldMapping('value','filepath'); //source filepath/name relative to source dir
      	$this->addFieldMapping('uid','uid')->sourceMigration('R2RUsers');
      	$this->addFieldMapping('file_replace')->defaultValue(FILE_EXISTS_REPLACE);
      	$this->addFieldMapping('destination_dir','destPath')->defaultValue('public://');
      	$this->addFieldMapping('preserve_files')->defaultValue(FALSE);
      	//programatically preserve or determine different destination paths based on original file path or on file type.
	 }
	public function prepareRow($current_row) {
		if (parent::prepareRow($row) === FALSE) {
		    return FALSE;
		}
		$filename = $current_row->filename;
		$type = pathinfo($filename, PATHINFO_EXTENSION);
		$current_row->destPath = 'public://'.$type;
		return true;
    }
}