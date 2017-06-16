<?php

/**
 * @file
 * template.php
 */
function r2r_bootstrap_theme(&$existing, $type, $theme, $path) {
  $hooks['r2r_bootstrap_bootstrap_search_form_wrapper'] = array(
      'render element' => 'element'
  );
  $hooks["user_register_form"] = array(
    'render element' => 'form',
    'path' => drupal_get_path('theme', 'r2r_bootstrap') . '/templates',
    'template' => 'user-register-form',
    'preprocess functions' => array(
      'r2r_bootstrap_preprocess_user_register_form'
    ),
  );
  $hooks["form_alter"] = array('render element' => 'form');
  $hooks["user_register_form_submit"] = array('render element' => 'form');
  bootstrap_hook_theme_complete($existing, $theme, $path . '/theme');
  return $hooks;
} 

function r2r_bootstrap_bootstrap_search_form_wrapper($variables) {
  $output = '<div class="input-group">';
  $output .= $variables['element']['#children'];
  $output .= '<div class="clearField"></div>';
  $output .= '<div class="input-group-addon">';
  $output .= '<button type="submit" class="btn btn-search"><img src="/'.path_to_theme().'/images/magnifying-glass.png" width="20px" height="20px" alt="Go">';
  $output .= '<span class="sr-only">Search</span>';
  $output .= '</button>';
  $output .= '</div>';
  $output .= '</div>';
  return $output;
}
function r2r_bootstrap_preprocess_page(&$vars) {
  if(!empty($vars['node'])){
    switch ($vars['node']->type) {
      case 'event':
      menu_set_active_item('events');
      break;
      case 'discussion':
//change MY_TRAIL for your Drupal path (can be aliased, don't need full path)
           menu_set_active_item('discussions');
        break;
      case 'cyber_seminar':
          menu_set_active_item('cyber-seminars');
        break;
      case 'featured_r2r_partner':
          menu_set_active_item('featured-partners');
        break;
      case 'story':
          menu_set_active_item('learning-communities');
      break;
      case 'lc_task':
      case 'lc_story':
      case 'lc_document':
      case 'lc_discussion':
      case 'about_the_pair':
        menu_set_active_item('learning-communities');
      break;

      default:        
        //print("<pre>");
        //print_r($vars['node']->type);
        //print("</pre>");
      break;
    }
  } else if (!empty($vars['theme_hook_suggestions'][0])) { //ok so the theme_hook_suggestions property -- prooooooobably not the right one, but it works...
    switch($vars['theme_hook_suggestions'][0]) {
      case 'page__events':
        menu_set_active_item('events');
      break;
      case 'page__featured_partners':
          menu_set_active_item('featured-partners');          
      break;
      case 'page__learning_communities':
          menu_set_active_item('learning-communities');
      break;
      case 'page__cyber_seminars':
          menu_set_active_item('cyber-seminars');
      break;
      case 'page__mentorship':
          menu_set_active_item('learning-communities');
      break;
      default:
        //print("<pre>");
        //print_r($vars['theme_hook_suggestions'][0]);
        //print("</pre>");
      break;
    }
  }
}

function r2r_bootstrap_form_alter(&$form, &$form_state, $form_id) {
  $function = "custom_{$form_id}_submit";
  if (function_exists($function))
    $form['#submit'][] = $function;
}

function r2r_bootstrap_user_register_form_submit($form, &$form_state) {
  $form_state['redirect'] = '/test';
}

function r2r_bootstrap_preprocess_user_register_form(&$vars) {
  //print "<pre>";
  //print_r($vars);
  //print "</pre>";
  //print "<hr>";
  //print "<pre>";
  //print_r($vars["form"]["captcha"]); 
  //print "</pre>";
  //$vars["#group_children"]["captcha"] = "group_5";
  //$vars["#fieldgroup"]["group_5"]->children[3] = $vars["captcha"];
}

