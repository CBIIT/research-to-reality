<?php
/*
 * Research to Reality Cyber Seminar 
 */

function r2r_zen_cyberseminar_node_panels_layouts() {
  $items['cyberseminar_node'] = array(
    'title' => t('Reality - Cyber Seminar Node Layout'),
    'icon' => 'cyberseminar_node.png',
    'theme' => 'cyberseminar_node',
    // 'css' => 'cyberseminar_node.css',
    'regions' => array(
      'top' => t('Top'),
      'left' => t('Left side'),
      'right' => t('Right side'),
    ),
  );

  return $items;
}
