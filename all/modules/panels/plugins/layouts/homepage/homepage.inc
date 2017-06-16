<?php

// Plugin definition
$plugin = array(
  'title' => t('R2R Bootstrap Homepage'),
  'category' => t('R2R Bootstrap'),
  'icon' => 'homepage.png',
  'theme' => 'R2R_Bootstrap',
  'css' => 'homepage.css',
  'regions' => array(
    'left' => t('Left side'),
    'right' => t('Right side')
  ),
);
