<?php
/**
 * @file
 * rtr_views.quicktabs.inc
 */

/**
 * Implements hook_quicktabs_default_quicktabs().
 */
function rtr_views_quicktabs_default_quicktabs() {
  $export = array();

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'homepage_tab_menu';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = FALSE;
  $quicktabs->default_tab = 1;
  $quicktabs->title = 'Homepage Tab Menu';
  $quicktabs->tabs = array(
    0 => array(
      'vid' => 'homepage',
      'display' => 'block_3',
      'args' => '',
      'title' => 'Recent Learning Communities',
      'weight' => '-100',
      'type' => 'view',
    ),
    1 => array(
      'vid' => 'homepage',
      'display' => 'block_4',
      'args' => '',
      'title' => 'Recent Discussions',
      'weight' => '-99',
      'type' => 'view',
    ),
    2 => array(
      'vid' => 'homepage',
      'display' => 'block_5',
      'args' => '',
      'title' => 'Recent Cyber-Seminars',
      'weight' => '-98',
      'type' => 'view',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'nostyle';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('Homepage Tab Menu');
  t('Recent Cyber-Seminars');
  t('Recent Discussions');
  t('Recent Learning Communities');

  $export['homepage_tab_menu'] = $quicktabs;

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'learning_community_recent';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = FALSE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'Learning Community Recent';
  $quicktabs->tabs = array(
    0 => array(
      'vid' => 'lc_content',
      'display' => 'panel_pane_6',
      'args' => '%1',
      'title' => 'Recent Discussions',
      'weight' => '-100',
      'type' => 'view',
    ),
    1 => array(
      'vid' => 'lc_content',
      'display' => 'panel_pane_7',
      'args' => '%1',
      'title' => 'Recent Documents',
      'weight' => '-99',
      'type' => 'view',
    ),
    2 => array(
      'vid' => 'lc_content',
      'display' => 'panel_pane_8',
      'args' => '%1',
      'title' => 'Recent Stories',
      'weight' => '-98',
      'type' => 'view',
    ),
    3 => array(
      'vid' => 'lc_content',
      'display' => 'panel_pane_9',
      'args' => '%1',
      'title' => 'Recent Tasks',
      'weight' => '-97',
      'type' => 'view',
    ),
    4 => array(
      'vid' => 'lc_content',
      'display' => 'panel_pane_13',
      'args' => '%1',
      'title' => 'Library',
      'weight' => '-96',
      'type' => 'view',
    ),
    5 => array(
      'vid' => 'lc_content',
      'display' => 'panel_pane_10',
      'args' => '%1',
      'title' => 'Search',
      'weight' => '-95',
      'type' => 'view',
    ),
    6 => array(
      'vid' => 'lc_users',
      'display' => 'default',
      'args' => '%1',
      'title' => 'Member Directory',
      'weight' => '-94',
      'type' => 'view',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'nostyle';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('Learning Community Recent');
  t('Library');
  t('Member Directory');
  t('Recent Discussions');
  t('Recent Documents');
  t('Recent Stories');
  t('Recent Tasks');
  t('Search');

  $export['learning_community_recent'] = $quicktabs;

  return $export;
}
