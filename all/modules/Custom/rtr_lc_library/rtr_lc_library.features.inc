<?php
/**
 * @file
 * rtr_lc_library.features.inc
 */

/**
 * Implements hook_node_info().
 */
function rtr_lc_library_node_info() {
  $items = array(
    'lc_library' => array(
      'name' => t('lc_library'),
      'base' => 'node_content',
      'description' => t('Learning Communities Library Document'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
