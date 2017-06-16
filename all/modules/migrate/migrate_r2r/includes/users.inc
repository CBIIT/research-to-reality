<?php
/**
 * @file
 * Migration for player data.
 */

class R2RUserMigration extends R2RMigration {

  public function prepareRow($current_row) {
    //unset the default user roles
    unset($current_row->roles);

    //query old users_roles table based on uid
    //  for rid's for that particular user
    $source_id = $current_row->uid;
    $query = Database::getConnection('default', 'source')->select('users_roles')
    	->fields('users_roles', array('uid', 'rid'))
      ->condition('users_roles.uid', $source_id, '=');
    $query->innerjoin('role', 'r', 'r.rid = users_roles.rid');
    $results = $query->execute();

    //just in case, make sure that every user is at least authenticated
    $roles = array('2' => '2');


    //iterate over (select uid, rid from r2r_6.users_roles where uid = $source_id), creating key value pairs for every occurence
    foreach ($results as $row) {
      //D6:
      // 1 anonymous user
      // 2 authenticated user
      // 3 super user
      // 4 Content Editor
      // 5 Mentee
      // 6 Mentor
      // 7 Site Manager
      // 8 Learning Communities Member

      //D7:
      // 1 anonymous user
      // 2 authenticated user
      // 3 administrator (super user)
      // 4 content editor
      // 5 mentee
      // 6 mentor
      // 7 Learning Communities Member
      // 8 Site Manager
      switch ($row->rid) {
        case 1:
        	$roles[1] = 1;
        	break;
        case 2:
        	$roles[2] = 2;
        	break;
        case 3:
					$roles[3] = 3;
					break;
        case 4:
					$roles[4] = 4;
					break;
        case 5:
					$roles[5] = 5;
					break;
        case 6:
					$roles[6] = 6;
					break;
        case 7:
          $roles[8] = 8;
          break;
        case 8:
					$roles[7] = 7;
					break;
        default:
          break;
      }
      $roles[$row->rid] = $row->rid;
    }
    //assign the result to the destination(?) roles mapping
    $current_row->roles = $roles;

    //Now move on to querying the related fields for users...
    $query2 = Database::getConnection('default', 'source')
      ->select('profile_values')
      ->fields('profile_values', array('uid', 'fid','value'))
      ->condition('profile_values.uid', $source_id, '=');
    $results2 = $query2->execute();

    
    //create two in-place mapping arrays to convert the d6 database machine names for the field
    // to match the d7 names.
    $typeMap = array(
      "--" => "",
      "Academic" => "academic",
      "Advocacy" => "advocacy",
      "Cancer Center" => "cancer_center",
      "Clinic/Hospital" => "clinic",
      "Government - Federal" => "fed_gov",
      "Government - State, Local, County" => "state_gov",
      "Other" => "other"
    );
    $roleMap = array(
      "--" => "",
      "Clinician (Physician, Nurse, etc.)" => "clinician",
      "Other" => "other",
      "Public Health Professional" => "pub_prof",
      "Researcher" => "researcher",
      "Student" => "student"
    );
    //iterate across results, routing data to the correct destinations
    foreach($results2 as $row2) {
      #print_r($row2);
      /*
      fid values:
      1 First Name
      2 Last Name
      4 Professional Biography and/or Interests
      5 Organization Name
      11  Degree and/or Credentials
      12  Type of Organization
      13  Role
      */
      switch($row2->fid) {
        case 1:
          $current_row->fname = $row2->value;
          #print_r(" fname = " . $row2->value);
        break;

        case 2:
          $current_row->lname = $row2->value;
          #print_r(" lname = " . $row2->value);
        break;

        case 4:
          $current_row->bio = $row2->value;
          #print_r(" bio length = " . strlen($row2->value));
        break;

        case 5:
          $current_row->orgName = $row2->value;
          #print_r(" org name = " . $row2->value);
        break;

        case 11:
          $current_row->degrees = $row2->value;
          #print_r(" degree =" . $row2->value);
        break;

        case 12:
        //use our in place mapping for the type
        $current_row->orgType = $typeMap[$row2->value];
        #print_r(" orgType =" . $current_row->orgType);
        break;

        case 13:
        //use our in place mapping for the role
        $current_row->orgRole = $roleMap[$row2->value];
        #print_r(" orgRole =" . $current_row->orgRole);
        break;

        default:
          #print("There was an unhandled User Profile field for uid=" + $source_id + " fid=" +$row2->fid );
      }
    }

    if($current_row->name == '')
      return FALSE;  //do not migrate the default empty string user

    //always return true, since we do not want to exclude any roles
    return TRUE;
  }

  public function __construct($arguments) {
    parent::__construct($arguments);
    $this->description = t('Import users from legacy R2R database.');
    $query = $this->getConnection()
             ->select('users')
             ->fields('users', array('uid', 'name', 'pass', 'mail', 'theme', 'signature', 'signature_format', 'created', 'access', 'login', 'status', 'timezone', 'language', 'picture', 'init','data','timezone'));
    //$query->innerjoin
    /***********************
      array $fields: Optional - keys are field names, values are descriptions. Use to override the default descriptions, or to add additional source fields which the migration will add via other means (e.g., prepareRow()). 
    ***********************/

    //I THINK that if I want to call $current_row->var I need to add var to source fields
    $source_fields = array(
      'roles' => t('The set of roles assigned to a user.'),
      'uid'   => t('User ID'),
      'fname' => t('First Name'),
      'lname' => t('Last Name'),
      'bio'   => t('User Bio field value'),
      'orgName' => t('Organization Name'),
      'degrees' => t('Degree and/or Credentials'),
      'orgType' => t('Type of Organization'),
      'orgRole' => t('Role within an Organization')
    );
    $this->source = new MigrateSourceSQL($query,$source_fields);
    $this->destination = new MigrateDestinationUser(array('md5_passwords' => TRUE));
    $this->map = new MigrateSQLMap($this->machineName,
        array(
          'uid' => array('type' => 'int',
                          'length' => 10,
                          'unsigned' => TRUE,
                          'not null' => TRUE,
                         )
        ),
        MigrateDestinationUser::getKeySchema()
      );
   
    
    
    $this->addFieldMapping('name', 'name')->dedupe('users', 'name'); //WATCH for this in messages -- this should not be called
    $this->addFieldMapping('pass', 'pass');
    $this->addFieldMapping('mail', 'mail');
    $this->addFieldMapping('language','language')->defaultValue('');
    $this->addFieldMapping('theme','theme')->defaultValue('');
    $this->addFieldMapping('signature','signature')->defaultValue('');
    $this->addFieldMapping('signature_format','signature_format')->defaultValue('filtered_html'); //overwrite ewith filtered ||$this->addFieldMapping('signature_format')->defaultValue('filtered_html');
    $this->addFieldMapping('created', 'created');
    $this->addFieldMapping('access', 'access');
    $this->addFieldMapping('login', 'login');
    $this->addFieldMapping('status', 'status');
    $this->addFieldMapping('init', 'init');
    $this->addFieldMapping('timezone')->defaultValue("America/New_York");
    $this->addFieldMapping('path')->issueGroup(t('DNM')); // DNM = Do Not Map
    $this->addFieldMapping('data', 'data')->callbacks('unserialize');
    $this->addFieldMapping('roles', 'roles')->defaultValue(array('2','2')); 
    $this->addFieldMapping('picture','picture')->sourceMigration('R2RUsersPictures');
    $this->addFieldMapping('field_first_name','fname')->defaultValue('');
    $this->addFieldMapping('field_last_name','lname')->defaultValue('');
    $this->addFieldMapping('field_bio','bio')->defaultValue('');
    $this->addFieldMapping('field_org_affill','orgName')->defaultValue('');
    $this->addFieldMapping('field_degrees','degrees')->defaultValue('');
    $this->addFieldMapping('field_org_type','orgType')->defaultValue('');
    $this->addFieldMapping('field_role','orgRole')->defaultValue('');
    //$this->addFieldMapping('og_user_node','')
  }
}
