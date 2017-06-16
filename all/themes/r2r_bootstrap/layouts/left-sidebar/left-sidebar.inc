<?php

// Plugin definition
$plugin = array(
  'title' => t('R2R Bootstrap Left Sidebar'),
  'category' => t('R2R Bootstrap'),
  'icon' => 'left-sidebar.png',
  'theme' => 'left-sidebar',
  'regions' => array(
    'leftsidebar' => t('Left Sidebar'),
	'maincontent' => t('Main Content, Right Side')
  ),
);
