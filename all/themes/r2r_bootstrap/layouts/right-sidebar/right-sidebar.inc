<?php

// Plugin definition
$plugin = array(
  'title' => t('R2R Bootstrap Right Sidebar'),
  'category' => t('R2R Bootstrap'),
  'icon' => 'right-sidebar.png',
  'theme' => 'right-sidebar',
  'regions' => array(
    'maincontent' => t('Main Content, Left Side'),
    'rightsidebar' => t('Right Sidebar'),
  ),
);
