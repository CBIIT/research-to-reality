<?php
/**
 * @file
 * Contains the theme's functions to manipulate Drupal's default markup.
 *
 * Complete documentation for this file is available online.
 * @see https://drupal.org/node/1728096
 */


/**
 * Override or insert variables into the maintenance page template.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("maintenance_page" in this case.)
 */
/* -- Delete this line if you want to use this function
function STARTERKIT_preprocess_maintenance_page(&$variables, $hook) {
  // When a variable is manipulated or added in preprocess_html or
  // preprocess_page, that same work is probably needed for the maintenance page
  // as well, so we can just re-use those functions to do that work here.
  STARTERKIT_preprocess_html($variables, $hook);
  STARTERKIT_preprocess_page($variables, $hook);
}
// */

/**
 * Override or insert variables into the html templates.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("html" in this case.)
 */
/* -- Delete this line if you want to use this function
function STARTERKIT_preprocess_html(&$variables, $hook) {
  $variables['sample_variable'] = t('Lorem ipsum.');

  // The body tag's classes are controlled by the $classes_array variable. To
  // remove a class from $classes_array, use array_diff().
  //$variables['classes_array'] = array_diff($variables['classes_array'], array('class-to-remove'));
}
// */

/**
 * Override or insert variables into the page templates.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("page" in this case.)
 */
/* -- Delete this line if you want to use this function
function STARTERKIT_preprocess_page(&$variables, $hook) {
  $variables['sample_variable'] = t('Lorem ipsum.');
}
// */

/**
 * Override or insert variables into the node templates.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("node" in this case.)
 */
/* -- Delete this line if you want to use this function
function STARTERKIT_preprocess_node(&$variables, $hook) {
  $variables['sample_variable'] = t('Lorem ipsum.');

  // Optionally, run node-type-specific preprocess functions, like
  // STARTERKIT_preprocess_node_page() or STARTERKIT_preprocess_node_story().
  $function = __FUNCTION__ . '_' . $variables['node']->type;
  if (function_exists($function)) {
    $function($variables, $hook);
  }
}
// */

/**
 * Override or insert variables into the comment templates.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("comment" in this case.)
 */
/* -- Delete this line if you want to use this function
function STARTERKIT_preprocess_comment(&$variables, $hook) {
  $variables['sample_variable'] = t('Lorem ipsum.');
}
// */

/**
 * Override or insert variables into the region templates.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("region" in this case.)
 */
/* -- Delete this line if you want to use this function
function STARTERKIT_preprocess_region(&$variables, $hook) {
  // Don't use Zen's region--sidebar.tpl.php template for sidebars.
  //if (strpos($variables['region'], 'sidebar_') === 0) {
  //  $variables['theme_hook_suggestions'] = array_diff($variables['theme_hook_suggestions'], array('region__sidebar'));
  //}
}
// */

/**
 * Override or insert variables into the block templates.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("block" in this case.)
 */
/* -- Delete this line if you want to use this function
function STARTERKIT_preprocess_block(&$variables, $hook) {
  // Add a count to all the blocks in the region.
  // $variables['classes_array'][] = 'count-' . $variables['block_id'];

  // By default, Zen will use the block--no-wrapper.tpl.php for the main
  // content. This optional bit of code undoes that:
  //if ($variables['block_html_id'] == 'block-system-main') {
  //  $variables['theme_hook_suggestions'] = array_diff($variables['theme_hook_suggestions'], array('block__no_wrapper'));
  //}
}
// */

function r2r_zen_date_nav_title($params) {
  $granularity = $params['granularity'];
  $view = $params['view'];
  $date_info = $view->date_info;
  $link = !empty($params['link']) ? $params['link'] : FALSE;
  $format = !empty($params['format']) ? $params['format'] : NULL;
  switch ($granularity) {
  case 'year':
  $title = $date_info->year;
  $date_arg = $date_info->year;
  break;
  case 'month':
  $format = !empty($format) ? $format : (empty($date_info->mini) ? 'F Y' : 'F Y');
  $title = date_format_date($date_info->min_date, 'custom', $format);
  $date_arg = $date_info->year .'-'. date_pad($date_info->month);
  break;
  case 'day':
  $format = !empty($format) ? $format : (empty($date_info->mini) ? 'l, F j Y' : 'l, F j');
  $title = date_format_date($date_info->min_date, 'custom', $format);
  $date_arg = $date_info->year .'-'. date_pad($date_info->month) .'-'. date_pad($date_info->day);
  break;
  case 'week':
  $format = !empty($format) ? $format : (empty($date_info->mini) ? 'F j Y' : 'F j');
  $title = t('Week of @date', array('@date' => date_format_date($date_info->min_date, 'custom', $format)));
  $date_arg = $date_info->year .'-W'. date_pad($date_info->week);
  break;
  }
  if (!empty($date_info->mini) || $link) {
  // Month navigation titles are used as links in the mini view.
  $attributes = array('title' => t('View full page month'));
  $url = date_pager_url($view, $granularity, $date_arg, TRUE);
  return l($title, $url, array('attributes' => $attributes));
  }
  else {
  return $title;
  }
}

/** Custom Login Page **/
function r2r_zen_theme() {
  $items = array();
  
  // for /user page 
  $items['user_login'] = array(
  'render element' => 'form',
  'path' => drupal_get_path('theme', 'r2r_zen') . '/templates',
  'template' => 'user-login',
  // 'preprocess functions' => array(
  // 'r2r_zen_preprocess_user_login'
  // ),
 );

  // for /user/password page
  //  $items['user_pass'] = array(
  //   'render element' => 'form',
  //   // 'title' => 'Forgot Your Password?',  
  //   // 'path' => drupal_get_path('theme', 'r2r_zen') . '/templates',
  //   // 'template' => 'user-pass',
  //   'preprocess functions' => array(
  //     'r2r_zen_preprocess_user_pass'
  //   ),
  // );

  // for /user/register
   // $items['user_register_form'] = array(
   //  'render element' => 'form',
   //  'path' => drupal_get_path('theme', 'r2r_zen') . '/templates',
   //  'template' => 'user-register',
   //  'preprocess functions' => array(
   //    'r2r_zen_preprocess_user_register_form'
   //  ),
  // );
   
return $items;
}

function r2r_zen_preprocess_page(&$vars){
  $path = $_GET['q'];

  if (strpos($path,'user/password') !== false) {
    drupal_set_title('Forgot Your Password?');
  } 
  elseif (strpos($path,'user/register') !== false) {
    drupal_set_title('Sign Up');
  }
}

function r2r_zen_preprocess_user_register_form(&$vars) {
  $args = func_get_args();
  array_shift($args);
  $form_state['build_info']['args'] = $args; 
  $vars['form'] = drupal_build_form('user_register_form', $form_state['build_info']['args']);
}
?>
