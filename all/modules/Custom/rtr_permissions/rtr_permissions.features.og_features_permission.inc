<?php
/**
 * @file
 * rtr_permissions.features.og_features_permission.inc
 */

/**
 * Implements hook_og_features_default_permissions().
 */
function rtr_permissions_og_features_default_permissions() {
  $permissions = array();

  // Exported og permission: 'node:lc_workspace:add user'
  $permissions['node:lc_workspace:add user'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:lc_workspace:administer group'
  $permissions['node:lc_workspace:administer group'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:lc_workspace:approve and deny subscription'
  $permissions['node:lc_workspace:approve and deny subscription'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:lc_workspace:create about_the_lc content'
  $permissions['node:lc_workspace:create about_the_lc content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:lc_workspace:create about_the_pair content'
  $permissions['node:lc_workspace:create about_the_pair content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:lc_workspace:create group_discussion content'
  $permissions['node:lc_workspace:create group_discussion content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:lc_workspace:create group_document content'
  $permissions['node:lc_workspace:create group_document content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:lc_workspace:create group_event content'
  $permissions['node:lc_workspace:create group_event content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:lc_workspace:create group_events_task content'
  $permissions['node:lc_workspace:create group_events_task content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:lc_workspace:create lc_discussion content'
  $permissions['node:lc_workspace:create lc_discussion content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:lc_workspace:create lc_document content'
  $permissions['node:lc_workspace:create lc_document content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:lc_workspace:create lc_event content'
  $permissions['node:lc_workspace:create lc_event content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:lc_workspace:create lc_library content'
  $permissions['node:lc_workspace:create lc_library content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:lc_workspace:create lc_story content'
  $permissions['node:lc_workspace:create lc_story content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:lc_workspace:create lc_story_archive content'
  $permissions['node:lc_workspace:create lc_story_archive content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:lc_workspace:create lc_task content'
  $permissions['node:lc_workspace:create lc_task content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:lc_workspace:create mentorship_story_archive content'
  $permissions['node:lc_workspace:create mentorship_story_archive content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:lc_workspace:delete any about_the_lc content'
  $permissions['node:lc_workspace:delete any about_the_lc content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:lc_workspace:delete any about_the_pair content'
  $permissions['node:lc_workspace:delete any about_the_pair content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:lc_workspace:delete any group_discussion content'
  $permissions['node:lc_workspace:delete any group_discussion content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:lc_workspace:delete any group_document content'
  $permissions['node:lc_workspace:delete any group_document content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:lc_workspace:delete any group_event content'
  $permissions['node:lc_workspace:delete any group_event content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:lc_workspace:delete any group_events_task content'
  $permissions['node:lc_workspace:delete any group_events_task content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:lc_workspace:delete any lc_discussion content'
  $permissions['node:lc_workspace:delete any lc_discussion content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:lc_workspace:delete any lc_document content'
  $permissions['node:lc_workspace:delete any lc_document content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:lc_workspace:delete any lc_event content'
  $permissions['node:lc_workspace:delete any lc_event content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:lc_workspace:delete any lc_library content'
  $permissions['node:lc_workspace:delete any lc_library content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:lc_workspace:delete any lc_story content'
  $permissions['node:lc_workspace:delete any lc_story content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:lc_workspace:delete any lc_story_archive content'
  $permissions['node:lc_workspace:delete any lc_story_archive content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:lc_workspace:delete any lc_task content'
  $permissions['node:lc_workspace:delete any lc_task content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:lc_workspace:delete any mentorship_story_archive content'
  $permissions['node:lc_workspace:delete any mentorship_story_archive content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:lc_workspace:delete own about_the_lc content'
  $permissions['node:lc_workspace:delete own about_the_lc content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:lc_workspace:delete own about_the_pair content'
  $permissions['node:lc_workspace:delete own about_the_pair content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:lc_workspace:delete own group_discussion content'
  $permissions['node:lc_workspace:delete own group_discussion content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:lc_workspace:delete own group_document content'
  $permissions['node:lc_workspace:delete own group_document content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:lc_workspace:delete own group_event content'
  $permissions['node:lc_workspace:delete own group_event content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:lc_workspace:delete own group_events_task content'
  $permissions['node:lc_workspace:delete own group_events_task content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:lc_workspace:delete own lc_discussion content'
  $permissions['node:lc_workspace:delete own lc_discussion content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:lc_workspace:delete own lc_document content'
  $permissions['node:lc_workspace:delete own lc_document content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:lc_workspace:delete own lc_event content'
  $permissions['node:lc_workspace:delete own lc_event content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:lc_workspace:delete own lc_library content'
  $permissions['node:lc_workspace:delete own lc_library content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:lc_workspace:delete own lc_story content'
  $permissions['node:lc_workspace:delete own lc_story content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:lc_workspace:delete own lc_story_archive content'
  $permissions['node:lc_workspace:delete own lc_story_archive content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:lc_workspace:delete own lc_task content'
  $permissions['node:lc_workspace:delete own lc_task content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:lc_workspace:delete own mentorship_story_archive content'
  $permissions['node:lc_workspace:delete own mentorship_story_archive content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:lc_workspace:manage members'
  $permissions['node:lc_workspace:manage members'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:lc_workspace:manage permissions'
  $permissions['node:lc_workspace:manage permissions'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:lc_workspace:manage roles'
  $permissions['node:lc_workspace:manage roles'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:lc_workspace:subscribe'
  $permissions['node:lc_workspace:subscribe'] = array(
    'roles' => array(
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:lc_workspace:subscribe without approval'
  $permissions['node:lc_workspace:subscribe without approval'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:lc_workspace:unsubscribe'
  $permissions['node:lc_workspace:unsubscribe'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:lc_workspace:update any about_the_lc content'
  $permissions['node:lc_workspace:update any about_the_lc content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:lc_workspace:update any about_the_pair content'
  $permissions['node:lc_workspace:update any about_the_pair content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:lc_workspace:update any group_discussion content'
  $permissions['node:lc_workspace:update any group_discussion content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:lc_workspace:update any group_document content'
  $permissions['node:lc_workspace:update any group_document content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:lc_workspace:update any group_event content'
  $permissions['node:lc_workspace:update any group_event content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:lc_workspace:update any group_events_task content'
  $permissions['node:lc_workspace:update any group_events_task content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:lc_workspace:update any lc_discussion content'
  $permissions['node:lc_workspace:update any lc_discussion content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:lc_workspace:update any lc_document content'
  $permissions['node:lc_workspace:update any lc_document content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:lc_workspace:update any lc_event content'
  $permissions['node:lc_workspace:update any lc_event content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:lc_workspace:update any lc_library content'
  $permissions['node:lc_workspace:update any lc_library content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:lc_workspace:update any lc_story content'
  $permissions['node:lc_workspace:update any lc_story content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:lc_workspace:update any lc_story_archive content'
  $permissions['node:lc_workspace:update any lc_story_archive content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:lc_workspace:update any lc_task content'
  $permissions['node:lc_workspace:update any lc_task content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:lc_workspace:update any mentorship_story_archive content'
  $permissions['node:lc_workspace:update any mentorship_story_archive content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:lc_workspace:update group'
  $permissions['node:lc_workspace:update group'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:lc_workspace:update own about_the_lc content'
  $permissions['node:lc_workspace:update own about_the_lc content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:lc_workspace:update own about_the_pair content'
  $permissions['node:lc_workspace:update own about_the_pair content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:lc_workspace:update own group_discussion content'
  $permissions['node:lc_workspace:update own group_discussion content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:lc_workspace:update own group_document content'
  $permissions['node:lc_workspace:update own group_document content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:lc_workspace:update own group_event content'
  $permissions['node:lc_workspace:update own group_event content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:lc_workspace:update own group_events_task content'
  $permissions['node:lc_workspace:update own group_events_task content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:lc_workspace:update own lc_discussion content'
  $permissions['node:lc_workspace:update own lc_discussion content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:lc_workspace:update own lc_document content'
  $permissions['node:lc_workspace:update own lc_document content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:lc_workspace:update own lc_event content'
  $permissions['node:lc_workspace:update own lc_event content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:lc_workspace:update own lc_library content'
  $permissions['node:lc_workspace:update own lc_library content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:lc_workspace:update own lc_story content'
  $permissions['node:lc_workspace:update own lc_story content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:lc_workspace:update own lc_story_archive content'
  $permissions['node:lc_workspace:update own lc_story_archive content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:lc_workspace:update own lc_task content'
  $permissions['node:lc_workspace:update own lc_task content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:lc_workspace:update own mentorship_story_archive content'
  $permissions['node:lc_workspace:update own mentorship_story_archive content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:workspace:add user'
  $permissions['node:workspace:add user'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:workspace:administer group'
  $permissions['node:workspace:administer group'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:workspace:approve and deny subscription'
  $permissions['node:workspace:approve and deny subscription'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:workspace:create about_the_lc content'
  $permissions['node:workspace:create about_the_lc content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:workspace:create about_the_pair content'
  $permissions['node:workspace:create about_the_pair content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:workspace:create group_discussion content'
  $permissions['node:workspace:create group_discussion content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:workspace:create group_document content'
  $permissions['node:workspace:create group_document content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:workspace:create group_event content'
  $permissions['node:workspace:create group_event content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:workspace:create group_events_task content'
  $permissions['node:workspace:create group_events_task content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:workspace:create lc_discussion content'
  $permissions['node:workspace:create lc_discussion content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:workspace:create lc_document content'
  $permissions['node:workspace:create lc_document content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:workspace:create lc_event content'
  $permissions['node:workspace:create lc_event content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:workspace:create lc_library content'
  $permissions['node:workspace:create lc_library content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:workspace:create lc_story content'
  $permissions['node:workspace:create lc_story content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:workspace:create lc_story_archive content'
  $permissions['node:workspace:create lc_story_archive content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:workspace:create lc_task content'
  $permissions['node:workspace:create lc_task content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:workspace:create mentorship_story_archive content'
  $permissions['node:workspace:create mentorship_story_archive content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:workspace:delete any about_the_lc content'
  $permissions['node:workspace:delete any about_the_lc content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:workspace:delete any about_the_pair content'
  $permissions['node:workspace:delete any about_the_pair content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:workspace:delete any group_discussion content'
  $permissions['node:workspace:delete any group_discussion content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:workspace:delete any group_document content'
  $permissions['node:workspace:delete any group_document content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:workspace:delete any group_event content'
  $permissions['node:workspace:delete any group_event content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:workspace:delete any group_events_task content'
  $permissions['node:workspace:delete any group_events_task content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:workspace:delete any lc_discussion content'
  $permissions['node:workspace:delete any lc_discussion content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:workspace:delete any lc_document content'
  $permissions['node:workspace:delete any lc_document content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:workspace:delete any lc_event content'
  $permissions['node:workspace:delete any lc_event content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:workspace:delete any lc_library content'
  $permissions['node:workspace:delete any lc_library content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:workspace:delete any lc_story content'
  $permissions['node:workspace:delete any lc_story content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:workspace:delete any lc_story_archive content'
  $permissions['node:workspace:delete any lc_story_archive content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:workspace:delete any lc_task content'
  $permissions['node:workspace:delete any lc_task content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:workspace:delete any mentorship_story_archive content'
  $permissions['node:workspace:delete any mentorship_story_archive content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:workspace:delete own about_the_lc content'
  $permissions['node:workspace:delete own about_the_lc content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:workspace:delete own about_the_pair content'
  $permissions['node:workspace:delete own about_the_pair content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:workspace:delete own group_discussion content'
  $permissions['node:workspace:delete own group_discussion content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:workspace:delete own group_document content'
  $permissions['node:workspace:delete own group_document content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:workspace:delete own group_event content'
  $permissions['node:workspace:delete own group_event content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:workspace:delete own group_events_task content'
  $permissions['node:workspace:delete own group_events_task content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:workspace:delete own lc_discussion content'
  $permissions['node:workspace:delete own lc_discussion content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:workspace:delete own lc_document content'
  $permissions['node:workspace:delete own lc_document content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:workspace:delete own lc_event content'
  $permissions['node:workspace:delete own lc_event content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:workspace:delete own lc_library content'
  $permissions['node:workspace:delete own lc_library content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:workspace:delete own lc_story content'
  $permissions['node:workspace:delete own lc_story content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:workspace:delete own lc_story_archive content'
  $permissions['node:workspace:delete own lc_story_archive content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:workspace:delete own lc_task content'
  $permissions['node:workspace:delete own lc_task content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:workspace:delete own mentorship_story_archive content'
  $permissions['node:workspace:delete own mentorship_story_archive content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:workspace:manage members'
  $permissions['node:workspace:manage members'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:workspace:manage permissions'
  $permissions['node:workspace:manage permissions'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:workspace:manage roles'
  $permissions['node:workspace:manage roles'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:workspace:subscribe'
  $permissions['node:workspace:subscribe'] = array(
    'roles' => array(
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:workspace:subscribe without approval'
  $permissions['node:workspace:subscribe without approval'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:workspace:unsubscribe'
  $permissions['node:workspace:unsubscribe'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:workspace:update any about_the_lc content'
  $permissions['node:workspace:update any about_the_lc content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:workspace:update any about_the_pair content'
  $permissions['node:workspace:update any about_the_pair content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:workspace:update any group_discussion content'
  $permissions['node:workspace:update any group_discussion content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:workspace:update any group_document content'
  $permissions['node:workspace:update any group_document content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:workspace:update any group_event content'
  $permissions['node:workspace:update any group_event content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:workspace:update any group_events_task content'
  $permissions['node:workspace:update any group_events_task content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:workspace:update any lc_discussion content'
  $permissions['node:workspace:update any lc_discussion content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:workspace:update any lc_document content'
  $permissions['node:workspace:update any lc_document content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:workspace:update any lc_event content'
  $permissions['node:workspace:update any lc_event content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:workspace:update any lc_library content'
  $permissions['node:workspace:update any lc_library content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:workspace:update any lc_story content'
  $permissions['node:workspace:update any lc_story content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:workspace:update any lc_story_archive content'
  $permissions['node:workspace:update any lc_story_archive content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:workspace:update any lc_task content'
  $permissions['node:workspace:update any lc_task content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:workspace:update any mentorship_story_archive content'
  $permissions['node:workspace:update any mentorship_story_archive content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:workspace:update group'
  $permissions['node:workspace:update group'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:workspace:update own about_the_lc content'
  $permissions['node:workspace:update own about_the_lc content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:workspace:update own about_the_pair content'
  $permissions['node:workspace:update own about_the_pair content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:workspace:update own group_discussion content'
  $permissions['node:workspace:update own group_discussion content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:workspace:update own group_document content'
  $permissions['node:workspace:update own group_document content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:workspace:update own group_event content'
  $permissions['node:workspace:update own group_event content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:workspace:update own group_events_task content'
  $permissions['node:workspace:update own group_events_task content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:workspace:update own lc_discussion content'
  $permissions['node:workspace:update own lc_discussion content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:workspace:update own lc_document content'
  $permissions['node:workspace:update own lc_document content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:workspace:update own lc_event content'
  $permissions['node:workspace:update own lc_event content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:workspace:update own lc_library content'
  $permissions['node:workspace:update own lc_library content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:workspace:update own lc_story content'
  $permissions['node:workspace:update own lc_story content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:workspace:update own lc_story_archive content'
  $permissions['node:workspace:update own lc_story_archive content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:workspace:update own lc_task content'
  $permissions['node:workspace:update own lc_task content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:workspace:update own mentorship_story_archive content'
  $permissions['node:workspace:update own mentorship_story_archive content'] = array(
    'roles' => array(),
  );

  return $permissions;
}
