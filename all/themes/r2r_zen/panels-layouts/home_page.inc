<?php
/* 
 * Research to Reality Home Page 
 */

function r2r_zen_home_page_panels_layouts() {
  
  $items['home_page'] = array(
    'title' => t('Reality - Home Page Layout'),
    'icon' => 'home_page.png',
    'theme' => 'home_page',
    // 'css' => 'home_page.css',
    'regions' => array(
      'top_row' => t('Top Row'),
      // 'right_row' => t('Right Row'),
      'left' => t('Left side'),
      'middle' => ('Middle'),
      'right' => t('Right side'),
    ),
  );

  return $items;
}