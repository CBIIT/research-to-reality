<?php
/**
 * @file
 * rtr_views.layouts.inc
 */

/**
 * Implements hook_default_panels_layout().
 */
function rtr_views_default_panels_layout() {
  $export = array();

  $layout = new stdClass();
  $layout->disabled = FALSE; /* Edit this to true to make a default layout disabled initially */
  $layout->api_version = 1;
  $layout->name = 'homepage';
  $layout->admin_title = 'HomePage';
  $layout->admin_description = '';
  $layout->category = '';
  $layout->plugin = 'flexible';
  $layout->settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
          1 => 5,
          2 => 8,
          3 => 9,
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'call_to_action',
          1 => 'what_s_new',
        ),
        'parent' => 'main',
      ),
      'call_to_action' => array(
        'type' => 'region',
        'title' => 'Call To Action',
        'width' => 50,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
        'hide_empty' => 0,
      ),
      'what_s_new' => array(
        'type' => 'region',
        'title' => 'What\'s New',
        'width' => 50,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
        'hide_empty' => 0,
      ),
      5 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'what_is_r2r_',
          1 => 'recent_discussions',
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 0,
      ),
      8 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'events',
          1 => 'webinars',
          2 => 'calendar',
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 0,
      ),
      'events' => array(
        'type' => 'region',
        'title' => 'Events',
        'width' => '33.49347129834935',
        'width_type' => '%',
        'parent' => '8',
        'class' => '',
        'hide_empty' => 0,
      ),
      'webinars' => array(
        'type' => 'region',
        'title' => 'Webinars',
        'width' => '33.49130479907402',
        'width_type' => '%',
        'parent' => '8',
        'class' => '',
        'hide_empty' => 0,
      ),
      'calendar' => array(
        'type' => 'region',
        'title' => 'Calendar',
        'width' => '33.01522390257663',
        'width_type' => '%',
        'parent' => '8',
        'class' => '',
        'hide_empty' => 0,
      ),
      9 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'featured_partner',
          1 => 'older_feat_partners',
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 0,
      ),
      'featured_partner' => array(
        'type' => 'region',
        'title' => 'Featured Partner',
        'width' => '66.87607785168761',
        'width_type' => '%',
        'parent' => '9',
        'class' => '',
        'hide_empty' => 0,
      ),
      'older_feat_partners' => array(
        'type' => 'region',
        'title' => 'Older Feat Partners',
        'width' => '33.123922148312396',
        'width_type' => '%',
        'parent' => '9',
        'class' => '',
        'hide_empty' => 0,
      ),
      'what_is_r2r_' => array(
        'type' => 'region',
        'title' => 'What is R2R?',
        'width' => '33.370288248337026',
        'width_type' => '%',
        'parent' => '5',
        'class' => '',
        'hide_empty' => 0,
      ),
      'recent_discussions' => array(
        'type' => 'region',
        'title' => 'Recent Discussions',
        'width' => '66.62971175166298',
        'width_type' => '%',
        'parent' => '5',
        'class' => '',
        'hide_empty' => 0,
      ),
    ),
  );
  $export['homepage'] = $layout;

  return $export;
}
