<?php

// Plugin definition
$plugin = array(
  'title' => t('R2R Bootstrap Learning Communities Landing Page'),
  'category' => t('R2R Bootstrap'),
  'icon' => 'lc-landing.png',
  'theme' => 'lc-landing',
  'regions' => array(
    'maincontent' => t('Main Content'),
	'rightsidebar' => t('Right Sidebar'),
	'linkpanels' => t('Link Panels')
  ),
);
