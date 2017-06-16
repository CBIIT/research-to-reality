<?php
/**
 * @file
 * rtr_permissions.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function rtr_permissions_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'Use PHP input for field settings (dangerous - grant with care)'.
  $permissions['Use PHP input for field settings (dangerous - grant with care)'] = array(
    'name' => 'Use PHP input for field settings (dangerous - grant with care)',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'cck',
  );

  // Exported permission: 'access administration menu'.
  $permissions['access administration menu'] = array(
    'name' => 'access administration menu',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Site Manager' => 'Site Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'access administration pages'.
  $permissions['access administration pages'] = array(
    'name' => 'access administration pages',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Site Manager' => 'Site Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access advuser'.
  $permissions['access advuser'] = array(
    'name' => 'access advuser',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'advuser',
  );

  // Exported permission: 'access all views'.
  $permissions['access all views'] = array(
    'name' => 'access all views',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'views',
  );

  // Exported permission: 'access all webform results'.
  $permissions['access all webform results'] = array(
    'name' => 'access all webform results',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'access backup and migrate'.
  $permissions['access backup and migrate'] = array(
    'name' => 'access backup and migrate',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: 'access backup files'.
  $permissions['access backup files'] = array(
    'name' => 'access backup files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: 'access coffee'.
  $permissions['access coffee'] = array(
    'name' => 'access coffee',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'coffee',
  );

  // Exported permission: 'access comments'.
  $permissions['access comments'] = array(
    'name' => 'access comments',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'access connections tab'.
  $permissions['access connections tab'] = array(
    'name' => 'access connections tab',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'connector',
  );

  // Exported permission: 'access content'.
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access content overview'.
  $permissions['access content overview'] = array(
    'name' => 'access content overview',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Site Manager' => 'Site Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access contextual links'.
  $permissions['access contextual links'] = array(
    'name' => 'access contextual links',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'contextual',
  );

  // Exported permission: 'access dashboard'.
  $permissions['access dashboard'] = array(
    'name' => 'access dashboard',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Site Manager' => 'Site Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'dashboard',
  );

  // Exported permission: 'access own webform results'.
  $permissions['access own webform results'] = array(
    'name' => 'access own webform results',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'access own webform submissions'.
  $permissions['access own webform submissions'] = array(
    'name' => 'access own webform submissions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'access rules debug'.
  $permissions['access rules debug'] = array(
    'name' => 'access rules debug',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'rules',
  );

  // Exported permission: 'access site in maintenance mode'.
  $permissions['access site in maintenance mode'] = array(
    'name' => 'access site in maintenance mode',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access site reports'.
  $permissions['access site reports'] = array(
    'name' => 'access site reports',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access site-wide contact form'.
  $permissions['access site-wide contact form'] = array(
    'name' => 'access site-wide contact form',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'contact',
  );

  // Exported permission: 'access statistics'.
  $permissions['access statistics'] = array(
    'name' => 'access statistics',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'statistics',
  );

  // Exported permission: 'access user contact forms'.
  $permissions['access user contact forms'] = array(
    'name' => 'access user contact forms',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'contact',
  );

  // Exported permission: 'access user profiles'.
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'user',
  );

  // Exported permission: 'access workbench'.
  $permissions['access workbench'] = array(
    'name' => 'access workbench',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Site Manager' => 'Site Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'workbench',
  );

  // Exported permission: 'add JS snippets for google analytics'.
  $permissions['add JS snippets for google analytics'] = array(
    'name' => 'add JS snippets for google analytics',
    'roles' => array(),
    'module' => 'googleanalytics',
  );

  // Exported permission: 'administer CAPTCHA settings'.
  $permissions['administer CAPTCHA settings'] = array(
    'name' => 'administer CAPTCHA settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'captcha',
  );

  // Exported permission: 'administer actions'.
  $permissions['administer actions'] = array(
    'name' => 'administer actions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer advanced pane settings'.
  $permissions['administer advanced pane settings'] = array(
    'name' => 'administer advanced pane settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'administer advuser'.
  $permissions['administer advuser'] = array(
    'name' => 'administer advuser',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'advuser',
  );

  // Exported permission: 'administer backup and migrate'.
  $permissions['administer backup and migrate'] = array(
    'name' => 'administer backup and migrate',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: 'administer block classes'.
  $permissions['administer block classes'] = array(
    'name' => 'administer block classes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'block_class',
  );

  // Exported permission: 'administer blocks'.
  $permissions['administer blocks'] = array(
    'name' => 'administer blocks',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'block',
  );

  // Exported permission: 'administer coffee'.
  $permissions['administer coffee'] = array(
    'name' => 'administer coffee',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'coffee',
  );

  // Exported permission: 'administer comments'.
  $permissions['administer comments'] = array(
    'name' => 'administer comments',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Site Manager' => 'Site Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'administer contact forms'.
  $permissions['administer contact forms'] = array(
    'name' => 'administer contact forms',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'contact',
  );

  // Exported permission: 'administer content types'.
  $permissions['administer content types'] = array(
    'name' => 'administer content types',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer contexts'.
  $permissions['administer contexts'] = array(
    'name' => 'administer contexts',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'context_ui',
  );

  // Exported permission: 'administer custom breadcrumbs'.
  $permissions['administer custom breadcrumbs'] = array(
    'name' => 'administer custom breadcrumbs',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'custom_breadcrumbs',
  );

  // Exported permission: 'administer custom search'.
  $permissions['administer custom search'] = array(
    'name' => 'administer custom search',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'custom_search',
  );

  // Exported permission: 'administer custom search blocks'.
  $permissions['administer custom search blocks'] = array(
    'name' => 'administer custom search blocks',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'custom_search_blocks',
  );

  // Exported permission: 'administer features'.
  $permissions['administer features'] = array(
    'name' => 'administer features',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: 'administer fieldgroups'.
  $permissions['administer fieldgroups'] = array(
    'name' => 'administer fieldgroups',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_group',
  );

  // Exported permission: 'administer fields'.
  $permissions['administer fields'] = array(
    'name' => 'administer fields',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Site Manager' => 'Site Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field',
  );

  // Exported permission: 'administer filters'.
  $permissions['administer filters'] = array(
    'name' => 'administer filters',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'administer flags'.
  $permissions['administer flags'] = array(
    'name' => 'administer flags',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'administer google analytics'.
  $permissions['administer google analytics'] = array(
    'name' => 'administer google analytics',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'googleanalytics',
  );

  // Exported permission: 'administer group'.
  $permissions['administer group'] = array(
    'name' => 'administer group',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Site Manager' => 'Site Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'og',
  );

  // Exported permission: 'administer honeypot'.
  $permissions['administer honeypot'] = array(
    'name' => 'administer honeypot',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'honeypot',
  );

  // Exported permission: 'administer image styles'.
  $permissions['administer image styles'] = array(
    'name' => 'administer image styles',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'image',
  );

  // Exported permission: 'administer mailsystem'.
  $permissions['administer mailsystem'] = array(
    'name' => 'administer mailsystem',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'mailsystem',
  );

  // Exported permission: 'administer media'.
  $permissions['administer media'] = array(
    'name' => 'administer media',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Site Manager' => 'Site Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'media',
  );

  // Exported permission: 'administer menu'.
  $permissions['administer menu'] = array(
    'name' => 'administer menu',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'menu',
  );

  // Exported permission: 'administer mini panels'.
  $permissions['administer mini panels'] = array(
    'name' => 'administer mini panels',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panels_mini',
  );

  // Exported permission: 'administer modernizr'.
  $permissions['administer modernizr'] = array(
    'name' => 'administer modernizr',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'modernizr',
  );

  // Exported permission: 'administer module filter'.
  $permissions['administer module filter'] = array(
    'name' => 'administer module filter',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'module_filter',
  );

  // Exported permission: 'administer modules'.
  $permissions['administer modules'] = array(
    'name' => 'administer modules',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer newsletters'.
  $permissions['administer newsletters'] = array(
    'name' => 'administer newsletters',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'simplenews',
  );

  // Exported permission: 'administer nodes'.
  $permissions['administer nodes'] = array(
    'name' => 'administer nodes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer page manager'.
  $permissions['administer page manager'] = array(
    'name' => 'administer page manager',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'page_manager',
  );

  // Exported permission: 'administer pane access'.
  $permissions['administer pane access'] = array(
    'name' => 'administer pane access',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'administer panels display styles'.
  $permissions['administer panels display styles'] = array(
    'name' => 'administer panels display styles',
    'roles' => array(),
    'module' => 'panels',
  );

  // Exported permission: 'administer panels layouts'.
  $permissions['administer panels layouts'] = array(
    'name' => 'administer panels layouts',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'administer panels pane styles'.
  $permissions['administer panels pane styles'] = array(
    'name' => 'administer panels pane styles',
    'roles' => array(),
    'module' => 'panels',
  );

  // Exported permission: 'administer panels region styles'.
  $permissions['administer panels region styles'] = array(
    'name' => 'administer panels region styles',
    'roles' => array(),
    'module' => 'panels',
  );

  // Exported permission: 'administer panels styles'.
  $permissions['administer panels styles'] = array(
    'name' => 'administer panels styles',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'administer pathauto'.
  $permissions['administer pathauto'] = array(
    'name' => 'administer pathauto',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'pathauto',
  );

  // Exported permission: 'administer permissions'.
  $permissions['administer permissions'] = array(
    'name' => 'administer permissions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer quicktabs'.
  $permissions['administer quicktabs'] = array(
    'name' => 'administer quicktabs',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'quicktabs',
  );

  // Exported permission: 'administer recaptcha'.
  $permissions['administer recaptcha'] = array(
    'name' => 'administer recaptcha',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'recaptcha',
  );

  // Exported permission: 'administer responsive menus'.
  $permissions['administer responsive menus'] = array(
    'name' => 'administer responsive menus',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'responsive_menus',
  );

  // Exported permission: 'administer rules'.
  $permissions['administer rules'] = array(
    'name' => 'administer rules',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'rules',
  );

  // Exported permission: 'administer search'.
  $permissions['administer search'] = array(
    'name' => 'administer search',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'search',
  );

  // Exported permission: 'administer simplenews settings'.
  $permissions['administer simplenews settings'] = array(
    'name' => 'administer simplenews settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'simplenews',
  );

  // Exported permission: 'administer simplenews subscriptions'.
  $permissions['administer simplenews subscriptions'] = array(
    'name' => 'administer simplenews subscriptions',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Site Manager' => 'Site Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'simplenews',
  );

  // Exported permission: 'administer site configuration'.
  $permissions['administer site configuration'] = array(
    'name' => 'administer site configuration',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer software updates'.
  $permissions['administer software updates'] = array(
    'name' => 'administer software updates',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer statistics'.
  $permissions['administer statistics'] = array(
    'name' => 'administer statistics',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'statistics',
  );

  // Exported permission: 'administer string overrides'.
  $permissions['administer string overrides'] = array(
    'name' => 'administer string overrides',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'stringoverrides',
  );

  // Exported permission: 'administer taxonomy'.
  $permissions['administer taxonomy'] = array(
    'name' => 'administer taxonomy',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'administer themes'.
  $permissions['administer themes'] = array(
    'name' => 'administer themes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer url aliases'.
  $permissions['administer url aliases'] = array(
    'name' => 'administer url aliases',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'path',
  );

  // Exported permission: 'administer users'.
  $permissions['administer users'] = array(
    'name' => 'administer users',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Site Manager' => 'Site Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer views'.
  $permissions['administer views'] = array(
    'name' => 'administer views',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'views',
  );

  // Exported permission: 'administer workbench'.
  $permissions['administer workbench'] = array(
    'name' => 'administer workbench',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Site Manager' => 'Site Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'workbench',
  );

  // Exported permission: 'administer xmlsitemap'.
  $permissions['administer xmlsitemap'] = array(
    'name' => 'administer xmlsitemap',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'xmlsitemap',
  );

  // Exported permission: 'block IP addresses'.
  $permissions['block IP addresses'] = array(
    'name' => 'block IP addresses',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'bypass access in place editing'.
  $permissions['bypass access in place editing'] = array(
    'name' => 'bypass access in place editing',
    'roles' => array(),
    'module' => 'panels',
  );

  // Exported permission: 'bypass honeypot protection'.
  $permissions['bypass honeypot protection'] = array(
    'name' => 'bypass honeypot protection',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'honeypot',
  );

  // Exported permission: 'bypass node access'.
  $permissions['bypass node access'] = array(
    'name' => 'bypass node access',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Learning Community Member' => 'Learning Community Member',
      'Site Manager' => 'Site Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'bypass rules access'.
  $permissions['bypass rules access'] = array(
    'name' => 'bypass rules access',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'rules',
  );

  // Exported permission: 'cancel account'.
  $permissions['cancel account'] = array(
    'name' => 'cancel account',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'change layouts in place editing'.
  $permissions['change layouts in place editing'] = array(
    'name' => 'change layouts in place editing',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'change own username'.
  $permissions['change own username'] = array(
    'name' => 'change own username',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'context ajax block access'.
  $permissions['context ajax block access'] = array(
    'name' => 'context ajax block access',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'context_ui',
  );

  // Exported permission: 'create about_the_lc content'.
  $permissions['create about_the_lc content'] = array(
    'name' => 'create about_the_lc content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Site Manager' => 'Site Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create about_the_pair content'.
  $permissions['create about_the_pair content'] = array(
    'name' => 'create about_the_pair content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Site Manager' => 'Site Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create article content'.
  $permissions['create article content'] = array(
    'name' => 'create article content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Site Manager' => 'Site Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create blog_entry content'.
  $permissions['create blog_entry content'] = array(
    'name' => 'create blog_entry content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Site Manager' => 'Site Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create cyber_seminar content'.
  $permissions['create cyber_seminar content'] = array(
    'name' => 'create cyber_seminar content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Site Manager' => 'Site Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create discussion content'.
  $permissions['create discussion content'] = array(
    'name' => 'create discussion content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create event content'.
  $permissions['create event content'] = array(
    'name' => 'create event content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Site Manager' => 'Site Manager',
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create featured_r2r_partner content'.
  $permissions['create featured_r2r_partner content'] = array(
    'name' => 'create featured_r2r_partner content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Site Manager' => 'Site Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create group_announcement content'.
  $permissions['create group_announcement content'] = array(
    'name' => 'create group_announcement content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Mentee' => 'Mentee',
      'Mentor' => 'Mentor',
      'Site Manager' => 'Site Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create group_discussion content'.
  $permissions['create group_discussion content'] = array(
    'name' => 'create group_discussion content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Mentee' => 'Mentee',
      'Mentor' => 'Mentor',
      'Site Manager' => 'Site Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create group_document content'.
  $permissions['create group_document content'] = array(
    'name' => 'create group_document content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Mentee' => 'Mentee',
      'Mentor' => 'Mentor',
      'Site Manager' => 'Site Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create group_event content'.
  $permissions['create group_event content'] = array(
    'name' => 'create group_event content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Mentee' => 'Mentee',
      'Mentor' => 'Mentor',
      'Site Manager' => 'Site Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create group_events_task content'.
  $permissions['create group_events_task content'] = array(
    'name' => 'create group_events_task content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Mentee' => 'Mentee',
      'Mentor' => 'Mentor',
      'Site Manager' => 'Site Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create homepage_about_blerb content'.
  $permissions['create homepage_about_blerb content'] = array(
    'name' => 'create homepage_about_blerb content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Site Manager' => 'Site Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create homepage_featured_content content'.
  $permissions['create homepage_featured_content content'] = array(
    'name' => 'create homepage_featured_content content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Site Manager' => 'Site Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create image content'.
  $permissions['create image content'] = array(
    'name' => 'create image content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Site Manager' => 'Site Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create lc_announcement content'.
  $permissions['create lc_announcement content'] = array(
    'name' => 'create lc_announcement content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Learning Community Member' => 'Learning Community Member',
      'Site Manager' => 'Site Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create lc_discussion content'.
  $permissions['create lc_discussion content'] = array(
    'name' => 'create lc_discussion content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Learning Community Member' => 'Learning Community Member',
      'Site Manager' => 'Site Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create lc_document content'.
  $permissions['create lc_document content'] = array(
    'name' => 'create lc_document content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Learning Community Member' => 'Learning Community Member',
      'Site Manager' => 'Site Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create lc_event content'.
  $permissions['create lc_event content'] = array(
    'name' => 'create lc_event content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Learning Community Member' => 'Learning Community Member',
      'Site Manager' => 'Site Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create lc_library content'.
  $permissions['create lc_library content'] = array(
    'name' => 'create lc_library content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Site Manager' => 'Site Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create lc_story content'.
  $permissions['create lc_story content'] = array(
    'name' => 'create lc_story content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Learning Community Member' => 'Learning Community Member',
      'Site Manager' => 'Site Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create lc_story_archive content'.
  $permissions['create lc_story_archive content'] = array(
    'name' => 'create lc_story_archive content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Site Manager' => 'Site Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create lc_task content'.
  $permissions['create lc_task content'] = array(
    'name' => 'create lc_task content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Learning Community Member' => 'Learning Community Member',
      'Site Manager' => 'Site Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create lc_workspace content'.
  $permissions['create lc_workspace content'] = array(
    'name' => 'create lc_workspace content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Site Manager' => 'Site Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create mentorship_story_archive content'.
  $permissions['create mentorship_story_archive content'] = array(
    'name' => 'create mentorship_story_archive content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Site Manager' => 'Site Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create mini panels'.
  $permissions['create mini panels'] = array(
    'name' => 'create mini panels',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panels_mini',
  );

  // Exported permission: 'create page content'.
  $permissions['create page content'] = array(
    'name' => 'create page content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Site Manager' => 'Site Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create panel content'.
  $permissions['create panel content'] = array(
    'name' => 'create panel content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Site Manager' => 'Site Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create presenter content'.
  $permissions['create presenter content'] = array(
    'name' => 'create presenter content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Site Manager' => 'Site Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create simplenews content'.
  $permissions['create simplenews content'] = array(
    'name' => 'create simplenews content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create story content'.
  $permissions['create story content'] = array(
    'name' => 'create story content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Site Manager' => 'Site Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create url aliases'.
  $permissions['create url aliases'] = array(
    'name' => 'create url aliases',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'path',
  );

  // Exported permission: 'create webform content'.
  $permissions['create webform content'] = array(
    'name' => 'create webform content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Site Manager' => 'Site Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create what_s_new content'.
  $permissions['create what_s_new content'] = array(
    'name' => 'create what_s_new content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Site Manager' => 'Site Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create workspace content'.
  $permissions['create workspace content'] = array(
    'name' => 'create workspace content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Site Manager' => 'Site Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete all webform submissions'.
  $permissions['delete all webform submissions'] = array(
    'name' => 'delete all webform submissions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'delete any about_the_lc content'.
  $permissions['delete any about_the_lc content'] = array(
    'name' => 'delete any about_the_lc content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Site Manager' => 'Site Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any about_the_pair content'.
  $permissions['delete any about_the_pair content'] = array(
    'name' => 'delete any about_the_pair content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Site Manager' => 'Site Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any article content'.
  $permissions['delete any article content'] = array(
    'name' => 'delete any article content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Site Manager' => 'Site Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any blog_entry content'.
  $permissions['delete any blog_entry content'] = array(
    'name' => 'delete any blog_entry content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Site Manager' => 'Site Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any cyber_seminar content'.
  $permissions['delete any cyber_seminar content'] = array(
    'name' => 'delete any cyber_seminar content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Site Manager' => 'Site Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any discussion content'.
  $permissions['delete any discussion content'] = array(
    'name' => 'delete any discussion content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Site Manager' => 'Site Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any event content'.
  $permissions['delete any event content'] = array(
    'name' => 'delete any event content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Site Manager' => 'Site Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any featured_r2r_partner content'.
  $permissions['delete any featured_r2r_partner content'] = array(
    'name' => 'delete any featured_r2r_partner content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Site Manager' => 'Site Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any group_announcement content'.
  $permissions['delete any group_announcement content'] = array(
    'name' => 'delete any group_announcement content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Site Manager' => 'Site Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any group_discussion content'.
  $permissions['delete any group_discussion content'] = array(
    'name' => 'delete any group_discussion content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Site Manager' => 'Site Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any group_document content'.
  $permissions['delete any group_document content'] = array(
    'name' => 'delete any group_document content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Site Manager' => 'Site Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any group_event content'.
  $permissions['delete any group_event content'] = array(
    'name' => 'delete any group_event content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Site Manager' => 'Site Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any group_events_task content'.
  $permissions['delete any group_events_task content'] = array(
    'name' => 'delete any group_events_task content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Site Manager' => 'Site Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any homepage_about_blerb content'.
  $permissions['delete any homepage_about_blerb content'] = array(
    'name' => 'delete any homepage_about_blerb content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Site Manager' => 'Site Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any homepage_featured_content content'.
  $permissions['delete any homepage_featured_content content'] = array(
    'name' => 'delete any homepage_featured_content content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Site Manager' => 'Site Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any image content'.
  $permissions['delete any image content'] = array(
    'name' => 'delete any image content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Site Manager' => 'Site Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any lc_announcement content'.
  $permissions['delete any lc_announcement content'] = array(
    'name' => 'delete any lc_announcement content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Site Manager' => 'Site Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any lc_discussion content'.
  $permissions['delete any lc_discussion content'] = array(
    'name' => 'delete any lc_discussion content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Site Manager' => 'Site Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any lc_document content'.
  $permissions['delete any lc_document content'] = array(
    'name' => 'delete any lc_document content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Site Manager' => 'Site Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any lc_event content'.
  $permissions['delete any lc_event content'] = array(
    'name' => 'delete any lc_event content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Site Manager' => 'Site Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any lc_library content'.
  $permissions['delete any lc_library content'] = array(
    'name' => 'delete any lc_library content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Site Manager' => 'Site Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any lc_story content'.
  $permissions['delete any lc_story content'] = array(
    'name' => 'delete any lc_story content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Site Manager' => 'Site Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any lc_story_archive content'.
  $permissions['delete any lc_story_archive content'] = array(
    'name' => 'delete any lc_story_archive content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Site Manager' => 'Site Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any lc_task content'.
  $permissions['delete any lc_task content'] = array(
    'name' => 'delete any lc_task content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Site Manager' => 'Site Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any lc_workspace content'.
  $permissions['delete any lc_workspace content'] = array(
    'name' => 'delete any lc_workspace content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Site Manager' => 'Site Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any mentorship_story_archive content'.
  $permissions['delete any mentorship_story_archive content'] = array(
    'name' => 'delete any mentorship_story_archive content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Site Manager' => 'Site Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any page content'.
  $permissions['delete any page content'] = array(
    'name' => 'delete any page content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Site Manager' => 'Site Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any panel content'.
  $permissions['delete any panel content'] = array(
    'name' => 'delete any panel content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Site Manager' => 'Site Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any presenter content'.
  $permissions['delete any presenter content'] = array(
    'name' => 'delete any presenter content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Site Manager' => 'Site Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any simplenews content'.
  $permissions['delete any simplenews content'] = array(
    'name' => 'delete any simplenews content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any story content'.
  $permissions['delete any story content'] = array(
    'name' => 'delete any story content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Site Manager' => 'Site Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any webform content'.
  $permissions['delete any webform content'] = array(
    'name' => 'delete any webform content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Site Manager' => 'Site Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any what_s_new content'.
  $permissions['delete any what_s_new content'] = array(
    'name' => 'delete any what_s_new content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Site Manager' => 'Site Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any workspace content'.
  $permissions['delete any workspace content'] = array(
    'name' => 'delete any workspace content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Site Manager' => 'Site Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete backup files'.
  $permissions['delete backup files'] = array(
    'name' => 'delete backup files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: 'delete own about_the_lc content'.
  $permissions['delete own about_the_lc content'] = array(
    'name' => 'delete own about_the_lc content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Site Manager' => 'Site Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own about_the_pair content'.
  $permissions['delete own about_the_pair content'] = array(
    'name' => 'delete own about_the_pair content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Site Manager' => 'Site Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own article content'.
  $permissions['delete own article content'] = array(
    'name' => 'delete own article content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Site Manager' => 'Site Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own blog_entry content'.
  $permissions['delete own blog_entry content'] = array(
    'name' => 'delete own blog_entry content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Site Manager' => 'Site Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own cyber_seminar content'.
  $permissions['delete own cyber_seminar content'] = array(
    'name' => 'delete own cyber_seminar content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Site Manager' => 'Site Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own discussion content'.
  $permissions['delete own discussion content'] = array(
    'name' => 'delete own discussion content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Site Manager' => 'Site Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own event content'.
  $permissions['delete own event content'] = array(
    'name' => 'delete own event content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Site Manager' => 'Site Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own featured_r2r_partner content'.
  $permissions['delete own featured_r2r_partner content'] = array(
    'name' => 'delete own featured_r2r_partner content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Site Manager' => 'Site Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own group_announcement content'.
  $permissions['delete own group_announcement content'] = array(
    'name' => 'delete own group_announcement content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Mentee' => 'Mentee',
      'Mentor' => 'Mentor',
      'Site Manager' => 'Site Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own group_discussion content'.
  $permissions['delete own group_discussion content'] = array(
    'name' => 'delete own group_discussion content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Mentee' => 'Mentee',
      'Mentor' => 'Mentor',
      'Site Manager' => 'Site Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own group_document content'.
  $permissions['delete own group_document content'] = array(
    'name' => 'delete own group_document content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Mentee' => 'Mentee',
      'Mentor' => 'Mentor',
      'Site Manager' => 'Site Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own group_event content'.
  $permissions['delete own group_event content'] = array(
    'name' => 'delete own group_event content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Mentee' => 'Mentee',
      'Mentor' => 'Mentor',
      'Site Manager' => 'Site Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own group_events_task content'.
  $permissions['delete own group_events_task content'] = array(
    'name' => 'delete own group_events_task content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Mentee' => 'Mentee',
      'Mentor' => 'Mentor',
      'Site Manager' => 'Site Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own homepage_about_blerb content'.
  $permissions['delete own homepage_about_blerb content'] = array(
    'name' => 'delete own homepage_about_blerb content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Site Manager' => 'Site Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own homepage_featured_content content'.
  $permissions['delete own homepage_featured_content content'] = array(
    'name' => 'delete own homepage_featured_content content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Site Manager' => 'Site Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own image content'.
  $permissions['delete own image content'] = array(
    'name' => 'delete own image content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Site Manager' => 'Site Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own lc_announcement content'.
  $permissions['delete own lc_announcement content'] = array(
    'name' => 'delete own lc_announcement content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Learning Community Member' => 'Learning Community Member',
      'Site Manager' => 'Site Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own lc_discussion content'.
  $permissions['delete own lc_discussion content'] = array(
    'name' => 'delete own lc_discussion content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Learning Community Member' => 'Learning Community Member',
      'Site Manager' => 'Site Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own lc_document content'.
  $permissions['delete own lc_document content'] = array(
    'name' => 'delete own lc_document content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Learning Community Member' => 'Learning Community Member',
      'Site Manager' => 'Site Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own lc_event content'.
  $permissions['delete own lc_event content'] = array(
    'name' => 'delete own lc_event content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Learning Community Member' => 'Learning Community Member',
      'Site Manager' => 'Site Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own lc_library content'.
  $permissions['delete own lc_library content'] = array(
    'name' => 'delete own lc_library content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Site Manager' => 'Site Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own lc_story content'.
  $permissions['delete own lc_story content'] = array(
    'name' => 'delete own lc_story content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Learning Community Member' => 'Learning Community Member',
      'Site Manager' => 'Site Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own lc_story_archive content'.
  $permissions['delete own lc_story_archive content'] = array(
    'name' => 'delete own lc_story_archive content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Site Manager' => 'Site Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own lc_task content'.
  $permissions['delete own lc_task content'] = array(
    'name' => 'delete own lc_task content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Learning Community Member' => 'Learning Community Member',
      'Site Manager' => 'Site Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own lc_workspace content'.
  $permissions['delete own lc_workspace content'] = array(
    'name' => 'delete own lc_workspace content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Site Manager' => 'Site Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own mentorship_story_archive content'.
  $permissions['delete own mentorship_story_archive content'] = array(
    'name' => 'delete own mentorship_story_archive content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Site Manager' => 'Site Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own page content'.
  $permissions['delete own page content'] = array(
    'name' => 'delete own page content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Site Manager' => 'Site Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own panel content'.
  $permissions['delete own panel content'] = array(
    'name' => 'delete own panel content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Site Manager' => 'Site Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own presenter content'.
  $permissions['delete own presenter content'] = array(
    'name' => 'delete own presenter content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Site Manager' => 'Site Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own simplenews content'.
  $permissions['delete own simplenews content'] = array(
    'name' => 'delete own simplenews content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own story content'.
  $permissions['delete own story content'] = array(
    'name' => 'delete own story content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Site Manager' => 'Site Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own webform content'.
  $permissions['delete own webform content'] = array(
    'name' => 'delete own webform content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Site Manager' => 'Site Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own webform submissions'.
  $permissions['delete own webform submissions'] = array(
    'name' => 'delete own webform submissions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'delete own what_s_new content'.
  $permissions['delete own what_s_new content'] = array(
    'name' => 'delete own what_s_new content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Site Manager' => 'Site Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own workspace content'.
  $permissions['delete own workspace content'] = array(
    'name' => 'delete own workspace content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Site Manager' => 'Site Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete revisions'.
  $permissions['delete revisions'] = array(
    'name' => 'delete revisions',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Site Manager' => 'Site Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in category'.
  $permissions['delete terms in category'] = array(
    'name' => 'delete terms in category',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Site Manager' => 'Site Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in newsletter'.
  $permissions['delete terms in newsletter'] = array(
    'name' => 'delete terms in newsletter',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Site Manager' => 'Site Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in tags'.
  $permissions['delete terms in tags'] = array(
    'name' => 'delete terms in tags',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Site Manager' => 'Site Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'diff view changes'.
  $permissions['diff view changes'] = array(
    'name' => 'diff view changes',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'diff',
  );

  // Exported permission: 'display drupal links'.
  $permissions['display drupal links'] = array(
    'name' => 'display drupal links',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'edit all webform submissions'.
  $permissions['edit all webform submissions'] = array(
    'name' => 'edit all webform submissions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'edit any about_the_lc content'.
  $permissions['edit any about_the_lc content'] = array(
    'name' => 'edit any about_the_lc content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Site Manager' => 'Site Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any about_the_pair content'.
  $permissions['edit any about_the_pair content'] = array(
    'name' => 'edit any about_the_pair content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Site Manager' => 'Site Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any article content'.
  $permissions['edit any article content'] = array(
    'name' => 'edit any article content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Site Manager' => 'Site Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any blog_entry content'.
  $permissions['edit any blog_entry content'] = array(
    'name' => 'edit any blog_entry content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Site Manager' => 'Site Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any cyber_seminar content'.
  $permissions['edit any cyber_seminar content'] = array(
    'name' => 'edit any cyber_seminar content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Site Manager' => 'Site Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any discussion content'.
  $permissions['edit any discussion content'] = array(
    'name' => 'edit any discussion content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Site Manager' => 'Site Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any event content'.
  $permissions['edit any event content'] = array(
    'name' => 'edit any event content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Site Manager' => 'Site Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any featured_r2r_partner content'.
  $permissions['edit any featured_r2r_partner content'] = array(
    'name' => 'edit any featured_r2r_partner content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Site Manager' => 'Site Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any group_announcement content'.
  $permissions['edit any group_announcement content'] = array(
    'name' => 'edit any group_announcement content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Site Manager' => 'Site Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any group_discussion content'.
  $permissions['edit any group_discussion content'] = array(
    'name' => 'edit any group_discussion content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Site Manager' => 'Site Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any group_document content'.
  $permissions['edit any group_document content'] = array(
    'name' => 'edit any group_document content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Site Manager' => 'Site Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any group_event content'.
  $permissions['edit any group_event content'] = array(
    'name' => 'edit any group_event content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Site Manager' => 'Site Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any group_events_task content'.
  $permissions['edit any group_events_task content'] = array(
    'name' => 'edit any group_events_task content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Site Manager' => 'Site Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any homepage_about_blerb content'.
  $permissions['edit any homepage_about_blerb content'] = array(
    'name' => 'edit any homepage_about_blerb content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Site Manager' => 'Site Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any homepage_featured_content content'.
  $permissions['edit any homepage_featured_content content'] = array(
    'name' => 'edit any homepage_featured_content content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Site Manager' => 'Site Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any image content'.
  $permissions['edit any image content'] = array(
    'name' => 'edit any image content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Site Manager' => 'Site Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any lc_announcement content'.
  $permissions['edit any lc_announcement content'] = array(
    'name' => 'edit any lc_announcement content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Site Manager' => 'Site Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any lc_discussion content'.
  $permissions['edit any lc_discussion content'] = array(
    'name' => 'edit any lc_discussion content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Site Manager' => 'Site Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any lc_document content'.
  $permissions['edit any lc_document content'] = array(
    'name' => 'edit any lc_document content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Site Manager' => 'Site Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any lc_event content'.
  $permissions['edit any lc_event content'] = array(
    'name' => 'edit any lc_event content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Site Manager' => 'Site Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any lc_library content'.
  $permissions['edit any lc_library content'] = array(
    'name' => 'edit any lc_library content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Site Manager' => 'Site Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any lc_story content'.
  $permissions['edit any lc_story content'] = array(
    'name' => 'edit any lc_story content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Site Manager' => 'Site Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any lc_story_archive content'.
  $permissions['edit any lc_story_archive content'] = array(
    'name' => 'edit any lc_story_archive content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Site Manager' => 'Site Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any lc_task content'.
  $permissions['edit any lc_task content'] = array(
    'name' => 'edit any lc_task content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Learning Community Member' => 'Learning Community Member',
      'Site Manager' => 'Site Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any lc_workspace content'.
  $permissions['edit any lc_workspace content'] = array(
    'name' => 'edit any lc_workspace content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Site Manager' => 'Site Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any mentorship_story_archive content'.
  $permissions['edit any mentorship_story_archive content'] = array(
    'name' => 'edit any mentorship_story_archive content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Site Manager' => 'Site Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any page content'.
  $permissions['edit any page content'] = array(
    'name' => 'edit any page content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Site Manager' => 'Site Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any panel content'.
  $permissions['edit any panel content'] = array(
    'name' => 'edit any panel content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Site Manager' => 'Site Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any presenter content'.
  $permissions['edit any presenter content'] = array(
    'name' => 'edit any presenter content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Site Manager' => 'Site Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any simplenews content'.
  $permissions['edit any simplenews content'] = array(
    'name' => 'edit any simplenews content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any story content'.
  $permissions['edit any story content'] = array(
    'name' => 'edit any story content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Site Manager' => 'Site Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any webform content'.
  $permissions['edit any webform content'] = array(
    'name' => 'edit any webform content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Site Manager' => 'Site Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any what_s_new content'.
  $permissions['edit any what_s_new content'] = array(
    'name' => 'edit any what_s_new content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Site Manager' => 'Site Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any workspace content'.
  $permissions['edit any workspace content'] = array(
    'name' => 'edit any workspace content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Site Manager' => 'Site Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit media'.
  $permissions['edit media'] = array(
    'name' => 'edit media',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Site Manager' => 'Site Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'media',
  );

  // Exported permission: 'edit mimemail user settings'.
  $permissions['edit mimemail user settings'] = array(
    'name' => 'edit mimemail user settings',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'mimemail',
  );

  // Exported permission: 'edit own about_the_lc content'.
  $permissions['edit own about_the_lc content'] = array(
    'name' => 'edit own about_the_lc content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Site Manager' => 'Site Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own about_the_pair content'.
  $permissions['edit own about_the_pair content'] = array(
    'name' => 'edit own about_the_pair content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Site Manager' => 'Site Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own article content'.
  $permissions['edit own article content'] = array(
    'name' => 'edit own article content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Site Manager' => 'Site Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own blog_entry content'.
  $permissions['edit own blog_entry content'] = array(
    'name' => 'edit own blog_entry content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Site Manager' => 'Site Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own comments'.
  $permissions['edit own comments'] = array(
    'name' => 'edit own comments',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'edit own cyber_seminar content'.
  $permissions['edit own cyber_seminar content'] = array(
    'name' => 'edit own cyber_seminar content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Site Manager' => 'Site Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own discussion content'.
  $permissions['edit own discussion content'] = array(
    'name' => 'edit own discussion content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own event content'.
  $permissions['edit own event content'] = array(
    'name' => 'edit own event content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own featured_r2r_partner content'.
  $permissions['edit own featured_r2r_partner content'] = array(
    'name' => 'edit own featured_r2r_partner content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Site Manager' => 'Site Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own group_announcement content'.
  $permissions['edit own group_announcement content'] = array(
    'name' => 'edit own group_announcement content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Mentee' => 'Mentee',
      'Mentor' => 'Mentor',
      'Site Manager' => 'Site Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own group_discussion content'.
  $permissions['edit own group_discussion content'] = array(
    'name' => 'edit own group_discussion content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Mentee' => 'Mentee',
      'Mentor' => 'Mentor',
      'Site Manager' => 'Site Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own group_document content'.
  $permissions['edit own group_document content'] = array(
    'name' => 'edit own group_document content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Mentee' => 'Mentee',
      'Mentor' => 'Mentor',
      'Site Manager' => 'Site Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own group_event content'.
  $permissions['edit own group_event content'] = array(
    'name' => 'edit own group_event content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Mentee' => 'Mentee',
      'Mentor' => 'Mentor',
      'Site Manager' => 'Site Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own group_events_task content'.
  $permissions['edit own group_events_task content'] = array(
    'name' => 'edit own group_events_task content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Mentee' => 'Mentee',
      'Mentor' => 'Mentor',
      'Site Manager' => 'Site Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own homepage_about_blerb content'.
  $permissions['edit own homepage_about_blerb content'] = array(
    'name' => 'edit own homepage_about_blerb content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Site Manager' => 'Site Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own homepage_featured_content content'.
  $permissions['edit own homepage_featured_content content'] = array(
    'name' => 'edit own homepage_featured_content content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Site Manager' => 'Site Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own image content'.
  $permissions['edit own image content'] = array(
    'name' => 'edit own image content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Site Manager' => 'Site Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own lc_announcement content'.
  $permissions['edit own lc_announcement content'] = array(
    'name' => 'edit own lc_announcement content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Learning Community Member' => 'Learning Community Member',
      'Site Manager' => 'Site Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own lc_discussion content'.
  $permissions['edit own lc_discussion content'] = array(
    'name' => 'edit own lc_discussion content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Learning Community Member' => 'Learning Community Member',
      'Site Manager' => 'Site Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own lc_document content'.
  $permissions['edit own lc_document content'] = array(
    'name' => 'edit own lc_document content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Learning Community Member' => 'Learning Community Member',
      'Site Manager' => 'Site Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own lc_event content'.
  $permissions['edit own lc_event content'] = array(
    'name' => 'edit own lc_event content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Learning Community Member' => 'Learning Community Member',
      'Site Manager' => 'Site Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own lc_library content'.
  $permissions['edit own lc_library content'] = array(
    'name' => 'edit own lc_library content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Site Manager' => 'Site Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own lc_story content'.
  $permissions['edit own lc_story content'] = array(
    'name' => 'edit own lc_story content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Learning Community Member' => 'Learning Community Member',
      'Site Manager' => 'Site Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own lc_story_archive content'.
  $permissions['edit own lc_story_archive content'] = array(
    'name' => 'edit own lc_story_archive content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Site Manager' => 'Site Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own lc_task content'.
  $permissions['edit own lc_task content'] = array(
    'name' => 'edit own lc_task content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Site Manager' => 'Site Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own lc_workspace content'.
  $permissions['edit own lc_workspace content'] = array(
    'name' => 'edit own lc_workspace content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Site Manager' => 'Site Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own mentorship_story_archive content'.
  $permissions['edit own mentorship_story_archive content'] = array(
    'name' => 'edit own mentorship_story_archive content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Site Manager' => 'Site Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own page content'.
  $permissions['edit own page content'] = array(
    'name' => 'edit own page content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Site Manager' => 'Site Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own panel content'.
  $permissions['edit own panel content'] = array(
    'name' => 'edit own panel content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Site Manager' => 'Site Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own presenter content'.
  $permissions['edit own presenter content'] = array(
    'name' => 'edit own presenter content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Site Manager' => 'Site Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own simplenews content'.
  $permissions['edit own simplenews content'] = array(
    'name' => 'edit own simplenews content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own story content'.
  $permissions['edit own story content'] = array(
    'name' => 'edit own story content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Site Manager' => 'Site Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own webform content'.
  $permissions['edit own webform content'] = array(
    'name' => 'edit own webform content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Site Manager' => 'Site Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own webform submissions'.
  $permissions['edit own webform submissions'] = array(
    'name' => 'edit own webform submissions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'edit own what_s_new content'.
  $permissions['edit own what_s_new content'] = array(
    'name' => 'edit own what_s_new content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Site Manager' => 'Site Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own workspace content'.
  $permissions['edit own workspace content'] = array(
    'name' => 'edit own workspace content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Site Manager' => 'Site Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit revisions'.
  $permissions['edit revisions'] = array(
    'name' => 'edit revisions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'revisioning',
  );

  // Exported permission: 'edit terms in category'.
  $permissions['edit terms in category'] = array(
    'name' => 'edit terms in category',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Site Manager' => 'Site Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in newsletter'.
  $permissions['edit terms in newsletter'] = array(
    'name' => 'edit terms in newsletter',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Site Manager' => 'Site Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in tags'.
  $permissions['edit terms in tags'] = array(
    'name' => 'edit terms in tags',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Site Manager' => 'Site Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit webform components'.
  $permissions['edit webform components'] = array(
    'name' => 'edit webform components',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'flush caches'.
  $permissions['flush caches'] = array(
    'name' => 'flush caches',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'generate features'.
  $permissions['generate features'] = array(
    'name' => 'generate features',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: 'import media'.
  $permissions['import media'] = array(
    'name' => 'import media',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Site Manager' => 'Site Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'media',
  );

  // Exported permission: 'manage features'.
  $permissions['manage features'] = array(
    'name' => 'manage features',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: 'notify of path changes'.
  $permissions['notify of path changes'] = array(
    'name' => 'notify of path changes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'pathauto',
  );

  // Exported permission: 'opt-in or out of tracking'.
  $permissions['opt-in or out of tracking'] = array(
    'name' => 'opt-in or out of tracking',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'googleanalytics',
  );

  // Exported permission: 'overview scheduled newsletters'.
  $permissions['overview scheduled newsletters'] = array(
    'name' => 'overview scheduled newsletters',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'simplenews_scheduler',
  );

  // Exported permission: 'perform backup'.
  $permissions['perform backup'] = array(
    'name' => 'perform backup',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: 'post comments'.
  $permissions['post comments'] = array(
    'name' => 'post comments',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'publish revisions'.
  $permissions['publish revisions'] = array(
    'name' => 'publish revisions',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Site Manager' => 'Site Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'revisioning',
  );

  // Exported permission: 'receive email advuser'.
  $permissions['receive email advuser'] = array(
    'name' => 'receive email advuser',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'advuser',
  );

  // Exported permission: 'rename features'.
  $permissions['rename features'] = array(
    'name' => 'rename features',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: 'restore from backup'.
  $permissions['restore from backup'] = array(
    'name' => 'restore from backup',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: 'revert revisions'.
  $permissions['revert revisions'] = array(
    'name' => 'revert revisions',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Site Manager' => 'Site Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'save draft'.
  $permissions['save draft'] = array(
    'name' => 'save draft',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'save_draft',
  );

  // Exported permission: 'search content'.
  $permissions['search content'] = array(
    'name' => 'search content',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'search',
  );

  // Exported permission: 'select account cancellation method'.
  $permissions['select account cancellation method'] = array(
    'name' => 'select account cancellation method',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'send arbitrary files'.
  $permissions['send arbitrary files'] = array(
    'name' => 'send arbitrary files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'mimemail',
  );

  // Exported permission: 'send email advuser'.
  $permissions['send email advuser'] = array(
    'name' => 'send email advuser',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'advuser',
  );

  // Exported permission: 'send newsletter'.
  $permissions['send newsletter'] = array(
    'name' => 'send newsletter',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'simplenews',
  );

  // Exported permission: 'send scheduled newsletters'.
  $permissions['send scheduled newsletters'] = array(
    'name' => 'send scheduled newsletters',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'simplenews_scheduler',
  );

  // Exported permission: 'skip CAPTCHA'.
  $permissions['skip CAPTCHA'] = array(
    'name' => 'skip CAPTCHA',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'captcha',
  );

  // Exported permission: 'skip comment approval'.
  $permissions['skip comment approval'] = array(
    'name' => 'skip comment approval',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Site Manager' => 'Site Manager',
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'subscribe to newsletters'.
  $permissions['subscribe to newsletters'] = array(
    'name' => 'subscribe to newsletters',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'simplenews',
  );

  // Exported permission: 'sync local profile with connections'.
  $permissions['sync local profile with connections'] = array(
    'name' => 'sync local profile with connections',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'connector',
  );

  // Exported permission: 'unpublish current revision'.
  $permissions['unpublish current revision'] = array(
    'name' => 'unpublish current revision',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Site Manager' => 'Site Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'revisioning',
  );

  // Exported permission: 'use PHP for settings'.
  $permissions['use PHP for settings'] = array(
    'name' => 'use PHP for settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'php',
  );

  // Exported permission: 'use PHP for tracking visibility'.
  $permissions['use PHP for tracking visibility'] = array(
    'name' => 'use PHP for tracking visibility',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'googleanalytics',
  );

  // Exported permission: 'use advanced search'.
  $permissions['use advanced search'] = array(
    'name' => 'use advanced search',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'search',
  );

  // Exported permission: 'use ctools import'.
  $permissions['use ctools import'] = array(
    'name' => 'use ctools import',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'ctools',
  );

  // Exported permission: 'use custom search'.
  $permissions['use custom search'] = array(
    'name' => 'use custom search',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'custom_search',
  );

  // Exported permission: 'use custom search blocks'.
  $permissions['use custom search blocks'] = array(
    'name' => 'use custom search blocks',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'custom_search_blocks',
  );

  // Exported permission: 'use flag import'.
  $permissions['use flag import'] = array(
    'name' => 'use flag import',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'use ipe with page manager'.
  $permissions['use ipe with page manager'] = array(
    'name' => 'use ipe with page manager',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'use page manager'.
  $permissions['use page manager'] = array(
    'name' => 'use page manager',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'page_manager',
  );

  // Exported permission: 'use panels caching features'.
  $permissions['use panels caching features'] = array(
    'name' => 'use panels caching features',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'use panels dashboard'.
  $permissions['use panels dashboard'] = array(
    'name' => 'use panels dashboard',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'use panels in place editing'.
  $permissions['use panels in place editing'] = array(
    'name' => 'use panels in place editing',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'use panels locks'.
  $permissions['use panels locks'] = array(
    'name' => 'use panels locks',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'use php in custom breadcrumbs'.
  $permissions['use php in custom breadcrumbs'] = array(
    'name' => 'use php in custom breadcrumbs',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'custom_breadcrumbs',
  );

  // Exported permission: 'use text format filtered_html'.
  $permissions['use text format filtered_html'] = array(
    'name' => 'use text format filtered_html',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use text format full_html'.
  $permissions['use text format full_html'] = array(
    'name' => 'use text format full_html',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use text format raw_html'.
  $permissions['use text format raw_html'] = array(
    'name' => 'use text format raw_html',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'view media'.
  $permissions['view media'] = array(
    'name' => 'view media',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Learning Community Member' => 'Learning Community Member',
      'Mentee' => 'Mentee',
      'Mentor' => 'Mentor',
      'Site Manager' => 'Site Manager',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'media',
  );

  // Exported permission: 'view own unpublished content'.
  $permissions['view own unpublished content'] = array(
    'name' => 'view own unpublished content',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Site Manager' => 'Site Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view pane admin links'.
  $permissions['view pane admin links'] = array(
    'name' => 'view pane admin links',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'view post access counter'.
  $permissions['view post access counter'] = array(
    'name' => 'view post access counter',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'statistics',
  );

  // Exported permission: 'view revision status messages'.
  $permissions['view revision status messages'] = array(
    'name' => 'view revision status messages',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'revisioning',
  );

  // Exported permission: 'view revisions'.
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Site Manager' => 'Site Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view the administration theme'.
  $permissions['view the administration theme'] = array(
    'name' => 'view the administration theme',
    'roles' => array(
      'Content Editor' => 'Content Editor',
      'Site Manager' => 'Site Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'xls export views'.
  $permissions['xls export views'] = array(
    'name' => 'xls export views',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'views_export_xls',
  );

  return $permissions;
}
