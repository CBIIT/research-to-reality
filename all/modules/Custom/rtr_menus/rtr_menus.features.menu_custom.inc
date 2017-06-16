<?php
/**
 * @file
 * rtr_menus.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function rtr_menus_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: main-menu.
  $menus['main-menu'] = array(
    'menu_name' => 'main-menu',
    'title' => 'Main menu',
    'description' => 'The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.',
  );
  // Exported menu: menu-categories.
  $menus['menu-categories'] = array(
    'menu_name' => 'menu-categories',
    'title' => 'Categories',
    'description' => '',
  );
  // Exported menu: menu-discussions-menu.
  $menus['menu-discussions-menu'] = array(
    'menu_name' => 'menu-discussions-menu',
    'title' => 'Discussions Menu',
    'description' => '',
  );
  // Exported menu: menu-footer-menu.
  $menus['menu-footer-menu'] = array(
    'menu_name' => 'menu-footer-menu',
    'title' => 'Footer Menu',
    'description' => '',
  );
  // Exported menu: menu-lc-workspace-add-content.
  $menus['menu-lc-workspace-add-content'] = array(
    'menu_name' => 'menu-lc-workspace-add-content',
    'title' => 'LC Workspace Add Content',
    'description' => '',
  );
  // Exported menu: menu-the-learning-communities.
  $menus['menu-the-learning-communities'] = array(
    'menu_name' => 'menu-the-learning-communities',
    'title' => 'The Learning Communities',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Categories');
  t('Discussions Menu');
  t('Footer Menu');
  t('LC Workspace Add Content');
  t('Main menu');
  t('The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.');
  t('The Learning Communities');

  return $menus;
}
