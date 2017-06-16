<?php
/* 
 * Research to Reality Two Column Layout
 */

function r2r_zen_two_col_70_30_panels_layouts() {
  $items['two_col_70_30'] = array(
    'title' => t('Reality - Two Column Layout(70/30)'),
    'icon' => 'two_col_70_30.png',
    'theme' => 'two_col_70_30',
    // 'css' => 'two_col_70_30.css',
    'regions' => array(
      'left' => t('Left side'),
      'right' => t('Right side'),
    ),
  );

  return $items;
}
