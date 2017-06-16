<?php
/* 
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */

function r2r_zen_discussion_node_panels_layouts() {
  $items['discussion_node'] = array(
    'title' => t('Reality - Discussion Node Layout'),
    'icon' => 'discussion_node.png',
    'theme' => 'discussion_node',
    // 'css' => 'discussion_node.css',
    'regions' => array(
      'top' => t('Top'),
      'left' => t('Left side'),
      'right_t' => t('Right side, top row'),
      'right_l' => t('Right side, Left col'),
      'right_m' => t('Right side, Middle col'),
      'right_r' => t('Right side, Right col'),
      'right_b' => t('Right side, right row bottom')
    ),
  );

  return $items;
}
