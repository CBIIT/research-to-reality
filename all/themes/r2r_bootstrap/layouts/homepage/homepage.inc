<?php

// Plugin definition
$plugin = array(
  'title' => t('R2R Bootstrap Homepage'),
  'category' => t('R2R Bootstrap'),
  'icon' => 'homepage.png',
  'theme' => 'homepage',
  'css' => 'homepage.css',
  'regions' => array(
    'whatisnew' => t('What is New'),
    'recentdiscussions' => t('Recent Discussions'),
	'cyberseminars' => t('Cyber Seminars'),
	'events' => t('Events'),
	'calendar' => t('Calendar'),
	'featuredpartner' => t('Featured Partner'),
	'featuredpartner-intro' => t('Featured Partner Intro'),
	'featuredpartner-archive' => t('Featured Partner Archive'),
  ),
);
