<?php
/**
 * @file
 * rtr_views.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function rtr_views_default_panels_mini() {
  $export = array();

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'clone_of_homepage_events';
  $mini->category = '';
  $mini->admin_title = 'LC Events';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Events';
  $display->uuid = 'f47f392a-63bc-4c1c-a714-302ba1b0ec6a';
  $display->storage_type = 'panels_mini';
  $display->storage_id = 'clone_of_homepage_events';
  $display->content = array();
  $display->panels = array();
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['clone_of_homepage_events'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'cyber_seminar_search';
  $mini->category = '';
  $mini->admin_title = 'Cyber-Seminar Search';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Cyber Seminar Search';
  $display->uuid = '1785c5af-fcb2-4087-8ec1-1aeb7d211137';
  $display->storage_type = 'panels_mini';
  $display->storage_id = 'cyber_seminar_search';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-96b59dda-eb72-4920-8ff9-73c14c737ba3';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'custom_search_blocks-2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '96b59dda-eb72-4920-8ff9-73c14c737ba3';
  $display->content['new-96b59dda-eb72-4920-8ff9-73c14c737ba3'] = $pane;
  $display->panels['middle'][0] = 'new-96b59dda-eb72-4920-8ff9-73c14c737ba3';
  $pane = new stdClass();
  $pane->pid = 'new-58d4b5ea-243c-48d6-9f3c-6e717643eee0';
  $pane->panel = 'middle';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'See Complete Archive',
    'title' => '',
    'body' => '<p><a class="btn btn-default" href="/cyber-seminars">Complete Archive</a></p>',
    'format' => 'full_html',
    'substitute' => TRUE,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '58d4b5ea-243c-48d6-9f3c-6e717643eee0';
  $display->content['new-58d4b5ea-243c-48d6-9f3c-6e717643eee0'] = $pane;
  $display->panels['middle'][1] = 'new-58d4b5ea-243c-48d6-9f3c-6e717643eee0';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-96b59dda-eb72-4920-8ff9-73c14c737ba3';
  $mini->display = $display;
  $export['cyber_seminar_search'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'featured_partner_sidebar';
  $mini->category = '';
  $mini->admin_title = 'Featured Partner Sidebar';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '480fd3b8-b402-4d9e-912d-588f270ac97c';
  $display->storage_type = 'panels_mini';
  $display->storage_id = 'featured_partner_sidebar';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-e2afca47-5d76-4b6c-a47a-75c4768e8f2f';
  $pane->panel = 'middle';
  $pane->type = 'views';
  $pane->subtype = 'featured_r2r_partners';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '2',
    'pager_id' => '0',
    'offset' => '1',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block_2',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'e2afca47-5d76-4b6c-a47a-75c4768e8f2f';
  $display->content['new-e2afca47-5d76-4b6c-a47a-75c4768e8f2f'] = $pane;
  $display->panels['middle'][0] = 'new-e2afca47-5d76-4b6c-a47a-75c4768e8f2f';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-e2afca47-5d76-4b6c-a47a-75c4768e8f2f';
  $mini->display = $display;
  $export['featured_partner_sidebar'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'homepage_events';
  $mini->category = '';
  $mini->admin_title = 'Homepage Events';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Events';
  $display->uuid = 'f47f392a-63bc-4c1c-a714-302ba1b0ec6a';
  $display->storage_type = 'panels_mini';
  $display->storage_id = 'homepage_events';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-48c9e36c-bb2f-4fd4-bea6-966e87541f73';
  $pane->panel = 'middle';
  $pane->type = 'views';
  $pane->subtype = 'homepage';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '2',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block_2',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '48c9e36c-bb2f-4fd4-bea6-966e87541f73';
  $display->content['new-48c9e36c-bb2f-4fd4-bea6-966e87541f73'] = $pane;
  $display->panels['middle'][0] = 'new-48c9e36c-bb2f-4fd4-bea6-966e87541f73';
  $pane = new stdClass();
  $pane->pid = 'new-c38d4025-051f-45e5-8bfa-7bac986aa45b';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'block-5';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 2,
            1 => 3,
            2 => 4,
            3 => 5,
            4 => 6,
            5 => 7,
            6 => 8,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'c38d4025-051f-45e5-8bfa-7bac986aa45b';
  $display->content['new-c38d4025-051f-45e5-8bfa-7bac986aa45b'] = $pane;
  $display->panels['middle'][1] = 'new-c38d4025-051f-45e5-8bfa-7bac986aa45b';
  $pane = new stdClass();
  $pane->pid = 'new-89c0b6be-e955-42cb-a26b-b1c6e251ce0b';
  $pane->panel = 'middle';
  $pane->type = 'views';
  $pane->subtype = 'lc_event_calendar';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 1,
    'nodes_per_page' => '0',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '%1',
    'url' => '',
    'display' => 'block_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '89c0b6be-e955-42cb-a26b-b1c6e251ce0b';
  $display->content['new-89c0b6be-e955-42cb-a26b-b1c6e251ce0b'] = $pane;
  $display->panels['middle'][2] = 'new-89c0b6be-e955-42cb-a26b-b1c6e251ce0b';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-48c9e36c-bb2f-4fd4-bea6-966e87541f73';
  $mini->display = $display;
  $export['homepage_events'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'learning_communities_menu';
  $mini->category = '';
  $mini->admin_title = 'Learning Communities Menu';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'e9f9e1cc-6b7c-41df-9abf-52be0256a58e';
  $display->storage_type = 'panels_mini';
  $display->storage_id = 'learning_communities_menu';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-cbb63ed5-99b6-4c7c-a8df-9624ac4449de';
  $pane->panel = 'center';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Learning Communities Menu',
    'title' => 'Learning Communities Menu',
    'body' => '<ul class="menu">
<li class="menu__item is-leaf first leaf"><a href="/learning-communities/%node:nid/discussions" class="menu__link">Discussions</a></li>
<li class="menu__item is-leaf first leaf"><a href="/learning-communities/%node:nid/discussions" class="menu__link">Documents</a></li>
<li class="menu__item is-leaf first leaf"><a href="/learning-communities/%node:nid/discussions" class="menu__link">Stories</a></li>
<li class="menu__item is-leaf first leaf"><a href="/learning-communities/%node:nid/discussions" class="menu__link">Events</a></li>
<li class="menu__item is-leaf first leaf"><a href="/learning-communities/%node:nid/discussions" class="menu__link">Tasks</a></li>
<li class="menu__item is-leaf last leaf"><a href="/node/%node:nid/" title="" class="menu__link"><strong>Return to Dashboard<strong></a></li>
</ul>',
    'format' => 'full_html',
    'substitute' => TRUE,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'lc-menu',
    'css_class' => 'round-edge-all border-grey',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'cbb63ed5-99b6-4c7c-a8df-9624ac4449de';
  $display->content['new-cbb63ed5-99b6-4c7c-a8df-9624ac4449de'] = $pane;
  $display->panels['center'][0] = 'new-cbb63ed5-99b6-4c7c-a8df-9624ac4449de';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-cbb63ed5-99b6-4c7c-a8df-9624ac4449de';
  $mini->display = $display;
  $export['learning_communities_menu'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'learning_communities_sidebar';
  $mini->category = '';
  $mini->admin_title = 'Learning Communities Sidebar';
  $mini->admin_description = 'The Learning Communities sidebar for the /learning-communities section of the site.';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '8fc87767-f955-4103-8681-976cfa074ad0';
  $display->storage_type = 'panels_mini';
  $display->storage_id = 'learning_communities_sidebar';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-9c84785d-5dd1-4b4b-9998-8f58de1f1505';
  $pane->panel = 'middle';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Member lInk',
    'title' => '',
    'body' => '<div class="btn secondary"><a href="/learning-communities/117/dashboard">Access the HPV Members Only Section</a></div> ',
    'format' => 'full_html',
    'substitute' => TRUE,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '9c84785d-5dd1-4b4b-9998-8f58de1f1505';
  $display->content['new-9c84785d-5dd1-4b4b-9998-8f58de1f1505'] = $pane;
  $display->panels['middle'][0] = 'new-9c84785d-5dd1-4b4b-9998-8f58de1f1505';
  $pane = new stdClass();
  $pane->pid = 'new-cf12f4cb-e1b4-4f54-9727-2e5e82e624fc';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'block-8';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'We Want to Hear From You',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'cf12f4cb-e1b4-4f54-9727-2e5e82e624fc';
  $display->content['new-cf12f4cb-e1b4-4f54-9727-2e5e82e624fc'] = $pane;
  $display->panels['middle'][1] = 'new-cf12f4cb-e1b4-4f54-9727-2e5e82e624fc';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['learning_communities_sidebar'] = $mini;

  return $export;
}
