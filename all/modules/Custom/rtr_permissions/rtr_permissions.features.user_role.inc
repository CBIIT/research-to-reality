<?php
/**
 * @file
 * rtr_permissions.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function rtr_permissions_user_default_roles() {
  $roles = array();

  // Exported role: Content Editor.
  $roles['Content Editor'] = array(
    'name' => 'Content Editor',
    'weight' => 3,
  );

  // Exported role: Learning Community Member.
  $roles['Learning Community Member'] = array(
    'name' => 'Learning Community Member',
    'weight' => 6,
  );

  // Exported role: Mentee.
  $roles['Mentee'] = array(
    'name' => 'Mentee',
    'weight' => 4,
  );

  // Exported role: Mentor.
  $roles['Mentor'] = array(
    'name' => 'Mentor',
    'weight' => 5,
  );

  // Exported role: Site Manager.
  $roles['Site Manager'] = array(
    'name' => 'Site Manager',
    'weight' => 7,
  );

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 2,
  );

  return $roles;
}
