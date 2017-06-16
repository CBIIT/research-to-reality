<?php
/**
 * @file
 * rtr_views.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function rtr_views_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__cyber_seminars';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 2;
  $handler->conf = array(
    'title' => 'Cyber-Seminars',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(
      0 => array(
        'identifier' => 'User',
        'keyword' => 'user',
        'name' => 'user',
        'type' => 'current',
        'uid' => '',
        'id' => 1,
      ),
    ),
    'relationships' => array(),
    'name' => 'cyber_seminars',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'cyber_seminar' => 'cyber_seminar',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'Cyber-Seminars
%node:title',
    'panels_breadcrumbs_paths' => 'cyber-seminars
<none>',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'right-sidebar';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'maincontent' => NULL,
      'rightsidebar' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '74b51fbd-5c52-4216-9325-b207dca313c4';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view__cyber_seminars';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-8e604297-51d3-42ea-b85a-6dd8f55e1b2f';
  $pane->panel = 'maincontent';
  $pane->type = 'views_panes';
  $pane->subtype = 'cyber_seminar_inner_page-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(),
  );
  $pane->configuration = array(
    'context' => array(
      0 => 'argument_entity_id:node_1',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '8e604297-51d3-42ea-b85a-6dd8f55e1b2f';
  $display->content['new-8e604297-51d3-42ea-b85a-6dd8f55e1b2f'] = $pane;
  $display->panels['maincontent'][0] = 'new-8e604297-51d3-42ea-b85a-6dd8f55e1b2f';
  $pane = new stdClass();
  $pane->pid = 'new-0ef492b5-4d7b-4085-9cef-4e8c86ebef8f';
  $pane->panel = 'rightsidebar';
  $pane->type = 'panels_mini';
  $pane->subtype = 'cyber_seminar_search';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Cyber Seminar Search',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'cyber-seminar-search',
    'css_class' => 'cyber-seminar-search-box',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '0ef492b5-4d7b-4085-9cef-4e8c86ebef8f';
  $display->content['new-0ef492b5-4d7b-4085-9cef-4e8c86ebef8f'] = $pane;
  $display->panels['rightsidebar'][0] = 'new-0ef492b5-4d7b-4085-9cef-4e8c86ebef8f';
  $pane = new stdClass();
  $pane->pid = 'new-df5304f7-bb18-4fd5-861e-a9f4cc80c984';
  $pane->panel = 'rightsidebar';
  $pane->type = 'block';
  $pane->subtype = 'block-12';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Cyber Seminar Technical Requirements',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'technical-requirements',
    'css_class' => 'round-edge-all border-grey',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'df5304f7-bb18-4fd5-861e-a9f4cc80c984';
  $display->content['new-df5304f7-bb18-4fd5-861e-a9f4cc80c984'] = $pane;
  $display->panels['rightsidebar'][1] = 'new-df5304f7-bb18-4fd5-861e-a9f4cc80c984';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-0ef492b5-4d7b-4085-9cef-4e8c86ebef8f';
  $handler->conf['display'] = $display;
  $export['node_view__cyber_seminars'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__discussion';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Discussion',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'discussion',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'discussion' => 'discussion',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'All Discussions
%node:title',
    'panels_breadcrumbs_paths' => 'discussions
<none>',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'right-sidebar';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
      'maincontent' => NULL,
      'rightsidebar' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '5f72c5bf-54e4-4c18-bb47-901a19620493';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view__discussion';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-b59e008c-93c7-4a9f-949c-22d591c1da6e';
  $pane->panel = 'maincontent';
  $pane->type = 'views_panes';
  $pane->subtype = 'discussions_inner_page-panel_pane_2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'b59e008c-93c7-4a9f-949c-22d591c1da6e';
  $display->content['new-b59e008c-93c7-4a9f-949c-22d591c1da6e'] = $pane;
  $display->panels['maincontent'][0] = 'new-b59e008c-93c7-4a9f-949c-22d591c1da6e';
  $pane = new stdClass();
  $pane->pid = 'new-057565d9-98ba-465a-bd82-c827a1f1b8f8';
  $pane->panel = 'maincontent';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Comments Label',
    'title' => '',
    'body' => '<hr>
<h2>Posts/Comments</h2>',
    'format' => 'raw_html',
    'substitute' => 0,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '057565d9-98ba-465a-bd82-c827a1f1b8f8';
  $display->content['new-057565d9-98ba-465a-bd82-c827a1f1b8f8'] = $pane;
  $display->panels['maincontent'][1] = 'new-057565d9-98ba-465a-bd82-c827a1f1b8f8';
  $pane = new stdClass();
  $pane->pid = 'new-91609804-07a5-4293-b8c0-80d999310b70';
  $pane->panel = 'maincontent';
  $pane->type = 'node_comments';
  $pane->subtype = 'node_comments';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'mode' => '1',
    'comments_per_page' => '10',
    'context' => 'argument_entity_id:node_1',
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
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '91609804-07a5-4293-b8c0-80d999310b70';
  $display->content['new-91609804-07a5-4293-b8c0-80d999310b70'] = $pane;
  $display->panels['maincontent'][2] = 'new-91609804-07a5-4293-b8c0-80d999310b70';
  $pane = new stdClass();
  $pane->pid = 'new-34d20460-3eaf-4883-9f51-80d10ebf2cfd';
  $pane->panel = 'maincontent';
  $pane->type = 'node_comment_form';
  $pane->subtype = 'node_comment_form';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'anon_links' => 1,
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => 'Post Reply',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '34d20460-3eaf-4883-9f51-80d10ebf2cfd';
  $display->content['new-34d20460-3eaf-4883-9f51-80d10ebf2cfd'] = $pane;
  $display->panels['maincontent'][3] = 'new-34d20460-3eaf-4883-9f51-80d10ebf2cfd';
  $pane = new stdClass();
  $pane->pid = 'new-e8e50304-eb08-48ce-90ec-0ea97d999f31';
  $pane->panel = 'rightsidebar';
  $pane->type = 'views_panes';
  $pane->subtype = 'discussions_inner_page-panel_pane_3';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'discussions-sidebar',
    'css_class' => 'sidebar-box',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'e8e50304-eb08-48ce-90ec-0ea97d999f31';
  $display->content['new-e8e50304-eb08-48ce-90ec-0ea97d999f31'] = $pane;
  $display->panels['rightsidebar'][0] = 'new-e8e50304-eb08-48ce-90ec-0ea97d999f31';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__discussion'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__event';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 3;
  $handler->conf = array(
    'title' => 'Events',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'event',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'event' => 'event',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'right-sidebar';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'maincontent' => NULL,
      'rightsidebar' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '05892dd3-5ec9-48c9-8a25-1e61488ededb';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view__event';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-53f6be8d-8ddf-4fb7-9fff-6fbeba1f863c';
  $pane->panel = 'maincontent';
  $pane->type = 'views_panes';
  $pane->subtype = 'events_inner_page-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'event-details',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '53f6be8d-8ddf-4fb7-9fff-6fbeba1f863c';
  $display->content['new-53f6be8d-8ddf-4fb7-9fff-6fbeba1f863c'] = $pane;
  $display->panels['maincontent'][0] = 'new-53f6be8d-8ddf-4fb7-9fff-6fbeba1f863c';
  $pane = new stdClass();
  $pane->pid = 'new-6be3781b-715a-45a0-a566-1331d9213b9c';
  $pane->panel = 'rightsidebar';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'title - Upcoming Events',
    'title' => '',
    'body' => '<h2 class="pane-title">Upcoming Events</h2>',
    'format' => 'full_html',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '6be3781b-715a-45a0-a566-1331d9213b9c';
  $display->content['new-6be3781b-715a-45a0-a566-1331d9213b9c'] = $pane;
  $display->panels['rightsidebar'][0] = 'new-6be3781b-715a-45a0-a566-1331d9213b9c';
  $pane = new stdClass();
  $pane->pid = 'new-4192fbf4-cec5-42e8-b13b-37d8fbde25ee';
  $pane->panel = 'rightsidebar';
  $pane->type = 'views';
  $pane->subtype = 'events_inner_page';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '3',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block_1',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'sidebar-box upcoming-events',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '4192fbf4-cec5-42e8-b13b-37d8fbde25ee';
  $display->content['new-4192fbf4-cec5-42e8-b13b-37d8fbde25ee'] = $pane;
  $display->panels['rightsidebar'][1] = 'new-4192fbf4-cec5-42e8-b13b-37d8fbde25ee';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__event'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__featured_r2r_member';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'Featured R2R Member',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'featured_r2r_member',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'featured_r2r_partner' => 'featured_r2r_partner',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'Featured R2R Partners
%node:title',
    'panels_breadcrumbs_paths' => 'featured-r2r-partners
<none>',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'right-sidebar';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'maincontent' => NULL,
      'rightsidebar' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Featured Partners';
  $display->uuid = '041254d9-9949-4aba-9c4e-8796894dc702';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view__featured_r2r_member';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-1c7b8370-b130-4c2d-a06e-d85908ebb2e8';
  $pane->panel = 'maincontent';
  $pane->type = 'views';
  $pane->subtype = 'featured_r2r_partners';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '1',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block_7',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
    'context' => array(
      0 => 'argument_entity_id:node_1.nid',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '1c7b8370-b130-4c2d-a06e-d85908ebb2e8';
  $display->content['new-1c7b8370-b130-4c2d-a06e-d85908ebb2e8'] = $pane;
  $display->panels['maincontent'][0] = 'new-1c7b8370-b130-4c2d-a06e-d85908ebb2e8';
  $pane = new stdClass();
  $pane->pid = 'new-6f5c53de-1b7b-4060-8bc3-c8263d5eed8a';
  $pane->panel = 'rightsidebar';
  $pane->type = 'views';
  $pane->subtype = 'featured_r2r_partners';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '1',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block_5',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
    'context' => array(
      0 => 'argument_entity_id:node_1.nid',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '6f5c53de-1b7b-4060-8bc3-c8263d5eed8a';
  $display->content['new-6f5c53de-1b7b-4060-8bc3-c8263d5eed8a'] = $pane;
  $display->panels['rightsidebar'][0] = 'new-6f5c53de-1b7b-4060-8bc3-c8263d5eed8a';
  $pane = new stdClass();
  $pane->pid = 'new-9b8ae6c0-90f7-4d6a-8064-5d69f08c023d';
  $pane->panel = 'rightsidebar';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'title - current feature partner',
    'title' => '',
    'body' => '<h2 class="pane-title">Currently Featured R2R Partner</h2>',
    'format' => 'full_html',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '9b8ae6c0-90f7-4d6a-8064-5d69f08c023d';
  $display->content['new-9b8ae6c0-90f7-4d6a-8064-5d69f08c023d'] = $pane;
  $display->panels['rightsidebar'][1] = 'new-9b8ae6c0-90f7-4d6a-8064-5d69f08c023d';
  $pane = new stdClass();
  $pane->pid = 'new-87f45de5-7dc7-463e-8ff8-c36ccc0ca292';
  $pane->panel = 'rightsidebar';
  $pane->type = 'views';
  $pane->subtype = 'featured_r2r_partners';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '1',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block_4',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'sidebar-box',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '87f45de5-7dc7-463e-8ff8-c36ccc0ca292';
  $display->content['new-87f45de5-7dc7-463e-8ff8-c36ccc0ca292'] = $pane;
  $display->panels['rightsidebar'][2] = 'new-87f45de5-7dc7-463e-8ff8-c36ccc0ca292';
  $pane = new stdClass();
  $pane->pid = 'new-8224d426-2ff0-4dc4-9221-979bb892f5a9';
  $pane->panel = 'rightsidebar';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'title - Previous R2R Featured Partners',
    'title' => '',
    'body' => '<h2 class="pane-title">Previously Featured R2R Partners</h2>',
    'format' => 'full_html',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '8224d426-2ff0-4dc4-9221-979bb892f5a9';
  $display->content['new-8224d426-2ff0-4dc4-9221-979bb892f5a9'] = $pane;
  $display->panels['rightsidebar'][3] = 'new-8224d426-2ff0-4dc4-9221-979bb892f5a9';
  $pane = new stdClass();
  $pane->pid = 'new-e52e8eab-a4c3-492e-97c4-2f70319e00ae';
  $pane->panel = 'rightsidebar';
  $pane->type = 'panels_mini';
  $pane->subtype = 'featured_partner_sidebar';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'sidebar-box',
  );
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = 'e52e8eab-a4c3-492e-97c4-2f70319e00ae';
  $display->content['new-e52e8eab-a4c3-492e-97c4-2f70319e00ae'] = $pane;
  $display->panels['rightsidebar'][4] = 'new-e52e8eab-a4c3-492e-97c4-2f70319e00ae';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__featured_r2r_member'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__lc_document';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 7;
  $handler->conf = array(
    'title' => 'LC Document',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'lc_document',
    'access' => array(
      'logic' => 'and',
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'lc_document' => 'lc_document',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
    ),
  );
  $display = new panels_display();
  $display->layout = 'right-sidebar';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
      'maincontent' => NULL,
      'rightsidebar' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '05dbd089-ffce-420e-948b-f8fc5bae4b19';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view__lc_document';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-5f8229ba-a8fe-427c-9b11-4316927cf3bb';
  $pane->panel = 'maincontent';
  $pane->type = 'views_panes';
  $pane->subtype = 'learning_communities_documents-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '5f8229ba-a8fe-427c-9b11-4316927cf3bb';
  $display->content['new-5f8229ba-a8fe-427c-9b11-4316927cf3bb'] = $pane;
  $display->panels['maincontent'][0] = 'new-5f8229ba-a8fe-427c-9b11-4316927cf3bb';
  $pane = new stdClass();
  $pane->pid = 'new-6145f9cd-96a0-4a8b-92fa-0d9a98ec35a5';
  $pane->panel = 'maincontent';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Comments Label',
    'title' => '',
    'body' => '<hr>
<h2>Comments</h2>',
    'format' => 'raw_html',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '6145f9cd-96a0-4a8b-92fa-0d9a98ec35a5';
  $display->content['new-6145f9cd-96a0-4a8b-92fa-0d9a98ec35a5'] = $pane;
  $display->panels['maincontent'][1] = 'new-6145f9cd-96a0-4a8b-92fa-0d9a98ec35a5';
  $pane = new stdClass();
  $pane->pid = 'new-73388610-5ac9-47e0-8859-34162998824b';
  $pane->panel = 'maincontent';
  $pane->type = 'node_comments';
  $pane->subtype = 'node_comments';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'mode' => '1',
    'comments_per_page' => '50',
    'context' => 'argument_entity_id:node_1',
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
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '73388610-5ac9-47e0-8859-34162998824b';
  $display->content['new-73388610-5ac9-47e0-8859-34162998824b'] = $pane;
  $display->panels['maincontent'][2] = 'new-73388610-5ac9-47e0-8859-34162998824b';
  $pane = new stdClass();
  $pane->pid = 'new-202bc39e-56da-4a1b-af33-530bc9ad290d';
  $pane->panel = 'maincontent';
  $pane->type = 'node_comment_form';
  $pane->subtype = 'node_comment_form';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'anon_links' => 0,
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => 'Post Reply',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '202bc39e-56da-4a1b-af33-530bc9ad290d';
  $display->content['new-202bc39e-56da-4a1b-af33-530bc9ad290d'] = $pane;
  $display->panels['maincontent'][3] = 'new-202bc39e-56da-4a1b-af33-530bc9ad290d';
  $pane = new stdClass();
  $pane->pid = 'new-167d7d4c-5594-4f4c-ab12-2f39fcc5f446';
  $pane->panel = 'maincontent';
  $pane->type = 'page_breadcrumb';
  $pane->subtype = 'page_breadcrumb';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '167d7d4c-5594-4f4c-ab12-2f39fcc5f446';
  $display->content['new-167d7d4c-5594-4f4c-ab12-2f39fcc5f446'] = $pane;
  $display->panels['maincontent'][4] = 'new-167d7d4c-5594-4f4c-ab12-2f39fcc5f446';
  $pane = new stdClass();
  $pane->pid = 'new-d2ffbd07-4457-47be-a62a-8f2c8306726d';
  $pane->panel = 'rightsidebar';
  $pane->type = 'block';
  $pane->subtype = 'block-15';
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
  $pane->uuid = 'd2ffbd07-4457-47be-a62a-8f2c8306726d';
  $display->content['new-d2ffbd07-4457-47be-a62a-8f2c8306726d'] = $pane;
  $display->panels['rightsidebar'][0] = 'new-d2ffbd07-4457-47be-a62a-8f2c8306726d';
  $pane = new stdClass();
  $pane->pid = 'new-d5091fa2-f925-4a2e-bb8b-9c3ffec66ed1';
  $pane->panel = 'rightsidebar';
  $pane->type = 'views';
  $pane->subtype = 'learning_communities_documents';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '1',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block_1',
    'context' => array(
      0 => 'argument_entity_id:node_1.nid',
    ),
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'discussions-sidebar',
    'css_class' => 'sidebar-box',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'd5091fa2-f925-4a2e-bb8b-9c3ffec66ed1';
  $display->content['new-d5091fa2-f925-4a2e-bb8b-9c3ffec66ed1'] = $pane;
  $display->panels['rightsidebar'][1] = 'new-d5091fa2-f925-4a2e-bb8b-9c3ffec66ed1';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__lc_document'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__lc_story';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 8;
  $handler->conf = array(
    'title' => 'LC Story',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'lc_story',
    'access' => array(
      'logic' => 'and',
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'lc_story' => 'lc_story',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
    ),
  );
  $display = new panels_display();
  $display->layout = 'right-sidebar';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
      'maincontent' => NULL,
      'rightsidebar' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'b930f411-6d6d-4f92-a3c1-fa741b58d0af';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view__lc_story';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-279970db-c0a5-4df6-890e-b03b5d59c0b6';
  $pane->panel = 'maincontent';
  $pane->type = 'views_panes';
  $pane->subtype = 'learning_communities_stories-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '279970db-c0a5-4df6-890e-b03b5d59c0b6';
  $display->content['new-279970db-c0a5-4df6-890e-b03b5d59c0b6'] = $pane;
  $display->panels['maincontent'][0] = 'new-279970db-c0a5-4df6-890e-b03b5d59c0b6';
  $pane = new stdClass();
  $pane->pid = 'new-3227cf0b-5350-462a-949a-7a4d7eac898d';
  $pane->panel = 'maincontent';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Comments Label',
    'title' => '',
    'body' => '<hr />
<h2>Comments</h2>',
    'format' => 'raw_html',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '3227cf0b-5350-462a-949a-7a4d7eac898d';
  $display->content['new-3227cf0b-5350-462a-949a-7a4d7eac898d'] = $pane;
  $display->panels['maincontent'][1] = 'new-3227cf0b-5350-462a-949a-7a4d7eac898d';
  $pane = new stdClass();
  $pane->pid = 'new-2fcadaff-7b27-46e8-9360-249812dcd8c7';
  $pane->panel = 'maincontent';
  $pane->type = 'node_comments';
  $pane->subtype = 'node_comments';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'mode' => '1',
    'comments_per_page' => '50',
    'context' => 'argument_entity_id:node_1',
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
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '2fcadaff-7b27-46e8-9360-249812dcd8c7';
  $display->content['new-2fcadaff-7b27-46e8-9360-249812dcd8c7'] = $pane;
  $display->panels['maincontent'][2] = 'new-2fcadaff-7b27-46e8-9360-249812dcd8c7';
  $pane = new stdClass();
  $pane->pid = 'new-de314e70-3f60-47d1-9ab2-6c5fa7f69833';
  $pane->panel = 'maincontent';
  $pane->type = 'node_comment_form';
  $pane->subtype = 'node_comment_form';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'anon_links' => 0,
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => 'Post Reply',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'de314e70-3f60-47d1-9ab2-6c5fa7f69833';
  $display->content['new-de314e70-3f60-47d1-9ab2-6c5fa7f69833'] = $pane;
  $display->panels['maincontent'][3] = 'new-de314e70-3f60-47d1-9ab2-6c5fa7f69833';
  $pane = new stdClass();
  $pane->pid = 'new-8cbb664e-cca3-438e-a917-9febdff15410';
  $pane->panel = 'rightsidebar';
  $pane->type = 'block';
  $pane->subtype = 'block-16';
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
  $pane->uuid = '8cbb664e-cca3-438e-a917-9febdff15410';
  $display->content['new-8cbb664e-cca3-438e-a917-9febdff15410'] = $pane;
  $display->panels['rightsidebar'][0] = 'new-8cbb664e-cca3-438e-a917-9febdff15410';
  $pane = new stdClass();
  $pane->pid = 'new-b48ff56a-11e4-42b3-ac24-ce1c655e3e6e';
  $pane->panel = 'rightsidebar';
  $pane->type = 'views';
  $pane->subtype = 'learning_communities_stories';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '1',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block_1',
    'context' => array(
      0 => 'argument_entity_id:node_1.nid',
    ),
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'discussions-sidebar',
    'css_class' => 'sidebar-box',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'b48ff56a-11e4-42b3-ac24-ce1c655e3e6e';
  $display->content['new-b48ff56a-11e4-42b3-ac24-ce1c655e3e6e'] = $pane;
  $display->panels['rightsidebar'][1] = 'new-b48ff56a-11e4-42b3-ac24-ce1c655e3e6e';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__lc_story'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__lc_task';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 9;
  $handler->conf = array(
    'title' => 'LC Task',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'lc_task',
    'access' => array(
      'logic' => 'and',
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'lc_task' => 'lc_task',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
    ),
  );
  $display = new panels_display();
  $display->layout = 'right-sidebar';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
      'maincontent' => NULL,
      'rightsidebar' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '88c919fb-6886-47ae-b125-4ffa62a1d292';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view__lc_task';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-11b5bbf1-b0d3-4f74-a286-599b6e7ae8d1';
  $pane->panel = 'maincontent';
  $pane->type = 'views_panes';
  $pane->subtype = 'learning_communities_tasks-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '11b5bbf1-b0d3-4f74-a286-599b6e7ae8d1';
  $display->content['new-11b5bbf1-b0d3-4f74-a286-599b6e7ae8d1'] = $pane;
  $display->panels['maincontent'][0] = 'new-11b5bbf1-b0d3-4f74-a286-599b6e7ae8d1';
  $pane = new stdClass();
  $pane->pid = 'new-c097fa2b-cbcf-403d-98e9-d867be3ea42f';
  $pane->panel = 'maincontent';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Comments Label',
    'title' => '',
    'body' => '<hr />
<h2>Comments</h2>',
    'format' => 'raw_html',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'c097fa2b-cbcf-403d-98e9-d867be3ea42f';
  $display->content['new-c097fa2b-cbcf-403d-98e9-d867be3ea42f'] = $pane;
  $display->panels['maincontent'][1] = 'new-c097fa2b-cbcf-403d-98e9-d867be3ea42f';
  $pane = new stdClass();
  $pane->pid = 'new-3470a29f-c5fa-4be1-afa2-08809eac477e';
  $pane->panel = 'maincontent';
  $pane->type = 'node_comments';
  $pane->subtype = 'node_comments';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'mode' => '1',
    'comments_per_page' => '50',
    'context' => 'argument_entity_id:node_1',
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
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '3470a29f-c5fa-4be1-afa2-08809eac477e';
  $display->content['new-3470a29f-c5fa-4be1-afa2-08809eac477e'] = $pane;
  $display->panels['maincontent'][2] = 'new-3470a29f-c5fa-4be1-afa2-08809eac477e';
  $pane = new stdClass();
  $pane->pid = 'new-73c9b022-7f1e-4935-97cf-132ef891988e';
  $pane->panel = 'maincontent';
  $pane->type = 'node_comment_form';
  $pane->subtype = 'node_comment_form';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'anon_links' => 0,
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => 'Post Reply',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '73c9b022-7f1e-4935-97cf-132ef891988e';
  $display->content['new-73c9b022-7f1e-4935-97cf-132ef891988e'] = $pane;
  $display->panels['maincontent'][3] = 'new-73c9b022-7f1e-4935-97cf-132ef891988e';
  $pane = new stdClass();
  $pane->pid = 'new-cf6843a0-05ea-43ee-b681-5c8b9e1b42fb';
  $pane->panel = 'rightsidebar';
  $pane->type = 'block';
  $pane->subtype = 'block-14';
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
  $pane->uuid = 'cf6843a0-05ea-43ee-b681-5c8b9e1b42fb';
  $display->content['new-cf6843a0-05ea-43ee-b681-5c8b9e1b42fb'] = $pane;
  $display->panels['rightsidebar'][0] = 'new-cf6843a0-05ea-43ee-b681-5c8b9e1b42fb';
  $pane = new stdClass();
  $pane->pid = 'new-5c46f8bb-4827-4af5-9292-34c8b9fac3ee';
  $pane->panel = 'rightsidebar';
  $pane->type = 'views';
  $pane->subtype = 'learning_communities_tasks';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '1',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block_1',
    'context' => array(
      0 => 'argument_entity_id:node_1.nid',
    ),
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'discussions-sidebar',
    'css_class' => 'sidebar-box',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '5c46f8bb-4827-4af5-9292-34c8b9fac3ee';
  $display->content['new-5c46f8bb-4827-4af5-9292-34c8b9fac3ee'] = $pane;
  $display->panels['rightsidebar'][1] = 'new-5c46f8bb-4827-4af5-9292-34c8b9fac3ee';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__lc_task'] = $handler;

  $handler = new stdClass();
  $handler->disabled = TRUE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__learning_comminity_group_page';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 4;
  $handler->conf = array(
    'title' => 'Learning Community Group Page',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'learning_comminity_group_page',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'lc_workspace' => 'lc_workspace',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'home_page';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'top_row' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '127d7cc7-4f21-4bed-8f34-5b05248d3918';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view__learning_comminity_group_page';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-22ad22ea-e578-45b8-9b44-65070c041b3e';
  $pane->panel = 'left';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Learning Communities Menu',
    'title' => 'Group Sections',
    'body' => '<ul class="menu">
<li class="menu__item is-leaf first leaf"><a href="/node/%node:nid/" class="menu__link"><strong>Group Dashboard</strong></a></li>
<li class="menu__item is-leaf"><a href="/learning-communities/%node:nid/discussions" class="menu__link">Discussions</a></li>
<li class="menu__item is-leaf"><a href="/learning-communities/%node:nid/discussions" class="menu__link">Documents</a></li>
<li class="menu__item is-leaf"><a href="/learning-communities/%node:nid/discussions" class="menu__link">Stories</a></li>
<li class="menu__item is-leaf"><a href="/learning-communities/%node:nid/discussions" class="menu__link">Events</a></li>
<li class="menu__item is-leaf last leaf"><a href="/learning-communities/%node:nid/discussions" class="menu__link">Tasks</a></li>
</ul>',
    'format' => 'full_html',
    'substitute' => 1,
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
  $pane->uuid = '22ad22ea-e578-45b8-9b44-65070c041b3e';
  $display->content['new-22ad22ea-e578-45b8-9b44-65070c041b3e'] = $pane;
  $display->panels['left'][0] = 'new-22ad22ea-e578-45b8-9b44-65070c041b3e';
  $pane = new stdClass();
  $pane->pid = 'new-54985695-ad67-4b09-9980-b038eefd7e18';
  $pane->panel = 'top_row';
  $pane->type = 'block';
  $pane->subtype = 'quicktabs-learning_community_recent';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
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
  $pane->uuid = '54985695-ad67-4b09-9980-b038eefd7e18';
  $display->content['new-54985695-ad67-4b09-9980-b038eefd7e18'] = $pane;
  $display->panels['top_row'][0] = 'new-54985695-ad67-4b09-9980-b038eefd7e18';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__learning_comminity_group_page'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__learning_community_discussion';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 5;
  $handler->conf = array(
    'title' => 'LC Discussion',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(
      1 => array(
        'identifier' => 'OG membership',
        'keyword' => 'og_membership',
        'name' => 'entity:og_membership',
        'entity_id' => '1',
        'id' => 1,
      ),
    ),
    'relationships' => array(),
    'name' => 'learning_community_discussion',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'lc_discussion' => 'lc_discussion',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'right-sidebar';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right_t' => NULL,
      'right_l' => NULL,
      'right_m' => NULL,
      'right_r' => NULL,
      'right_b' => NULL,
      'right' => NULL,
      'maincontent' => NULL,
      'rightsidebar' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '0a7848b2-9563-4b5c-a4b7-cbe0139268bb';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view__learning_community_discussion';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-d75c50da-7c10-4efc-8a95-ad7451af54ae';
  $pane->panel = 'maincontent';
  $pane->type = 'views_panes';
  $pane->subtype = 'learning_commnuities_discussion_inner_page-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'd75c50da-7c10-4efc-8a95-ad7451af54ae';
  $display->content['new-d75c50da-7c10-4efc-8a95-ad7451af54ae'] = $pane;
  $display->panels['maincontent'][0] = 'new-d75c50da-7c10-4efc-8a95-ad7451af54ae';
  $pane = new stdClass();
  $pane->pid = 'new-c9877b11-51ff-4087-8086-feb4741dbfb2';
  $pane->panel = 'maincontent';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Comments Label',
    'title' => '',
    'body' => '<hr>
<h2>Comments</h2>',
    'format' => 'raw_html',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'c9877b11-51ff-4087-8086-feb4741dbfb2';
  $display->content['new-c9877b11-51ff-4087-8086-feb4741dbfb2'] = $pane;
  $display->panels['maincontent'][1] = 'new-c9877b11-51ff-4087-8086-feb4741dbfb2';
  $pane = new stdClass();
  $pane->pid = 'new-955a892e-e7cc-4adb-a72c-b89efbc70e8f';
  $pane->panel = 'maincontent';
  $pane->type = 'node_comments';
  $pane->subtype = 'node_comments';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'mode' => '1',
    'comments_per_page' => '50',
    'context' => 'argument_entity_id:node_1',
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
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '955a892e-e7cc-4adb-a72c-b89efbc70e8f';
  $display->content['new-955a892e-e7cc-4adb-a72c-b89efbc70e8f'] = $pane;
  $display->panels['maincontent'][2] = 'new-955a892e-e7cc-4adb-a72c-b89efbc70e8f';
  $pane = new stdClass();
  $pane->pid = 'new-ceb30a37-29e1-4d60-9f9f-0e285c27454e';
  $pane->panel = 'maincontent';
  $pane->type = 'node_comment_form';
  $pane->subtype = 'node_comment_form';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'anon_links' => 0,
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => 'Post Reply',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'ceb30a37-29e1-4d60-9f9f-0e285c27454e';
  $display->content['new-ceb30a37-29e1-4d60-9f9f-0e285c27454e'] = $pane;
  $display->panels['maincontent'][3] = 'new-ceb30a37-29e1-4d60-9f9f-0e285c27454e';
  $pane = new stdClass();
  $pane->pid = 'new-572c19f0-63dc-4dd0-8e04-7da4b074963c';
  $pane->panel = 'rightsidebar';
  $pane->type = 'block';
  $pane->subtype = 'block-13';
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
  $pane->uuid = '572c19f0-63dc-4dd0-8e04-7da4b074963c';
  $display->content['new-572c19f0-63dc-4dd0-8e04-7da4b074963c'] = $pane;
  $display->panels['rightsidebar'][0] = 'new-572c19f0-63dc-4dd0-8e04-7da4b074963c';
  $pane = new stdClass();
  $pane->pid = 'new-802ec22a-2a23-46df-b0b2-b35541bc418c';
  $pane->panel = 'rightsidebar';
  $pane->type = 'views';
  $pane->subtype = 'learning_commnuities_discussion_inner_page';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '0',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block_1',
    'context' => array(
      0 => 'argument_entity_id:node_1.nid',
    ),
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'discussions-sidebar',
    'css_class' => 'sidebar-box',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '802ec22a-2a23-46df-b0b2-b35541bc418c';
  $display->content['new-802ec22a-2a23-46df-b0b2-b35541bc418c'] = $pane;
  $display->panels['rightsidebar'][1] = 'new-802ec22a-2a23-46df-b0b2-b35541bc418c';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__learning_community_discussion'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__mentorship-story';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 12;
  $handler->conf = array(
    'title' => 'Mentorship Story',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'mentorship-story',
    'access' => array(
      'logic' => 'and',
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'story' => 'story',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
    ),
  );
  $display = new panels_display();
  $display->layout = 'right-sidebar';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
      'maincontent' => NULL,
      'rightsidebar' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'b930f411-6d6d-4f92-a3c1-fa741b58d0af';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view__mentorship-story';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-e231f61d-aa79-4e38-8837-9fea07750e0d';
  $pane->panel = 'maincontent';
  $pane->type = 'views_panes';
  $pane->subtype = 'mentorship_stories-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'e231f61d-aa79-4e38-8837-9fea07750e0d';
  $display->content['new-e231f61d-aa79-4e38-8837-9fea07750e0d'] = $pane;
  $display->panels['maincontent'][0] = 'new-e231f61d-aa79-4e38-8837-9fea07750e0d';
  $pane = new stdClass();
  $pane->pid = 'new-3227cf0b-5350-462a-949a-7a4d7eac898d';
  $pane->panel = 'maincontent';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Comments Label',
    'title' => '',
    'body' => '<hr />
<h2>Comments</h2>',
    'format' => 'raw_html',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '3227cf0b-5350-462a-949a-7a4d7eac898d';
  $display->content['new-3227cf0b-5350-462a-949a-7a4d7eac898d'] = $pane;
  $display->panels['maincontent'][1] = 'new-3227cf0b-5350-462a-949a-7a4d7eac898d';
  $pane = new stdClass();
  $pane->pid = 'new-2fcadaff-7b27-46e8-9360-249812dcd8c7';
  $pane->panel = 'maincontent';
  $pane->type = 'node_comments';
  $pane->subtype = 'node_comments';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'mode' => '1',
    'comments_per_page' => '50',
    'context' => 'argument_entity_id:node_1',
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
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '2fcadaff-7b27-46e8-9360-249812dcd8c7';
  $display->content['new-2fcadaff-7b27-46e8-9360-249812dcd8c7'] = $pane;
  $display->panels['maincontent'][2] = 'new-2fcadaff-7b27-46e8-9360-249812dcd8c7';
  $pane = new stdClass();
  $pane->pid = 'new-de314e70-3f60-47d1-9ab2-6c5fa7f69833';
  $pane->panel = 'maincontent';
  $pane->type = 'node_comment_form';
  $pane->subtype = 'node_comment_form';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'anon_links' => 0,
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => 'Post Reply',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'de314e70-3f60-47d1-9ab2-6c5fa7f69833';
  $display->content['new-de314e70-3f60-47d1-9ab2-6c5fa7f69833'] = $pane;
  $display->panels['maincontent'][3] = 'new-de314e70-3f60-47d1-9ab2-6c5fa7f69833';
  $pane = new stdClass();
  $pane->pid = 'new-c3f1156b-5e21-486c-aa2d-250e42509738';
  $pane->panel = 'rightsidebar';
  $pane->type = 'block';
  $pane->subtype = 'block-40';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 3,
            1 => 4,
            2 => 5,
            3 => 6,
            4 => 8,
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'c3f1156b-5e21-486c-aa2d-250e42509738';
  $display->content['new-c3f1156b-5e21-486c-aa2d-250e42509738'] = $pane;
  $display->panels['rightsidebar'][0] = 'new-c3f1156b-5e21-486c-aa2d-250e42509738';
  $pane = new stdClass();
  $pane->pid = 'new-b0df6904-4ec6-4280-99bc-2bd98a2ee4ae';
  $pane->panel = 'rightsidebar';
  $pane->type = 'views';
  $pane->subtype = 'mentorship_stories';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '1',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block_1',
    'context' => array(
      0 => 'argument_entity_id:node_1.nid',
    ),
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'discussions-sidebar',
    'css_class' => 'sidebar-box',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'b0df6904-4ec6-4280-99bc-2bd98a2ee4ae';
  $display->content['new-b0df6904-4ec6-4280-99bc-2bd98a2ee4ae'] = $pane;
  $display->panels['rightsidebar'][1] = 'new-b0df6904-4ec6-4280-99bc-2bd98a2ee4ae';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__mentorship-story'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__mentorship_pairs';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 10;
  $handler->conf = array(
    'title' => 'Mentorship Pairs',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'page-mentorship',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'mentorship_pairs',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'about_the_pair' => 'about_the_pair',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'right-sidebar';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
      'maincontent' => NULL,
      'rightsidebar' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '5c7577fb-9fb0-487a-8c70-03e0f7e19823';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view__mentorship_pairs';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-a1767c58-214a-44b6-8cd4-fc6a2312b39b';
  $pane->panel = 'maincontent';
  $pane->type = 'views';
  $pane->subtype = 'mentorship_pair';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '1',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'page',
    'context' => array(
      0 => 'argument_entity_id:node_1.nid',
    ),
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
  $pane->uuid = 'a1767c58-214a-44b6-8cd4-fc6a2312b39b';
  $display->content['new-a1767c58-214a-44b6-8cd4-fc6a2312b39b'] = $pane;
  $display->panels['maincontent'][0] = 'new-a1767c58-214a-44b6-8cd4-fc6a2312b39b';
  $pane = new stdClass();
  $pane->pid = 'new-7b8bd106-da66-47ad-996b-814fb0c7ce21';
  $pane->panel = 'rightsidebar';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'The Mentor/Mentee Pairs',
    'title' => '',
    'body' => '<h2 class="pane-title">The Mentor/Mentee Pairs</h2>',
    'format' => 'full_html',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '7b8bd106-da66-47ad-996b-814fb0c7ce21';
  $display->content['new-7b8bd106-da66-47ad-996b-814fb0c7ce21'] = $pane;
  $display->panels['rightsidebar'][0] = 'new-7b8bd106-da66-47ad-996b-814fb0c7ce21';
  $pane = new stdClass();
  $pane->pid = 'new-7a6bb6f1-d06f-4841-8b66-35ad3e6ff981';
  $pane->panel = 'rightsidebar';
  $pane->type = 'views';
  $pane->subtype = 'mentorship';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '10',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'page',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'sidebar-box mentor-pairs',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '7a6bb6f1-d06f-4841-8b66-35ad3e6ff981';
  $display->content['new-7a6bb6f1-d06f-4841-8b66-35ad3e6ff981'] = $pane;
  $display->panels['rightsidebar'][1] = 'new-7a6bb6f1-d06f-4841-8b66-35ad3e6ff981';
  $pane = new stdClass();
  $pane->pid = 'new-efe33894-2296-4c6c-bcd1-8e1bdc860aa8';
  $pane->panel = 'rightsidebar';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'About the R2R Mentorship Program',
    'title' => '',
    'body' => '<h2 class="pane-title">About the R2R Mentorship Program</h2>',
    'format' => 'full_html',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'efe33894-2296-4c6c-bcd1-8e1bdc860aa8';
  $display->content['new-efe33894-2296-4c6c-bcd1-8e1bdc860aa8'] = $pane;
  $display->panels['rightsidebar'][2] = 'new-efe33894-2296-4c6c-bcd1-8e1bdc860aa8';
  $pane = new stdClass();
  $pane->pid = 'new-72942a3e-424e-4054-b101-7f8eff4546f7';
  $pane->panel = 'rightsidebar';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'About the R2R Mentorship Program',
    'title' => '',
    'body' => '<p>The purpose of the Program is to help build the capacity of cancer control practitioners to effectively navigate the complex, "real world" context in which evidence-based decision making occurs.</p><p><a href="/mentorship/about" class="btn">Find Out More</a></p>',
    'format' => 'full_html',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'sidebar-box',
  );
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '72942a3e-424e-4054-b101-7f8eff4546f7';
  $display->content['new-72942a3e-424e-4054-b101-7f8eff4546f7'] = $pane;
  $display->panels['rightsidebar'][3] = 'new-72942a3e-424e-4054-b101-7f8eff4546f7';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-a1767c58-214a-44b6-8cd4-fc6a2312b39b';
  $handler->conf['display'] = $display;
  $export['node_view__mentorship_pairs'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__panel_context_f6c638d2-7379-496c-b3a2-7ac4eb50c9df';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 11;
  $handler->conf = array(
    'title' => 'Presenter',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'presenter' => 'presenter',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'right-sidebar';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'maincontent' => NULL,
      'rightsidebar' => NULL,
      'leftsidebar' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'd841aa0b-ebac-4a4c-a10e-40e7f7ee96be';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view__panel_context_f6c638d2-7379-496c-b3a2-7ac4eb50c9df';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-10b0b93b-1831-4ce7-898c-80a93aa3af6a';
  $pane->panel = 'maincontent';
  $pane->type = 'views';
  $pane->subtype = 'presenter';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '1',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block_2',
    'context' => array(
      0 => 'argument_entity_id:node_1.nid',
    ),
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
  $pane->uuid = '10b0b93b-1831-4ce7-898c-80a93aa3af6a';
  $display->content['new-10b0b93b-1831-4ce7-898c-80a93aa3af6a'] = $pane;
  $display->panels['maincontent'][0] = 'new-10b0b93b-1831-4ce7-898c-80a93aa3af6a';
  $pane = new stdClass();
  $pane->pid = 'new-8ac7674c-044e-48c7-92f1-32140bde399c';
  $pane->panel = 'rightsidebar';
  $pane->type = 'views';
  $pane->subtype = 'presenter';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '1',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
    'context' => array(
      0 => 'argument_entity_id:node_1.nid',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'sidebar-box',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '8ac7674c-044e-48c7-92f1-32140bde399c';
  $display->content['new-8ac7674c-044e-48c7-92f1-32140bde399c'] = $pane;
  $display->panels['rightsidebar'][0] = 'new-8ac7674c-044e-48c7-92f1-32140bde399c';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__panel_context_f6c638d2-7379-496c-b3a2-7ac4eb50c9df'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'user_view__user_profile';
  $handler->task = 'user_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'User Profile',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => 'userprofile',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'user_profile',
  );
  $display = new panels_display();
  $display->layout = 'right-sidebar';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
      'maincontent' => NULL,
      'rightsidebar' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%user:field_first_name %user:field_last_name, %user:field_degrees';
  $display->uuid = '5b863cee-a2f9-45e7-a59c-b2512decc3c2';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'user_view__user_profile';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-b7fe0031-5aee-4e89-a8b0-f26a43745501';
  $pane->panel = 'maincontent';
  $pane->type = 'views';
  $pane->subtype = 'user_profile';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '1',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block_1',
    'context' => array(
      0 => 'argument_entity_id:user_1.uid',
    ),
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
  $pane->uuid = 'b7fe0031-5aee-4e89-a8b0-f26a43745501';
  $display->content['new-b7fe0031-5aee-4e89-a8b0-f26a43745501'] = $pane;
  $display->panels['maincontent'][0] = 'new-b7fe0031-5aee-4e89-a8b0-f26a43745501';
  $pane = new stdClass();
  $pane->pid = 'new-e36a9f6d-0cde-44c7-9362-cbaf812ae077';
  $pane->panel = 'rightsidebar';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 3,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
      1 => array(
        'name' => 'compare_users',
        'settings' => array(
          'equality' => '1',
        ),
        'context' => array(
          0 => 'argument_entity_id:user_1',
          1 => 'logged-in-user',
        ),
        'not' => FALSE,
      ),
    ),
    'logic' => 'or',
  );
  $pane->configuration = array(
    'admin_title' => 'Edit Profile Link',
    'title' => '',
    'body' => '<a href="%user:edit-url" class="btn btn-sm">Edit %user:field_first_name\'s Profile</a>
<p>&nbsp;</p>
<a href="/NewsletterSignup" class="btn btn-sm">Newsletter Subscriptions</a>
<p>&nbsp;</p>',
    'format' => 'raw_html',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'e36a9f6d-0cde-44c7-9362-cbaf812ae077';
  $display->content['new-e36a9f6d-0cde-44c7-9362-cbaf812ae077'] = $pane;
  $display->panels['rightsidebar'][0] = 'new-e36a9f6d-0cde-44c7-9362-cbaf812ae077';
  $pane = new stdClass();
  $pane->pid = 'new-fb03da88-6cc8-468d-bcaa-e93b29723815';
  $pane->panel = 'rightsidebar';
  $pane->type = 'views';
  $pane->subtype = 'user_profile';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '1',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block_2',
    'context' => array(
      0 => 'argument_entity_id:user_1.uid',
    ),
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'sidebar-box',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'fb03da88-6cc8-468d-bcaa-e93b29723815';
  $display->content['new-fb03da88-6cc8-468d-bcaa-e93b29723815'] = $pane;
  $display->panels['rightsidebar'][1] = 'new-fb03da88-6cc8-468d-bcaa-e93b29723815';
  $pane = new stdClass();
  $pane->pid = 'new-672ea031-3131-4e41-861d-bc2967a711fa';
  $pane->panel = 'rightsidebar';
  $pane->type = 'views';
  $pane->subtype = 'unpublished_discussions';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'compare_users',
        'settings' => array(
          'equality' => '1',
        ),
        'context' => array(
          0 => 'argument_entity_id:user_1',
          1 => 'logged-in-user',
        ),
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 1,
    'nodes_per_page' => '5',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
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
  $pane->uuid = '672ea031-3131-4e41-861d-bc2967a711fa';
  $display->content['new-672ea031-3131-4e41-861d-bc2967a711fa'] = $pane;
  $display->panels['rightsidebar'][2] = 'new-672ea031-3131-4e41-861d-bc2967a711fa';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['user_view__user_profile'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function rtr_views_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = '403';
  $page->task = 'page';
  $page->admin_title = '403';
  $page->admin_description = '';
  $page->path = '403-error';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_403__panel_context_2b1d1fa9-fa82-4f57-9a42-7c9fb7bb5e70';
  $handler->task = 'page';
  $handler->subtask = '403';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
  );
  $display = new panels_display();
  $display->layout = 'single-column';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'maincontent' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '4bfc819f-baf4-4573-86b5-5e004de8ba0b';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_403__panel_context_2b1d1fa9-fa82-4f57-9a42-7c9fb7bb5e70';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-26d0cf67-976c-4bc0-aaa3-d5f3a0cce414';
  $pane->panel = 'maincontent';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'title' => '',
    'body' => '<div class="error-box">
				<div class="row">
					<div class="col-sm-7 col-sm-offset-5">
						<h1>Oops!</h1> 
						<h2>403 Page</h2>
						<p>You currently do not have access to this page.</p>
						<p>We apologize, please contact us for help.</p>
					</div> <!-- close col-sm-7 -->
				</div>
				</div>',
    'format' => 'raw_html',
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
  $pane->uuid = '26d0cf67-976c-4bc0-aaa3-d5f3a0cce414';
  $display->content['new-26d0cf67-976c-4bc0-aaa3-d5f3a0cce414'] = $pane;
  $display->panels['maincontent'][0] = 'new-26d0cf67-976c-4bc0-aaa3-d5f3a0cce414';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-26d0cf67-976c-4bc0-aaa3-d5f3a0cce414';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['403'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = '404';
  $page->task = 'page';
  $page->admin_title = '404';
  $page->admin_description = '';
  $page->path = '404-error';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_404__panel';
  $handler->task = 'page';
  $handler->subtask = '404';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => '404',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
  );
  $display = new panels_display();
  $display->layout = 'single-column';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'maincontent' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '4bfc819f-baf4-4573-86b5-5e004de8ba0b';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_404__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-26d0cf67-976c-4bc0-aaa3-d5f3a0cce414';
  $pane->panel = 'maincontent';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'title' => '',
    'body' => '<div class="error-box">
				<div class="row">
					<div class="col-sm-7 col-sm-offset-5">
						<h1>Oops!</h1> 
						<h2>404 Page</h2>
						<p>The page you are looking for can\'t be found.</p>
						<p>We apologize, please try again.</p>
					</div> <!-- close col-sm-7 -->
				</div>
				</div>',
    'format' => 'raw_html',
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
  $pane->uuid = '26d0cf67-976c-4bc0-aaa3-d5f3a0cce414';
  $display->content['new-26d0cf67-976c-4bc0-aaa3-d5f3a0cce414'] = $pane;
  $display->panels['maincontent'][0] = 'new-26d0cf67-976c-4bc0-aaa3-d5f3a0cce414';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-26d0cf67-976c-4bc0-aaa3-d5f3a0cce414';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['404'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'Learning_Communties';
  $page->task = 'page';
  $page->admin_title = 'Learning Communities';
  $page->admin_description = '';
  $page->path = '/learning-communities';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_Learning_Communties__panel_context_6a525a43-aa19-46ef-9b04-bd0699f9394b';
  $handler->task = 'page';
  $handler->subtask = 'Learning_Communties';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Homepage - Public',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'learning-communities',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'name' => '',
  );
  $display = new panels_display();
  $display->layout = 'right-sidebar';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
      'maincontent' => NULL,
      'rightsidebar' => NULL,
      'linkpanels' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Learning Communities';
  $display->uuid = 'dad869bd-d889-4c22-bac4-1ba6aebb80a9';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_Learning_Communties__panel_context_6a525a43-aa19-46ef-9b04-bd0699f9394b';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-02b2997d-22c9-4639-a004-04e02d8362fa';
  $pane->panel = 'maincontent';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'LC Main Content',
    'title' => '',
    'body' => '<p class="intro">The purpose of the Learning Communities is to help build the capacity of cancer control practitioners to effectively navigate the complex, "real world" context in which evidence-based decision making occurs.</p><p><b>We’re better together!</b> Moving evidence-based programs into practice is challenging. But collaborating can help. R2R Learning Communities are groups where members with a shared purpose convene around common issues. Members interact regularly and learn from each other. These invitation-only groups create a ‘virtual meeting place’ for members with a shared purpose to convene around common issues related to implementation science and cancer control. NCI is delighted to build on the success of the Research to Reality Mentorship Program and develop and support learning communities interested in moving research into practice.</p><p>&nbsp;</p>',
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
  $pane->uuid = '02b2997d-22c9-4639-a004-04e02d8362fa';
  $display->content['new-02b2997d-22c9-4639-a004-04e02d8362fa'] = $pane;
  $display->panels['maincontent'][0] = 'new-02b2997d-22c9-4639-a004-04e02d8362fa';
  $pane = new stdClass();
  $pane->pid = 'new-8a65f118-bbb0-485e-a3eb-5683860b1a8f';
  $pane->panel = 'maincontent';
  $pane->type = 'views';
  $pane->subtype = 'learning_communities_main_page_boxes';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '0',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block_1',
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
  $pane->uuid = '8a65f118-bbb0-485e-a3eb-5683860b1a8f';
  $display->content['new-8a65f118-bbb0-485e-a3eb-5683860b1a8f'] = $pane;
  $display->panels['maincontent'][1] = 'new-8a65f118-bbb0-485e-a3eb-5683860b1a8f';
  $pane = new stdClass();
  $pane->pid = 'new-bc67b9bd-7396-4184-8a73-549decf3a10a';
  $pane->panel = 'maincontent';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Mentorship',
    'title' => '',
    'body' => '<a class="lc-title" href="/mentorship"><h3>R2R Mentorship Program</h3></a>
		<div class="lc-box">
			<p class="lc-text">Between September 2011 and February 2013, the NCI implemented a pilot mentorship program with 6 mentee-mentor pairs as part of Research to Reality (R2R). This pilot has concluded and is currently being evaluated. With the conclusion of this pilot, the mentees are no longer updating these posts with new monthly updates, but we encourage you to read through the mentee stories to learn more about each pair\'s project and engage in a discussion with the broader R2R community on these topics.</p>
			<div class="lc-button"><a class="btn btn-sm" href="/mentorship">More Information</a></div>
		</div>',
    'format' => 'raw_html',
    'substitute' => TRUE,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'bc67b9bd-7396-4184-8a73-549decf3a10a';
  $display->content['new-bc67b9bd-7396-4184-8a73-549decf3a10a'] = $pane;
  $display->panels['maincontent'][2] = 'new-bc67b9bd-7396-4184-8a73-549decf3a10a';
  $pane = new stdClass();
  $pane->pid = 'new-84b1301d-536f-438f-b5df-b9d614582313';
  $pane->panel = 'rightsidebar';
  $pane->type = 'panels_mini';
  $pane->subtype = 'learning_communities_sidebar';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
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
  $pane->uuid = '84b1301d-536f-438f-b5df-b9d614582313';
  $display->content['new-84b1301d-536f-438f-b5df-b9d614582313'] = $pane;
  $display->panels['rightsidebar'][0] = 'new-84b1301d-536f-438f-b5df-b9d614582313';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-02b2997d-22c9-4639-a004-04e02d8362fa';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_Learning_Communties__panel_context_1cdc3dc9-1d01-45c8-8fce-97eb59408a01';
  $handler->task = 'page';
  $handler->subtask = 'Learning_Communties';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'HPV',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(
      0 => array(
        'identifier' => 'HPV',
        'keyword' => 'hpv',
        'name' => 'entity:node',
        'entity_id' => '1391',
        'id' => 1,
      ),
    ),
    'relationships' => array(),
    'name' => '',
    'access' => array(
      'plugins' => array(
        1 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'learning-communities/hpv',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'right-sidebar';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
      'maincontent' => NULL,
      'rightsidebar' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'NCI-designated Cancer Centers-HPV Vaccine Uptake Learning Community';
  $display->uuid = '695f2825-4d58-41fe-829f-47a8be2ae02f';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_Learning_Communties__panel_context_1cdc3dc9-1d01-45c8-8fce-97eb59408a01';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-aa2df712-ebda-4e8e-b1f7-251323462e5c';
  $pane->panel = 'maincontent';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'HPV Main Content',
    'title' => '',
    'body' => '<p>This learning community supports the work of the NCI-designated cancer centers interested in and/or awarded administrative supplements focused on increasing HPV vaccine uptake.</p>
<p>An administrative supplement in fiscal year 2014 was designed to support the time and effort for of a dedicated cancer control coordinator at each cancer center to who will form collaborations with their state/ local cancer coalitions and immunization programs.</p>
<p>The short term goals (one-year) were to conduct an environmental scan, develop/enhance linkages with existing coalitions and programs, and identify local research priorities, with a focus on pediatric care settings.</p>
<p>The long term goals of the supplement were for the Cancer Centers to build on those linkages and research priorities in order to propose and receive funding for innovative research to increase HPV vaccination uptake. One long term outcome of the supplement program should be an increased capacity of the collaborators to undertake research to test strategies for increasing HPV vaccine uptake, and to increase the capacity of the cancer centers to conduct research especially within the context of primary care.</p>
<p>The final report from the first round of Cancer Center supplements can be accessed <a href="/sites/all/modules/custom/rtr_views/files/HPVCancerCenterSuppFinalReport.pdf" target="_blank">here</a>.</p>
NCI-designated Cancer Centers that are interested in accessing content on this learning community this site should submit a request to join to Margaret Farrell (<a href="mailto:farrellm@mail.nih.gov">farrellm@mail.nih.gov</a>).</p>
<div class="table-responsive">
	<table class="table table-striped">
		<thead>
			<tr>
				<th><b>Name of Cancer Center</b></th>
				<th><b>State</b></th>
			</tr>
		</thead>
		<tbody>
			<tr>
				<td>University of Alabama Comprehensive Cancer Center</td>
				<td>AL</td>
			</tr>
			<tr>
				<td>University of Southern California, Norris Comprehensive Cancer Center</td>
				<td>CA</td>
			</tr>
			<tr>
				<td>Yale Cancer Center, Yale University</td>
				<td>CT</td>
			</tr>
			<tr>
				<td>Moffitt Cancer Center, University of South Florida</td>
				<td>FL</td>
			</tr>
			<tr>
				<td>University of Hawaii Cancer Center</td>
				<td>HI</td>
			</tr>
			<tr>
				<td>Markey Cancer Center, University of Kentucky</td>
				<td>KY</td>
			</tr>
			<tr>
				<td>Lineberger, University of North Carolina</td>
				<td>NC</td>
			</tr>
			<tr>
				<td>Roswell Park Cancer Institute</td>
				<td>NY</td>
			</tr>
			<tr>
				<td>Albert Einstein Cancer Center</td>
				<td>NY</td>
			</tr>
			<tr>
				<td>The Ohio State University Comprehensive Cancer Center</td>
				<td>OH</td>
			</tr>
			<tr>
				<td>Case Comprehensive Cancer Center</td>
				<td>OH</td>
			</tr>
			<tr>
				<td>MUSC Hollings Cancer Center</td>
				<td>SC</td>
			</tr>
			<tr>
				<td>Vanderbilt-Ingram Cancer Center</td>
				<td>TN</td>
			</tr>
			<tr>
				<td>Dan L. Duncan Cancer Center, Baylor COM</td>
				<td>TX</td>
			</tr>
			<tr>
				<td>MD Anderson Cancer Center, Univ. of Texas</td>
				<td>TX</td>
			</tr>
			<tr>
				<td>Huntsman Cancer Institute at Univ. of Utah</td>
				<td>UT</td>
			</tr>
			<tr>
				<td>UVA Cancer Center</td>
				<td>VA</td>
			</tr>
			<tr>
				<td>Carbone Cancer Center, Univ. of Wisconsin</td>
				<td>WI</td>
			</tr>
		</tbody>
	</table>
</div>',
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
  $pane->uuid = 'aa2df712-ebda-4e8e-b1f7-251323462e5c';
  $display->content['new-aa2df712-ebda-4e8e-b1f7-251323462e5c'] = $pane;
  $display->panels['maincontent'][0] = 'new-aa2df712-ebda-4e8e-b1f7-251323462e5c';
  $pane = new stdClass();
  $pane->pid = 'new-055e175b-bd3c-4ec6-95d6-ed31b7b1e3c1';
  $pane->panel = 'maincontent';
  $pane->type = 'views';
  $pane->subtype = 'learning_communities';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '3',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block',
    'override_title' => 1,
    'override_title_text' => 'Recent Stories',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'recent-stories',
    'css_class' => 'yellow round-edge-all',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '055e175b-bd3c-4ec6-95d6-ed31b7b1e3c1';
  $display->content['new-055e175b-bd3c-4ec6-95d6-ed31b7b1e3c1'] = $pane;
  $display->panels['maincontent'][1] = 'new-055e175b-bd3c-4ec6-95d6-ed31b7b1e3c1';
  $pane = new stdClass();
  $pane->pid = 'new-e68b8b9b-3254-4167-a7ca-bb0de97b0fad';
  $pane->panel = 'rightsidebar';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 1,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'admin_title' => 'Log In Link',
    'title' => '',
    'body' => '<p><a href="/user-login" class="btn btn-lg">Already a Member?<br>Login for Access.</a></p>',
    'format' => 'raw_html',
    'substitute' => TRUE,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'member-link',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'e68b8b9b-3254-4167-a7ca-bb0de97b0fad';
  $display->content['new-e68b8b9b-3254-4167-a7ca-bb0de97b0fad'] = $pane;
  $display->panels['rightsidebar'][0] = 'new-e68b8b9b-3254-4167-a7ca-bb0de97b0fad';
  $pane = new stdClass();
  $pane->pid = 'new-cd8c7c2c-1822-40a8-bb17-6c163adcfcf6';
  $pane->panel = 'rightsidebar';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array(
    'logic' => 'and',
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 3,
            1 => 4,
            2 => 7,
            3 => 8,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'admin_title' => 'Member Link',
    'title' => '',
    'body' => '<p><a class="btn btn-lg" href="/learning-communities/1/dashboard">Access the HPV Members Only Section</a></p>',
    'format' => 'full_html',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'member-link',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'cd8c7c2c-1822-40a8-bb17-6c163adcfcf6';
  $display->content['new-cd8c7c2c-1822-40a8-bb17-6c163adcfcf6'] = $pane;
  $display->panels['rightsidebar'][1] = 'new-cd8c7c2c-1822-40a8-bb17-6c163adcfcf6';
  $pane = new stdClass();
  $pane->pid = 'new-dcccb102-0b5f-4d60-9d9a-919683278dac';
  $pane->panel = 'rightsidebar';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'title - learning communities',
    'title' => '',
    'body' => '<h2 class="pane-title">Learning Communities</h2>',
    'format' => 'full_html',
    'substitute' => TRUE,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'dcccb102-0b5f-4d60-9d9a-919683278dac';
  $display->content['new-dcccb102-0b5f-4d60-9d9a-919683278dac'] = $pane;
  $display->panels['rightsidebar'][2] = 'new-dcccb102-0b5f-4d60-9d9a-919683278dac';
  $pane = new stdClass();
  $pane->pid = 'new-bb9f84ae-b32b-471c-b5d5-a787d2d0bf20';
  $pane->panel = 'rightsidebar';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-the-learning-communities';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'span',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'sidebar-box',
  );
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'bb9f84ae-b32b-471c-b5d5-a787d2d0bf20';
  $display->content['new-bb9f84ae-b32b-471c-b5d5-a787d2d0bf20'] = $pane;
  $display->panels['rightsidebar'][3] = 'new-bb9f84ae-b32b-471c-b5d5-a787d2d0bf20';
  $pane = new stdClass();
  $pane->pid = 'new-689613b7-44fd-4f73-96db-62b31f3bf2d3';
  $pane->panel = 'rightsidebar';
  $pane->type = 'block';
  $pane->subtype = 'block-7';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'About the R2R Learning Communities',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '689613b7-44fd-4f73-96db-62b31f3bf2d3';
  $display->content['new-689613b7-44fd-4f73-96db-62b31f3bf2d3'] = $pane;
  $display->panels['rightsidebar'][4] = 'new-689613b7-44fd-4f73-96db-62b31f3bf2d3';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_Learning_Communties__panel_context_8e0b8dad-a488-42a9-943e-5a51e0cba7c4';
  $handler->task = 'page';
  $handler->subtask = 'Learning_Communties';
  $handler->handler = 'panel_context';
  $handler->weight = 2;
  $handler->conf = array(
    'title' => 'MOHR',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(
      0 => array(
        'identifier' => 'MOHR',
        'keyword' => 'mohr',
        'name' => 'entity:node',
        'entity_id' => '1392',
        'id' => 1,
      ),
    ),
    'relationships' => array(),
    'name' => '',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'learning-communities/mohr',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'right-sidebar';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
      'maincontent' => NULL,
      'rightsidebar' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'My Own Health Report Learning Community';
  $display->uuid = 'c520de9b-e47e-449e-8da0-a8bf2b0cdc3b';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_Learning_Communties__panel_context_8e0b8dad-a488-42a9-943e-5a51e0cba7c4';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-6ccd6840-5cc0-4084-840e-ede6f8d46c5c';
  $pane->panel = 'maincontent';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'MOHR Main Content',
    'title' => '',
    'body' => '<p><strong>The R2R MOHR Group </strong>is a community of practice based upon the experiences of the My Own Health Report (MOHR) project team.&nbsp; The MOHR project tested the implementation of an evidence-based patient-reported health assessment and feedback system for use in primary care. This is significant since the Affordable Care Act mandates an annual wellness visit including a health risk assessment for all Medicare patients. The project, a collaborative effort of six research teams, and 18 primary care practices&nbsp; was funded by the Office of Behavioral and Social Science Research( OBSSR), the National Cancer Institute (NCI) and the Agency for Health Research and Quality (AHRQ) under the administration of the NCI Implementation Science team. The purpose of the R2R MOHR group is to continue the collaborative innovation begun in the original project.&nbsp; Building upon lessons learned we intend to further develop the MOHR process and expand upon it. We wish to stimulate creative thinking grounded in practice experience as well as science so as to move the lessons learned from MOHR into practice in various areas of healthcare delivery research with a special focus on cancer control.</p>',
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
  $pane->uuid = '6ccd6840-5cc0-4084-840e-ede6f8d46c5c';
  $display->content['new-6ccd6840-5cc0-4084-840e-ede6f8d46c5c'] = $pane;
  $display->panels['maincontent'][0] = 'new-6ccd6840-5cc0-4084-840e-ede6f8d46c5c';
  $pane = new stdClass();
  $pane->pid = 'new-240b3a05-29d9-4054-8b79-be345c6e4c01';
  $pane->panel = 'maincontent';
  $pane->type = 'views';
  $pane->subtype = 'learning_communities';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '3',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block',
    'override_title' => 1,
    'override_title_text' => 'Recent Stories',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'recent-stories',
    'css_class' => 'round-edge-all yellow',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '240b3a05-29d9-4054-8b79-be345c6e4c01';
  $display->content['new-240b3a05-29d9-4054-8b79-be345c6e4c01'] = $pane;
  $display->panels['maincontent'][1] = 'new-240b3a05-29d9-4054-8b79-be345c6e4c01';
  $pane = new stdClass();
  $pane->pid = 'new-4b946c33-bd86-4382-b732-38f42f718b66';
  $pane->panel = 'rightsidebar';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 3,
            1 => 4,
            2 => 7,
            3 => 8,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'admin_title' => 'Member Link',
    'title' => '',
    'body' => '<p><a class="btn btn-lg" href="/learning-communities/2/dashboard">Access the MOHR Members Only Section</a></p>',
    'format' => 'full_html',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'member-link',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '4b946c33-bd86-4382-b732-38f42f718b66';
  $display->content['new-4b946c33-bd86-4382-b732-38f42f718b66'] = $pane;
  $display->panels['rightsidebar'][0] = 'new-4b946c33-bd86-4382-b732-38f42f718b66';
  $pane = new stdClass();
  $pane->pid = 'new-18d4d385-f67f-4b95-9399-d18f2977602a';
  $pane->panel = 'rightsidebar';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'title - The Learning Communities',
    'title' => '',
    'body' => '<h2 class="pane-title">The Learning Communities</h2>',
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
  $pane->uuid = '18d4d385-f67f-4b95-9399-d18f2977602a';
  $display->content['new-18d4d385-f67f-4b95-9399-d18f2977602a'] = $pane;
  $display->panels['rightsidebar'][1] = 'new-18d4d385-f67f-4b95-9399-d18f2977602a';
  $pane = new stdClass();
  $pane->pid = 'new-4d131f2f-f31b-4335-a07e-a67e2c06b39a';
  $pane->panel = 'rightsidebar';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-the-learning-communities';
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
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'sidebar-box',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '4d131f2f-f31b-4335-a07e-a67e2c06b39a';
  $display->content['new-4d131f2f-f31b-4335-a07e-a67e2c06b39a'] = $pane;
  $display->panels['rightsidebar'][2] = 'new-4d131f2f-f31b-4335-a07e-a67e2c06b39a';
  $pane = new stdClass();
  $pane->pid = 'new-e7e65725-0f47-4630-b654-8e82cf45327b';
  $pane->panel = 'rightsidebar';
  $pane->type = 'block';
  $pane->subtype = 'block-7';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'About the R2R Learning Communities',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'e7e65725-0f47-4630-b654-8e82cf45327b';
  $display->content['new-e7e65725-0f47-4630-b654-8e82cf45327b'] = $pane;
  $display->panels['rightsidebar'][3] = 'new-e7e65725-0f47-4630-b654-8e82cf45327b';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-6ccd6840-5cc0-4084-840e-ede6f8d46c5c';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_Learning_Communties__panel_context_5ca37096-7364-4db5-a6e2-e91a05dfe3b8';
  $handler->task = 'page';
  $handler->subtask = 'Learning_Communties';
  $handler->handler = 'panel_context';
  $handler->weight = 3;
  $handler->conf = array(
    'title' => 'QUALRIS',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(
      0 => array(
        'identifier' => 'HPV',
        'keyword' => 'hpv',
        'name' => 'entity:node',
        'entity_id' => '1391',
        'id' => 1,
      ),
    ),
    'relationships' => array(),
    'name' => '',
    'access' => array(
      'plugins' => array(
        1 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'learning-communities/qualris',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'right-sidebar';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
      'maincontent' => NULL,
      'rightsidebar' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'The QUALRIS Group Learning Community';
  $display->uuid = '695f2825-4d58-41fe-829f-47a8be2ae02f';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_Learning_Communties__panel_context_5ca37096-7364-4db5-a6e2-e91a05dfe3b8';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-aa2df712-ebda-4e8e-b1f7-251323462e5c';
  $pane->panel = 'maincontent';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'QUALRIS Main Content',
    'title' => '',
    'body' => '<p><strong>The QUALRIS Group </strong><strong>is a team of&nbsp;</strong>experts assembled by the NCI and charged with exploring qualitative research methods as used in Implementation Science and cancer research. Currently, qualitative methods are widely used in implementation trials, yet there has been little discussion within the field about the methods themselves. Limited guidance is available in the field as to what qualitative approaches might be most rigorously and productively used for which research questions and settings, especially along the cancer continuum.&nbsp;</p><p>The QUALRIS Group has three main aims:</p><ul><li>To examine the use of qualitative methods in implementation science to-date</li><li>To identify specific challenges to the rigorous use of these methods in varying contexts, and</li><li>To make recommendations for their improved use, development and integration into implementation science</li></ul><p>The group’s long-term purpose is to generate widespread discussion among implementation science researchers to stimulate methodological research and development of tools, instruments and guidance for the field.</p>',
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
  $pane->uuid = 'aa2df712-ebda-4e8e-b1f7-251323462e5c';
  $display->content['new-aa2df712-ebda-4e8e-b1f7-251323462e5c'] = $pane;
  $display->panels['maincontent'][0] = 'new-aa2df712-ebda-4e8e-b1f7-251323462e5c';
  $pane = new stdClass();
  $pane->pid = 'new-055e175b-bd3c-4ec6-95d6-ed31b7b1e3c1';
  $pane->panel = 'maincontent';
  $pane->type = 'views';
  $pane->subtype = 'learning_communities';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '3',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block',
    'override_title' => 1,
    'override_title_text' => 'Recent Stories',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'recent-stories',
    'css_class' => 'yellow round-edge-all',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '055e175b-bd3c-4ec6-95d6-ed31b7b1e3c1';
  $display->content['new-055e175b-bd3c-4ec6-95d6-ed31b7b1e3c1'] = $pane;
  $display->panels['maincontent'][1] = 'new-055e175b-bd3c-4ec6-95d6-ed31b7b1e3c1';
  $pane = new stdClass();
  $pane->pid = 'new-cd8c7c2c-1822-40a8-bb17-6c163adcfcf6';
  $pane->panel = 'rightsidebar';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array(
    'logic' => 'and',
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 3,
            1 => 4,
            2 => 7,
            3 => 8,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'admin_title' => 'Member Link',
    'title' => '',
    'body' => '<p><a class="btn btn-lg" href="/learning-communities/3/dashboard">Access the QUALRIS Members Only Section</a></p>',
    'format' => 'full_html',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'member-link',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'cd8c7c2c-1822-40a8-bb17-6c163adcfcf6';
  $display->content['new-cd8c7c2c-1822-40a8-bb17-6c163adcfcf6'] = $pane;
  $display->panels['rightsidebar'][0] = 'new-cd8c7c2c-1822-40a8-bb17-6c163adcfcf6';
  $pane = new stdClass();
  $pane->pid = 'new-dcccb102-0b5f-4d60-9d9a-919683278dac';
  $pane->panel = 'rightsidebar';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'title - learning communities',
    'title' => '',
    'body' => '<h2 class="pane-title">Learning Communities</h2>',
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
  $pane->uuid = 'dcccb102-0b5f-4d60-9d9a-919683278dac';
  $display->content['new-dcccb102-0b5f-4d60-9d9a-919683278dac'] = $pane;
  $display->panels['rightsidebar'][1] = 'new-dcccb102-0b5f-4d60-9d9a-919683278dac';
  $pane = new stdClass();
  $pane->pid = 'new-bb9f84ae-b32b-471c-b5d5-a787d2d0bf20';
  $pane->panel = 'rightsidebar';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-the-learning-communities';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'span',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'sidebar-box',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'bb9f84ae-b32b-471c-b5d5-a787d2d0bf20';
  $display->content['new-bb9f84ae-b32b-471c-b5d5-a787d2d0bf20'] = $pane;
  $display->panels['rightsidebar'][2] = 'new-bb9f84ae-b32b-471c-b5d5-a787d2d0bf20';
  $pane = new stdClass();
  $pane->pid = 'new-689613b7-44fd-4f73-96db-62b31f3bf2d3';
  $pane->panel = 'rightsidebar';
  $pane->type = 'block';
  $pane->subtype = 'block-7';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'About the R2R Learning Communities',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '689613b7-44fd-4f73-96db-62b31f3bf2d3';
  $display->content['new-689613b7-44fd-4f73-96db-62b31f3bf2d3'] = $pane;
  $display->panels['rightsidebar'][3] = 'new-689613b7-44fd-4f73-96db-62b31f3bf2d3';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_Learning_Communties__panel_context_475cfda3-5353-4197-a370-765ad6110d1d';
  $handler->task = 'page';
  $handler->subtask = 'Learning_Communties';
  $handler->handler = 'panel_context';
  $handler->weight = 4;
  $handler->conf = array(
    'title' => 'CRC',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(
      0 => array(
        'identifier' => 'HPV',
        'keyword' => 'hpv',
        'name' => 'entity:node',
        'entity_id' => '1391',
        'id' => 1,
      ),
    ),
    'relationships' => array(),
    'name' => '',
    'access' => array(
      'plugins' => array(
        1 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'learning-communities/crc',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'right-sidebar';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
      'maincontent' => NULL,
      'rightsidebar' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'CRC Screening Workgroup Learning Community';
  $display->uuid = '695f2825-4d58-41fe-829f-47a8be2ae02f';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_Learning_Communties__panel_context_475cfda3-5353-4197-a370-765ad6110d1d';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-aa2df712-ebda-4e8e-b1f7-251323462e5c';
  $pane->panel = 'maincontent';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'CRC Main Content',
    'title' => '',
    'body' => '<p>This learning community supports state comprehensive cancer control coalitions that have participated in the 80% by 2018 Forum held September 2015.</p><p>The goals for state teams that participated were to:</p><ol><li>&nbsp;Facilitate the creation of evidence-based action plans by the 11 teams of stakeholders representing the Comprehensive Cancer Control programs and coalitions, community &nbsp;health centers, and primary care associations attending the Forum.</li><li value="2">&nbsp;Present proven strategies that advance local implementation of state cancer plan CRC screening objectives, through the collaboration of stakeholders such as local health departments and Federally Qualified Health Centers.</li><li>&nbsp;Provide training on the use of existing tools and resources designed to help increase CRC screening rates including <em>The Guide to Community Preventive Services and Implementation, and Research-Tested Intervention Programs (RTIPS)</em>.</li><li>&nbsp;Cultivate new and strengthen existing CRC state and local stakeholder relationships (Local Health Departments, Federally Qualified Health Centers, Primary Care Association, and GI Experts).</li><li>&nbsp;Explore how Community Health Centers can integrate evidence-based colorectal cancer screening into practice, through multilevel collaborations. Additionally, increase subject-matter experts’ knowledge of the implementation challenges faced by Community Health Centers</li></ol><p>The state teams that participated in the Forum are: Arizona, California, Florida, Georgia, Michigan, Mississippi, New York, Pennsylvania, South Dakota, Texas, and Vermont.</p>',
    'format' => 'full_html',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'aa2df712-ebda-4e8e-b1f7-251323462e5c';
  $display->content['new-aa2df712-ebda-4e8e-b1f7-251323462e5c'] = $pane;
  $display->panels['maincontent'][0] = 'new-aa2df712-ebda-4e8e-b1f7-251323462e5c';
  $pane = new stdClass();
  $pane->pid = 'new-055e175b-bd3c-4ec6-95d6-ed31b7b1e3c1';
  $pane->panel = 'maincontent';
  $pane->type = 'views';
  $pane->subtype = 'learning_communities';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '3',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block',
    'override_title' => 1,
    'override_title_text' => 'Recent Stories',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'recent-stories',
    'css_class' => 'yellow round-edge-all',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '055e175b-bd3c-4ec6-95d6-ed31b7b1e3c1';
  $display->content['new-055e175b-bd3c-4ec6-95d6-ed31b7b1e3c1'] = $pane;
  $display->panels['maincontent'][1] = 'new-055e175b-bd3c-4ec6-95d6-ed31b7b1e3c1';
  $pane = new stdClass();
  $pane->pid = 'new-e68b8b9b-3254-4167-a7ca-bb0de97b0fad';
  $pane->panel = 'rightsidebar';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 1,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'admin_title' => 'Log In Link',
    'title' => '',
    'body' => '<p><a href="/user-login" class="btn btn-lg">Already a Member?<br>Login for Access.</a></p>',
    'format' => 'raw_html',
    'substitute' => TRUE,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'member-link',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'e68b8b9b-3254-4167-a7ca-bb0de97b0fad';
  $display->content['new-e68b8b9b-3254-4167-a7ca-bb0de97b0fad'] = $pane;
  $display->panels['rightsidebar'][0] = 'new-e68b8b9b-3254-4167-a7ca-bb0de97b0fad';
  $pane = new stdClass();
  $pane->pid = 'new-cd8c7c2c-1822-40a8-bb17-6c163adcfcf6';
  $pane->panel = 'rightsidebar';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array(
    'logic' => 'and',
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 3,
            1 => 4,
            2 => 7,
            3 => 8,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'admin_title' => 'Member Link',
    'title' => '',
    'body' => '<p><a class="btn btn-lg" href="/learning-communities/1641/dashboard">Access the CRC Members Only Section</a></p>',
    'format' => 'full_html',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'member-link',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'cd8c7c2c-1822-40a8-bb17-6c163adcfcf6';
  $display->content['new-cd8c7c2c-1822-40a8-bb17-6c163adcfcf6'] = $pane;
  $display->panels['rightsidebar'][1] = 'new-cd8c7c2c-1822-40a8-bb17-6c163adcfcf6';
  $pane = new stdClass();
  $pane->pid = 'new-dcccb102-0b5f-4d60-9d9a-919683278dac';
  $pane->panel = 'rightsidebar';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'title - learning communities',
    'title' => '',
    'body' => '<h2 class="pane-title">Learning Communities</h2>',
    'format' => 'full_html',
    'substitute' => TRUE,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'dcccb102-0b5f-4d60-9d9a-919683278dac';
  $display->content['new-dcccb102-0b5f-4d60-9d9a-919683278dac'] = $pane;
  $display->panels['rightsidebar'][2] = 'new-dcccb102-0b5f-4d60-9d9a-919683278dac';
  $pane = new stdClass();
  $pane->pid = 'new-bb9f84ae-b32b-471c-b5d5-a787d2d0bf20';
  $pane->panel = 'rightsidebar';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-the-learning-communities';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'span',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'sidebar-box',
  );
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'bb9f84ae-b32b-471c-b5d5-a787d2d0bf20';
  $display->content['new-bb9f84ae-b32b-471c-b5d5-a787d2d0bf20'] = $pane;
  $display->panels['rightsidebar'][3] = 'new-bb9f84ae-b32b-471c-b5d5-a787d2d0bf20';
  $pane = new stdClass();
  $pane->pid = 'new-689613b7-44fd-4f73-96db-62b31f3bf2d3';
  $pane->panel = 'rightsidebar';
  $pane->type = 'block';
  $pane->subtype = 'block-7';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'About the R2R Learning Communities',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '689613b7-44fd-4f73-96db-62b31f3bf2d3';
  $display->content['new-689613b7-44fd-4f73-96db-62b31f3bf2d3'] = $pane;
  $display->panels['rightsidebar'][4] = 'new-689613b7-44fd-4f73-96db-62b31f3bf2d3';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_Learning_Communties__panel_context_459803fd-eb80-415f-860b-0dfad79cd253';
  $handler->task = 'page';
  $handler->subtask = 'Learning_Communties';
  $handler->handler = 'panel_context';
  $handler->weight = 5;
  $handler->conf = array(
    'title' => 'CCC-HPV',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(
      0 => array(
        'identifier' => 'HPV',
        'keyword' => 'hpv',
        'name' => 'entity:node',
        'entity_id' => '1391',
        'id' => 1,
      ),
    ),
    'relationships' => array(),
    'name' => '',
    'access' => array(
      'plugins' => array(
        1 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'learning-communities/ccchpv',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'right-sidebar';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
      'maincontent' => NULL,
      'rightsidebar' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'CCC-HPV Workshop Learning Community';
  $display->uuid = '695f2825-4d58-41fe-829f-47a8be2ae02f';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_Learning_Communties__panel_context_459803fd-eb80-415f-860b-0dfad79cd253';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-aa2df712-ebda-4e8e-b1f7-251323462e5c';
  $pane->panel = 'maincontent';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'CRC Main Content',
    'title' => '',
    'body' => '<p>This learning community supports state comprehensive cancer control coalitions that have participated in the HPV technical assistance workshop in May 2016.&nbsp;</p><p>The goals for state teams that participated in the HPV workshop are:</p><ol><li>Develop a realistic evidence-based action plan that leverages existing networks, systems and relationships to further the state’s efforts in increasing their HPV vaccination rates</li><li>Increase understanding of proven strategies that advance implementation of state cancer plan HPV vaccination objectives, through the collaboration of state and local stakeholders</li><li>Increase awareness of the availability of existing evidence-based tools and resources designed to help increase HPV vaccination rates</li><li>Share real-life examples of successful HPV vaccinations efforts in the field that illustrate working with a variety of partners and settings</li><li>Form new and strengthen existing HPV vaccination relationships within the CCC coalitions and among state partners</li></ol><p>The states that participated in the technical assistance workshop are: Arkansas, Colorado, Florida, Georgia, Illinois, South Carolina, South Dakota, Tennessee, Utah, Virginia, and West Virginia.</p>',
    'format' => 'full_html',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'aa2df712-ebda-4e8e-b1f7-251323462e5c';
  $display->content['new-aa2df712-ebda-4e8e-b1f7-251323462e5c'] = $pane;
  $display->panels['maincontent'][0] = 'new-aa2df712-ebda-4e8e-b1f7-251323462e5c';
  $pane = new stdClass();
  $pane->pid = 'new-055e175b-bd3c-4ec6-95d6-ed31b7b1e3c1';
  $pane->panel = 'maincontent';
  $pane->type = 'views';
  $pane->subtype = 'learning_communities';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '3',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block',
    'override_title' => 1,
    'override_title_text' => 'Recent Stories',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'recent-stories',
    'css_class' => 'yellow round-edge-all',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '055e175b-bd3c-4ec6-95d6-ed31b7b1e3c1';
  $display->content['new-055e175b-bd3c-4ec6-95d6-ed31b7b1e3c1'] = $pane;
  $display->panels['maincontent'][1] = 'new-055e175b-bd3c-4ec6-95d6-ed31b7b1e3c1';
  $pane = new stdClass();
  $pane->pid = 'new-e68b8b9b-3254-4167-a7ca-bb0de97b0fad';
  $pane->panel = 'rightsidebar';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 1,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'admin_title' => 'Log In Link',
    'title' => '',
    'body' => '<p><a href="/user-login" class="btn btn-lg">Already a Member?<br>Login for Access.</a></p>',
    'format' => 'raw_html',
    'substitute' => TRUE,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'member-link',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'e68b8b9b-3254-4167-a7ca-bb0de97b0fad';
  $display->content['new-e68b8b9b-3254-4167-a7ca-bb0de97b0fad'] = $pane;
  $display->panels['rightsidebar'][0] = 'new-e68b8b9b-3254-4167-a7ca-bb0de97b0fad';
  $pane = new stdClass();
  $pane->pid = 'new-cd8c7c2c-1822-40a8-bb17-6c163adcfcf6';
  $pane->panel = 'rightsidebar';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array(
    'logic' => 'and',
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 3,
            1 => 4,
            2 => 7,
            3 => 8,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'admin_title' => 'Member Link',
    'title' => '',
    'body' => '<p><a class="btn btn-lg" href="/learning-communities/1642/dashboard">Access the CCC-HPV Members Only Section</a></p>',
    'format' => 'full_html',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'member-link',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'cd8c7c2c-1822-40a8-bb17-6c163adcfcf6';
  $display->content['new-cd8c7c2c-1822-40a8-bb17-6c163adcfcf6'] = $pane;
  $display->panels['rightsidebar'][1] = 'new-cd8c7c2c-1822-40a8-bb17-6c163adcfcf6';
  $pane = new stdClass();
  $pane->pid = 'new-dcccb102-0b5f-4d60-9d9a-919683278dac';
  $pane->panel = 'rightsidebar';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'title - learning communities',
    'title' => '',
    'body' => '<h2 class="pane-title">Learning Communities</h2>',
    'format' => 'full_html',
    'substitute' => TRUE,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'dcccb102-0b5f-4d60-9d9a-919683278dac';
  $display->content['new-dcccb102-0b5f-4d60-9d9a-919683278dac'] = $pane;
  $display->panels['rightsidebar'][2] = 'new-dcccb102-0b5f-4d60-9d9a-919683278dac';
  $pane = new stdClass();
  $pane->pid = 'new-bb9f84ae-b32b-471c-b5d5-a787d2d0bf20';
  $pane->panel = 'rightsidebar';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-the-learning-communities';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'span',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'sidebar-box',
  );
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'bb9f84ae-b32b-471c-b5d5-a787d2d0bf20';
  $display->content['new-bb9f84ae-b32b-471c-b5d5-a787d2d0bf20'] = $pane;
  $display->panels['rightsidebar'][3] = 'new-bb9f84ae-b32b-471c-b5d5-a787d2d0bf20';
  $pane = new stdClass();
  $pane->pid = 'new-689613b7-44fd-4f73-96db-62b31f3bf2d3';
  $pane->panel = 'rightsidebar';
  $pane->type = 'block';
  $pane->subtype = 'block-7';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'About the R2R Learning Communities',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '689613b7-44fd-4f73-96db-62b31f3bf2d3';
  $display->content['new-689613b7-44fd-4f73-96db-62b31f3bf2d3'] = $pane;
  $display->panels['rightsidebar'][4] = 'new-689613b7-44fd-4f73-96db-62b31f3bf2d3';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_Learning_Communties__panel_context_daf49f82-6725-4aca-8182-a451687d5582';
  $handler->task = 'page';
  $handler->subtask = 'Learning_Communties';
  $handler->handler = 'panel_context';
  $handler->weight = 6;
  $handler->conf = array(
    'title' => 'PHA',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(
      0 => array(
        'identifier' => 'pha',
        'keyword' => 'pha',
        'name' => 'entity:node',
        'entity_id' => '1392',
        'id' => 1,
      ),
    ),
    'relationships' => array(),
    'name' => '',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'learning-communities/pha',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'right-sidebar';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
      'maincontent' => NULL,
      'rightsidebar' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Population Health Assessment in Cancer Catchment Areas Grantee Learning Community';
  $display->uuid = 'c520de9b-e47e-449e-8da0-a8bf2b0cdc3b';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_Learning_Communties__panel_context_daf49f82-6725-4aca-8182-a451687d5582';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-6ccd6840-5cc0-4084-840e-ede6f8d46c5c';
  $pane->panel = 'maincontent';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'PHA Main Content',
    'title' => '',
    'body' => '<p style="margin-left:.5in;">This Learning Community was launched to support researchers conducting studies under the NCI-funded “Population Health Assessment in Cancer Catchment Areas” administrative supplement initiative. Fifteen NCI-designated Comprehensive Cancer Centers across the country were awarded supplements to enable them to conduct pilot data collection efforts that will enable the centers to better characterize their local population with regard to factors such as cancer-related risk factors, health behaviors, knowledge, and information needs; health care access; utilization of health information technology; and environmental influences.&nbsp; The short-term goal of this initiative is for the funded sites to field a population health assessment survey in their catchment area and to work with NCI on a scholarly agenda for how to think about further defining and describing cancer center catchment areas based on what is learned from these pilot efforts. The long-term goals of the initiative are to 1) increase capacity at cancer centers to collect data at the local level; 2) facilitate collaborations between providers, public health practitioners, and local policymakers around the collection and use of local data; 3) provide crucial information regarding survey research methods (e.g. best practices for linking local data to national estimates for calibration, juxtaposition, and aggregation), and the feasibility of using community-level population health assessments as part of a national cancer surveillance enterprise.</p><p style="margin-left:.5in;">The following 15 sites were awarded administrative supplements under the Population Health Assessment in Cancer Catchment Areas” initiative:&nbsp;</p><p style="margin-left:.5in;">1.&nbsp;&nbsp;&nbsp; The Ohio State Comprehensive Cancer Center (Project Director: Electra Paskett)</p><p style="margin-left:.5in;">2.&nbsp;&nbsp;&nbsp; Abramson Cancer Center, University of Pennsylvania (Project Director: Karen Glanz)</p><p style="margin-left:.5in;">3.&nbsp;&nbsp;&nbsp; University of Pittsburgh Cancer Institute (Project Director: Jian-Min Yuan)</p><p style="margin-left:.5in;">4.&nbsp;&nbsp;&nbsp; Albert Einstein Cancer Center (Project Director: Bruce Rapkin)</p><p style="margin-left:.5in;">5.&nbsp;&nbsp;&nbsp; Duke Cancer Institute (Project Director: Nadine Barrett)</p><p style="margin-left:.5in;">6.&nbsp;&nbsp;&nbsp; University of Hawaii Cancer Center (Project Directors: Kevin Cassel and Hyeryeon Lee)</p><p style="margin-left:.5in;">7.&nbsp;&nbsp;&nbsp; Melvin and Bren Simon Cancer Center Indiana University (Project Directors: David Haggstrom and Susan Rawls)</p><p style="margin-left:.5in;">8.&nbsp;&nbsp;&nbsp; Fox Chase Cancer Center (Project Directors: Nestor Esnaola and Susan Fisher)</p><p style="margin-left:.5in;">9.&nbsp;&nbsp;&nbsp; Roswell Park Cancer Institute (Project Director: Elizabeth Bouchard)</p><p style="margin-left:.5in;">10.&nbsp; Dartmouth-Hitchcock Norris Cotton Cancer Center (Project Director: Tracy Onega)</p><p style="margin-left:.5in;">11.&nbsp; Markey Cancer Center University of Kentucky (Project Directors: Robin Vanderpool ann Bin Huang)</p><p style="margin-left:.5in;">12.&nbsp; UCSF Helen Diller Family Comprehensive Cancer Center (Project Directors: Bob Hiatt and Urmimala Sarkar)</p><p style="margin-left:.5in;">13.&nbsp; Memorial Sloan-Kettering Cancer Center (Project Director: Joseph Osborne)</p><p style="margin-left:.5in;">14.&nbsp; Dana-Farber Cancer Institute (Project Director: K. Vish Viswanath)</p><p style="margin-left:.5in;">15.&nbsp; MD Anderson Cancer Center (Project Director: Sanjay Shete)</p>',
    'format' => 'full_html',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '6ccd6840-5cc0-4084-840e-ede6f8d46c5c';
  $display->content['new-6ccd6840-5cc0-4084-840e-ede6f8d46c5c'] = $pane;
  $display->panels['maincontent'][0] = 'new-6ccd6840-5cc0-4084-840e-ede6f8d46c5c';
  $pane = new stdClass();
  $pane->pid = 'new-240b3a05-29d9-4054-8b79-be345c6e4c01';
  $pane->panel = 'maincontent';
  $pane->type = 'views';
  $pane->subtype = 'learning_communities';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '3',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block',
    'override_title' => 1,
    'override_title_text' => 'Recent Stories',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'recent-stories',
    'css_class' => 'round-edge-all yellow',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '240b3a05-29d9-4054-8b79-be345c6e4c01';
  $display->content['new-240b3a05-29d9-4054-8b79-be345c6e4c01'] = $pane;
  $display->panels['maincontent'][1] = 'new-240b3a05-29d9-4054-8b79-be345c6e4c01';
  $pane = new stdClass();
  $pane->pid = 'new-30bc1210-481a-4205-a569-2272b6ce9af4';
  $pane->panel = 'rightsidebar';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 1,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'admin_title' => 'Log in Link',
    'title' => '',
    'body' => '<p><a href="/user-login" class="btn btn-lg">Already a Member?<br>Login for Access.</a></p>',
    'format' => 'raw_html',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'member-link',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '30bc1210-481a-4205-a569-2272b6ce9af4';
  $display->content['new-30bc1210-481a-4205-a569-2272b6ce9af4'] = $pane;
  $display->panels['rightsidebar'][0] = 'new-30bc1210-481a-4205-a569-2272b6ce9af4';
  $pane = new stdClass();
  $pane->pid = 'new-4b946c33-bd86-4382-b732-38f42f718b66';
  $pane->panel = 'rightsidebar';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 3,
            1 => 4,
            2 => 7,
            3 => 8,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'admin_title' => 'Member Link',
    'title' => '',
    'body' => '<p><a class="btn btn-lg" href="/learning-communities/1920/dashboard">Access the PHA Members Only Section</a></p>',
    'format' => 'full_html',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'member-link',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '4b946c33-bd86-4382-b732-38f42f718b66';
  $display->content['new-4b946c33-bd86-4382-b732-38f42f718b66'] = $pane;
  $display->panels['rightsidebar'][1] = 'new-4b946c33-bd86-4382-b732-38f42f718b66';
  $pane = new stdClass();
  $pane->pid = 'new-18d4d385-f67f-4b95-9399-d18f2977602a';
  $pane->panel = 'rightsidebar';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'title - The Learning Communities',
    'title' => '',
    'body' => '<h2 class="pane-title">The Learning Communities</h2>',
    'format' => 'full_html',
    'substitute' => TRUE,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '18d4d385-f67f-4b95-9399-d18f2977602a';
  $display->content['new-18d4d385-f67f-4b95-9399-d18f2977602a'] = $pane;
  $display->panels['rightsidebar'][2] = 'new-18d4d385-f67f-4b95-9399-d18f2977602a';
  $pane = new stdClass();
  $pane->pid = 'new-4d131f2f-f31b-4335-a07e-a67e2c06b39a';
  $pane->panel = 'rightsidebar';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-the-learning-communities';
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
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'sidebar-box',
  );
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '4d131f2f-f31b-4335-a07e-a67e2c06b39a';
  $display->content['new-4d131f2f-f31b-4335-a07e-a67e2c06b39a'] = $pane;
  $display->panels['rightsidebar'][3] = 'new-4d131f2f-f31b-4335-a07e-a67e2c06b39a';
  $pane = new stdClass();
  $pane->pid = 'new-e7e65725-0f47-4630-b654-8e82cf45327b';
  $pane->panel = 'rightsidebar';
  $pane->type = 'block';
  $pane->subtype = 'block-7';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'About the R2R Learning Communities',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = 'e7e65725-0f47-4630-b654-8e82cf45327b';
  $display->content['new-e7e65725-0f47-4630-b654-8e82cf45327b'] = $pane;
  $display->panels['rightsidebar'][4] = 'new-e7e65725-0f47-4630-b654-8e82cf45327b';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-6ccd6840-5cc0-4084-840e-ede6f8d46c5c';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_Learning_Communties__nci';
  $handler->task = 'page';
  $handler->subtask = 'Learning_Communties';
  $handler->handler = 'panel_context';
  $handler->weight = 7;
  $handler->conf = array(
    'title' => 'Healthcare Teams',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(
      0 => array(
        'identifier' => 'nci',
        'keyword' => 'nci',
        'name' => 'entity:node',
        'entity_id' => '2007',
        'id' => 1,
      ),
    ),
    'relationships' => array(),
    'name' => 'nci',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'learning-communities/nci',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'right-sidebar';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
      'maincontent' => NULL,
      'rightsidebar' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Healthcare Teams in Cancer Care Delivery';
  $display->uuid = 'c520de9b-e47e-449e-8da0-a8bf2b0cdc3b';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_Learning_Communties__nci';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-6ccd6840-5cc0-4084-840e-ede6f8d46c5c';
  $pane->panel = 'maincontent';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Healthcare Teams in Cancer Care Delivery Main Content',
    'title' => '',
    'body' => '<p style="margin-left:.5in;"><span style="color: rgb(51, 51, 51); font-family: Arial, sans-serif; font-size: 14px;">The mission of the NCI Healthcare Teams in Cancer Care Delivery Learning Community is to advance the science and practice of effective teamwork and coordination within and across the multiple teams and individuals involved in caring for patients with cancer. Teams need to be dynamic, adaptive, and must share common goals in order to optimize their effectiveness. To this end the Healthcare Teams Learning Community aims to provide:</span><br style="color: rgb(51, 51, 51); font-family: Arial, sans-serif; font-size: 14px;"><span style="color: rgb(51, 51, 51); font-family: Arial, sans-serif; font-size: 14px;">• The clinical oncology community and associated providers with the latest evidence and tools to promote team-based care, strategies to organize efficient healthcare teams, and methods evaluate teamwork processes and coordination between healthcare teams. The community also provides a space for providers to share their experiences and insights about building resilient teams in daily practice.</span><br style="color: rgb(51, 51, 51); font-family: Arial, sans-serif; font-size: 14px;"><span style="color: rgb(51, 51, 51); font-family: Arial, sans-serif; font-size: 14px;">• Researchers with a space for making new connections, learning about funding opportunities, and collaborating to advance the scientific evidence examining team-based care models and teamwork processes in healthcare delivery, as well as their impact on care processes and outcomes that matter to patients and their loved ones.</span><br style="color: rgb(51, 51, 51); font-family: Arial, sans-serif; font-size: 14px;"><span style="color: rgb(51, 51, 51); font-family: Arial, sans-serif; font-size: 14px;">• Cross-pollination across disciplines and perspectives. The community aims to support cancer care clinicians in optimizing care coordination by translating evidence-based team principles from other sectors of healthcare and to connect team researchers with cancer researchers and clinicians to learn about the complexities of team-based care and coordination in cancer care delivery. The community provides a venue for learning, sharing, and collaboration.</span></p>',
    'format' => 'full_html',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '6ccd6840-5cc0-4084-840e-ede6f8d46c5c';
  $display->content['new-6ccd6840-5cc0-4084-840e-ede6f8d46c5c'] = $pane;
  $display->panels['maincontent'][0] = 'new-6ccd6840-5cc0-4084-840e-ede6f8d46c5c';
  $pane = new stdClass();
  $pane->pid = 'new-240b3a05-29d9-4054-8b79-be345c6e4c01';
  $pane->panel = 'maincontent';
  $pane->type = 'views';
  $pane->subtype = 'learning_communities';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '3',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block',
    'override_title' => 1,
    'override_title_text' => 'Recent Stories',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'recent-stories',
    'css_class' => 'round-edge-all yellow',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '240b3a05-29d9-4054-8b79-be345c6e4c01';
  $display->content['new-240b3a05-29d9-4054-8b79-be345c6e4c01'] = $pane;
  $display->panels['maincontent'][1] = 'new-240b3a05-29d9-4054-8b79-be345c6e4c01';
  $pane = new stdClass();
  $pane->pid = 'new-30bc1210-481a-4205-a569-2272b6ce9af4';
  $pane->panel = 'rightsidebar';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 1,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'admin_title' => 'Log in Link',
    'title' => '',
    'body' => '<p><a href="/user-login" class="btn btn-lg">Already a Member?<br>Login for Access.</a></p>',
    'format' => 'raw_html',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'member-link',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '30bc1210-481a-4205-a569-2272b6ce9af4';
  $display->content['new-30bc1210-481a-4205-a569-2272b6ce9af4'] = $pane;
  $display->panels['rightsidebar'][0] = 'new-30bc1210-481a-4205-a569-2272b6ce9af4';
  $pane = new stdClass();
  $pane->pid = 'new-4b946c33-bd86-4382-b732-38f42f718b66';
  $pane->panel = 'rightsidebar';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 3,
            1 => 4,
            2 => 7,
            3 => 8,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'admin_title' => 'Member Link',
    'title' => '',
    'body' => '<p><a class="btn btn-lg" href="/learning-communities/2007/dashboard">Access the Healthcare Teams in Cancer Care Delivery Members Only Section</a></p>',
    'format' => 'full_html',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'member-link',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '4b946c33-bd86-4382-b732-38f42f718b66';
  $display->content['new-4b946c33-bd86-4382-b732-38f42f718b66'] = $pane;
  $display->panels['rightsidebar'][1] = 'new-4b946c33-bd86-4382-b732-38f42f718b66';
  $pane = new stdClass();
  $pane->pid = 'new-18d4d385-f67f-4b95-9399-d18f2977602a';
  $pane->panel = 'rightsidebar';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'title - The Learning Communities',
    'title' => '',
    'body' => '<h2 class="pane-title">The Learning Communities</h2>',
    'format' => 'full_html',
    'substitute' => TRUE,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '18d4d385-f67f-4b95-9399-d18f2977602a';
  $display->content['new-18d4d385-f67f-4b95-9399-d18f2977602a'] = $pane;
  $display->panels['rightsidebar'][2] = 'new-18d4d385-f67f-4b95-9399-d18f2977602a';
  $pane = new stdClass();
  $pane->pid = 'new-4d131f2f-f31b-4335-a07e-a67e2c06b39a';
  $pane->panel = 'rightsidebar';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-the-learning-communities';
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
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'sidebar-box',
  );
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '4d131f2f-f31b-4335-a07e-a67e2c06b39a';
  $display->content['new-4d131f2f-f31b-4335-a07e-a67e2c06b39a'] = $pane;
  $display->panels['rightsidebar'][3] = 'new-4d131f2f-f31b-4335-a07e-a67e2c06b39a';
  $pane = new stdClass();
  $pane->pid = 'new-e7e65725-0f47-4630-b654-8e82cf45327b';
  $pane->panel = 'rightsidebar';
  $pane->type = 'block';
  $pane->subtype = 'block-7';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'About the R2R Learning Communities',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = 'e7e65725-0f47-4630-b654-8e82cf45327b';
  $display->content['new-e7e65725-0f47-4630-b654-8e82cf45327b'] = $pane;
  $display->panels['rightsidebar'][4] = 'new-e7e65725-0f47-4630-b654-8e82cf45327b';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-6ccd6840-5cc0-4084-840e-ede6f8d46c5c';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['Learning_Communties'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'about_page';
  $page->task = 'page';
  $page->admin_title = 'About Page';
  $page->admin_description = 'The About page contains information about Research to Reality.';
  $page->path = 'about';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_about_page__panel_context_8eb10f9d-bdf4-44bd-a352-f98b232710dd';
  $handler->task = 'page';
  $handler->subtask = 'about_page';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'About Tab ',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'about',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'About Research to Reality',
    'panels_breadcrumbs_paths' => '<none>',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'right-sidebar';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'maincontent' => NULL,
      'rightsidebar' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'About Research to Reality';
  $display->uuid = '14a82a2e-84d1-44b8-b2ba-5eb5a6c824d7';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_about_page__panel_context_8eb10f9d-bdf4-44bd-a352-f98b232710dd';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-4d9b3ac5-d601-4b7a-8398-45a61e776087';
  $pane->panel = 'maincontent';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'title' => '',
    'body' => '<p><b>Welcome to the Research to Reality Community!</b> <a href="/home">ResearchtoReality.cancer.gov</a> is an online community of practice designed to bring together cancer control practitioners and researchers to discuss moving evidence-based programs into practice.&nbsp; Developed and supported by the <a href="http://www.cancer.gov/" target="_blank">National Cancer Institute</a> (NCI), this community is both an information resource and a forum where members can connect and collaborate with other public health professionals to ask questions, discuss ideas and solutions, share useful resources and tools, and participate in cyber-seminars and other events.</p><p><a href="/home">ResearchtoReality.cancer.gov</a> was developed in response to <a href="http://ccplanet.cancer.gov/" target="_blank">Cancer Control P.L.A.N.E.T.</a> users\' need to have a better, timelier way to engage their colleagues and share experiences. We invite you to join the dialogue through several interactive features:</p><h2 class="about-sections"><a href="/discussions/">Discussions</a></h2><p>Start your own discussion threads, contribute to discussions already in progress, or search all discussions to find a specific topic of interest. You can also subsribe to discussions that are most relevant to you.</p><h2 class="about-sections"><a href="/cyber-seminars">Cyber Seminars</a></h2><p>Register for upcoming presentations and view the archive of past presentations. Each cyber-seminar includes a presentation summary, learning objectives, speaker bio\'s, links to published articles, and other helpful resources and tools.</p><h2 class="about-sections"><a href="/mentorship">Mentorship Program</a></h2><p>Read the stories of the six mentees participating in the pilot NCI R2R Mentorship Program as they share their experiences in implementing an evidence-based intervention in their communities and engage with the pairs through comments and discussion. You can also subscribe to pairs\' stories and receive email updates so you can easily follow their progress from month to month.</p><h2 class="about-sections"><a href="/featured-partners">Featured R2R Partners</a></h2><p>Visit this page to learn more about research and program interests of other R2R members, read personal stories of successes and challenges with moving research into practice, and connect and share ideas through ongoing discussion forums. R2R community members will be featured on the site throughout the year, and will change frequently.</p><h2 class="about-sections"><a href="/events">Events</a></h2><p>Browse an inventory of events related to moving cancer control research into practice. These events include upcoming cyber-seminars, webinars, conferences, meetings, and training opportunities. Community members have the opportunity to submit relevant events for inclusion on the calendar.</p><h2>Why become a member?</h2><p>By joining the community, you can:</p><ul><li>Actively participate in discussions and follow conversations most relevant to your work.</li><li>Create a user profile and connect with others who share similar interests.</li><li>Submit relevant meetings, seminars, and conferences to the events calendar.</li><li>Follow the progress of R2R mentor-mentee pairs, ask questions, and learn from their experience.</li><li>Sign up for email notifications to stay connected and learn about new activity on the site.</li></ul><p>Although membership is highly encouraged, you do not have to sign up to benefit from the expertise and resources available on the site. You can still read discussion threads, register for upcoming cyber-seminars, and check out the featured community partners. <b>Please note</b>, however, that you will need to sign up to contribute to the site through discussions, event submissions, etc.</p><h2>Interested? Join Now.</h2><p><b>Joining is quick and easy!</b> Simply <a href="/user/register">sign up</a> and provide us with your name, degrees and/or credentials, and professional email address. You also have the opportunity to share more about the work that you do by providing a professional biography, organizational affiliation, and a photo. We encourage you to take a few minutes to fill out your profile so other community members can get to know you and your work. The information you provide will only be used by R2R Program Team staff to contact you about matters that relate to site content.</p><div><a class="btn btn-sm" href="/user/register">Sign Up</a></div><p>&nbsp;</p><h2>Stay Connected</h2><p>Registered members can keep up with new content on R2R by signing-up for our RSS feed and email notifications. Subscribing is quick and easy! Simply click on the green “Subscribe” buttons found throughout the site to select specific content you would like to follow.</p><p>Use R2R notifications to:</p><ul><li>Keep up with discussions that are of interest to you.</li><li>Receive announcements on upcoming cyber-seminars.</li><li>Follow the stories and progress of participants in the R2R Mentorship Program.</li><li>Learn when new featured community members/partners are posted, and join them in a discussion.</li><li>Be the first to know when new events are added to the R2R calendar.</li></ul><p>You can unsubscribe at any time, and can set preferences for how frequently you receive information (options are: immediately, daily, and weekly). Just click the “Manage Subscriptions” button on your profile page to review and edit your settings.</p><p>Registered members can also keep up with new content by subscribing to RSS feed located in the recent activity box on the homepage.</p><!--<div><a class="btn btn-sm" href="/newsletter/subscriptions">Sign Up</a></div><br>--><h2>R2R Program Team</h2><p>NCI staff manages and contributes to the site by providing information on upcoming cyber-seminars, moderating discussions on relevant and timely topics, and sharing new resources and tools. However, most of the content on the portal is user generated with the ultimate goal of forming a self-sustaining and vibrant community dialogue.</p><div class="team-members-vertical-center"><div class="user-photo"><div class="user-picture"><img alt="Margaret Farrell" src="/sites/default/files/styles/user_pictures_140x140/public/picture-20.jpg?itok=_aDBjQMs"></div></div><div class="team-members-info"><p><a href="/users/margaretfarrell">Margaret Farrell, RD, MPH</a></p><p>Community Manager</p><p>NCI, Division of Cancer Control and Population Sciences</p></div></div><p>&nbsp;</p><div class="team-members-vertical-center"><div class="user-photo"><div class="user-picture"><img alt="Jordan Tomkins" src="/sites/default/files/jt.jpg"></div></div><div class="team-members-info"><p><a href="/users/jordan.tompkinsnih.gov">Jordan Tompkins, MAA</a></p><p>Chief Engagement Officer, Research to Reality</p><p>NCI, Division of Cancer Control and Population Sciences</p></div></div><p>&nbsp;</p><div class="team-members-vertical-center"><div class="user-photo"><div class="user-picture"><img alt="Cynthia Vinson" src="/sites/default/files/cv.jpg"></div></div><div class="team-members-info"><p><a href="/users/cvinson">Cynthia Vinson PhD, MPA</a></p><p>Community Manager: <a href="https://researchtoreality.cancer.gov/learning-communities/hpv">HPV Vaccine Learning Community</a>; <a href="https://researchtoreality.cancer.gov/learning-communities/ccchpv">CCC-HPV Workgroup Learning Community</a></p><p>NCI, Division of Cancer Control and Population Sciences</p></div></div><p>&nbsp;</p><div class="team-members-vertical-center"><div class="user-photo"><div class="user-picture"><img alt="Quarlis" src="/sites/default/files/quarlis.jpg"></div></div><div class="team-members-info"><p><a href="/users/sheurtin">Suzanne Heurtin-Roberts, PhD, MSW</a></p><p>Community Manager: <a href="https://researchtoreality.cancer.gov/learning-communities/qualris">QUALRIS Learning Community</a>; <a href="https://researchtoreality.cancer.gov/learning-communities/mohr">My Own Health Record Learning Community</a></p><p>NCI, Division of Cancer Control and Population Sciences</p></div></div><p>&nbsp;</p>',
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
  $pane->uuid = '4d9b3ac5-d601-4b7a-8398-45a61e776087';
  $display->content['new-4d9b3ac5-d601-4b7a-8398-45a61e776087'] = $pane;
  $display->panels['maincontent'][0] = 'new-4d9b3ac5-d601-4b7a-8398-45a61e776087';
  $pane = new stdClass();
  $pane->pid = 'new-f0b92cdf-0f10-4c0f-a9e1-bd5dc85041ad';
  $pane->panel = 'rightsidebar';
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
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'about-contact',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'f0b92cdf-0f10-4c0f-a9e1-bd5dc85041ad';
  $display->content['new-f0b92cdf-0f10-4c0f-a9e1-bd5dc85041ad'] = $pane;
  $display->panels['rightsidebar'][0] = 'new-f0b92cdf-0f10-4c0f-a9e1-bd5dc85041ad';
  $pane = new stdClass();
  $pane->pid = 'new-52c013c7-cfc4-4b26-890a-fdb41c00c5d4';
  $pane->panel = 'rightsidebar';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Comment Policy',
    'title' => 'Comment Policy',
    'body' => '<div class="sidebar-box"><p>Materials posted on this site are moderated by NCI staff. Comments will be shared in "real time" to encourage the continuous exchange of ideas, but will be reviewed after posting to ensure appropriateness. We expect all community members to treat each other with respect. We will remove comments that:</p><ul><li>Are clearly off topic.</li><li>Contain personal information such as phone numbers or email addresses.</li><li>Contain vulgar, profane, or abusive language; personal attacks of any kind; inappropriate religious, sexual, political, or racial references; unsupported accusations.</li><li>Endorse commercial products, services or entities.</li><li>Endorse political parties, candidates, or groups.</li><li>Infringe on copyrights.</li><li>Solicit funds.</li></ul><p>For more information, please review NCI\'s <a href="http://www.cancer.gov/policies/comments" target="_blank">comment policy</a>.</p></div><p>&nbsp;</p>',
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
  $pane->uuid = '52c013c7-cfc4-4b26-890a-fdb41c00c5d4';
  $display->content['new-52c013c7-cfc4-4b26-890a-fdb41c00c5d4'] = $pane;
  $display->panels['rightsidebar'][1] = 'new-52c013c7-cfc4-4b26-890a-fdb41c00c5d4';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_about_page__panel_context_d5bbff1e-f856-4217-b549-376522e07d0d';
  $handler->task = 'page';
  $handler->subtask = 'about_page';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'Policies',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'about/policies',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'About
Research to Reality Policies',
    'panels_breadcrumbs_paths' => 'about
<none>',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'cyberseminar_node';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Research to Reality Policies';
  $display->uuid = 'e23e7c77-83a1-486d-acb6-635fc0faed23';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_about_page__panel_context_d5bbff1e-f856-4217-b549-376522e07d0d';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-45ac883c-51e4-4755-86ed-eb94637e1d05';
  $pane->panel = 'left';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'title' => '',
    'body' => '<h2>Privacy</h2>
<p>This site does not gather personal information about you other than what you choose to post yourself. The National Cancer Institute (NCI) will not share or sell any personal information obtained from users with any other organization or government agency except as required by law.</p>
<p>The information you are required to provide for registration purposes, such as your name, email address, and organization, will only be used by R2R Program Team staff to contact you about matters that relate to site content.&nbsp; Please see the <a href="http://www.cancer.gov/global/web/policies/page2">NCI Privacy and Security Policy </a>for more information.</p>

<h2>Linking and Disclaimer of Endorsement</h2>
<p>Individuals or organizations wishing to link to the Research to Reality Community should direct their link to <a href="http://researchtoreality.cancer.gov" title="http://researchtoreality.cancer.gov">http://researchtoreality.cancer.gov</a>. If a description is to be provided with the link, NCI would prefer the following wording: Research to Reality (<a href="http://researchtoreality.cancer.gov" title="http://researchtoreality.cancer.gov">http://researchtoreality.cancer.gov</a>) is an online community of practice that engages cancer control practitioners, policy makers, and researchers in an ongoing dialogue around experiences moving research to practice.</p>
<p>Some pages on the Research to Reality site may contain links to external Web sites. These links are provided for convenience and informational purposes. When you select a link to an outside Web site, you are leaving this site and are subject to the privacy and security policies of the owners/sponsors of the outside Web site. NCI and this site do not control or guarantee the accuracy, relevance, timeliness, or completeness of information contained on a linked Web site.</p>
<p>NCI and this site do not endorse the organizations sponsoring linked Web sites, and we do not endorse the views they express or the products/services they offer.</p>
<p>NCI and this site do not guarantee that outside Web sites comply with Section 508 (Accessibility Requirements) of the Rehabilitation Act.</p>
<p>This site’s posted comments, resources, and videos do not necessarily reflect those of the National Cancer Institute or of the federal government.</p>

<h2>Copyright</h2>
<p>NCI and this site cannot authorize the use of copyrighted materials contained in linked Web sites. Users must request such authorization from the sponsor of the linked Web site.</p>
<p>Those who provide comments are responsible for the copyright of the text they provide.</p>
 ',
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
  $pane->uuid = '45ac883c-51e4-4755-86ed-eb94637e1d05';
  $display->content['new-45ac883c-51e4-4755-86ed-eb94637e1d05'] = $pane;
  $display->panels['left'][0] = 'new-45ac883c-51e4-4755-86ed-eb94637e1d05';
  $pane = new stdClass();
  $pane->pid = 'new-be04062e-0f19-4b9a-9d0f-e72d13b7d594';
  $pane->panel = 'right';
  $pane->type = 'block';
  $pane->subtype = 'block-8';
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
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'about-contact',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'be04062e-0f19-4b9a-9d0f-e72d13b7d594';
  $display->content['new-be04062e-0f19-4b9a-9d0f-e72d13b7d594'] = $pane;
  $display->panels['right'][0] = 'new-be04062e-0f19-4b9a-9d0f-e72d13b7d594';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_about_page__panel_context_9365ce05-3de7-4d04-90fa-7b5b9c55d0ae';
  $handler->task = 'page';
  $handler->subtask = 'about_page';
  $handler->handler = 'panel_context';
  $handler->weight = 2;
  $handler->conf = array(
    'title' => 'Accessibility',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'about/accessibility',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'About
Accessibility',
    'panels_breadcrumbs_paths' => 'about
<none>',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'cyberseminar_node';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Accessibility';
  $display->uuid = '4ea089fa-c898-419a-b2c1-b4c93b5e89dd';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_about_page__panel_context_9365ce05-3de7-4d04-90fa-7b5b9c55d0ae';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-e742faa7-da77-4577-b060-18ee8bb60dc0';
  $pane->panel = 'left';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'title' => '',
    'body' => '<p>The National Cancer Institute (NCI) is committed to providing access to all individuals–disabled or not–who are seeking information on its Web site. To provide this information, the NCI Web site has been designed to comply with Section 508 of the Rehabilitation Act (as amended).</p>
<p>Section 508 requires that all individuals with disabilities (whether they are federal government employees or members of the general public) have access to and use of information and data comparable to that provided to individuals without disabilities, unless an undue burden would be imposed.</p>
<p>Any individual using assistive technology (such as a screen reader, Braille reader, etc.) who experiences difficulty in accessing information on ResearchtoReality.cancer.gov, should send an e-mail to <a href="mailto:ResearchtoReality@mail.nih.gov">ResearchtoReality@mail.nih.gov</a> or call NCI’s Office of Communications at 301-496-9096 for assistance. The nature of the accessibility problem and contact information should be included in any e-mail or telephone message. If the accessibility problem involves a particular Web page, including the URL (Web address) of the page would be helpful. A member of the NCI Web site staff will contact individuals with accessibility problems as soon as possible to assist them and to provide them the information sought.</p>
',
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
  $pane->uuid = 'e742faa7-da77-4577-b060-18ee8bb60dc0';
  $display->content['new-e742faa7-da77-4577-b060-18ee8bb60dc0'] = $pane;
  $display->panels['left'][0] = 'new-e742faa7-da77-4577-b060-18ee8bb60dc0';
  $pane = new stdClass();
  $pane->pid = 'new-4edb7d23-408d-4074-be3a-04b1f4529737';
  $pane->panel = 'right';
  $pane->type = 'block';
  $pane->subtype = 'block-8';
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
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'about-contact',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '4edb7d23-408d-4074-be3a-04b1f4529737';
  $display->content['new-4edb7d23-408d-4074-be3a-04b1f4529737'] = $pane;
  $display->panels['right'][0] = 'new-4edb7d23-408d-4074-be3a-04b1f4529737';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_about_page__panel_context_1e403e4c-b21e-45d8-aa83-f9c24ab1018c';
  $handler->task = 'page';
  $handler->subtask = 'about_page';
  $handler->handler = 'panel_context';
  $handler->weight = 3;
  $handler->conf = array(
    'title' => 'FOIA',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'about/FOIA',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'About
Freedom of Information Act',
    'panels_breadcrumbs_paths' => 'about
<none>',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'cyberseminar_node';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Freedom of Information Act';
  $display->uuid = 'b30ae636-cfaa-4032-b32e-b028c275d4a8';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_about_page__panel_context_1e403e4c-b21e-45d8-aa83-f9c24ab1018c';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-ff558a3d-314e-47e2-beb6-d069a0e445ad';
  $pane->panel = 'left';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'title' => '',
    'body' => '<p><a href="http://www.nih.gov/icd/od/foia/efoia.htm">The Freedom of Information Act (FOIA), 5 U.S.C. 552</a> provides individuals with a right to access information in the possession of the U.S. federal government. The government, however, may withhold information covered by 9 exemptions and 3 exclusions contained in the Act.</p>
<p>Before submitting a request under FOIA, individuals should try to determine whether the information sought is already in the public domain and whether it is or may be held by the National Cancer Institute (NCI). NCI has a wealth of information available in both published and electronic formats. A search of NCI’s Web Site, <a href="http://www.cancer.gov" title="www.cancer.gov">www.cancer.gov</a>, can be helpful in locating information and lists of available publications.</p>
<p>If data produced under an NCI grant are sought, the data will be released under FOIA only if specific requirements are met. It is important to note that FOIA allows agencies to recover part of the costs associated with responding to requests. <a href="http://www.nih.gov/icd/od/foia/cfr45.htm#cfrfees">Department of Health and Human Services regulations</a> describe specific rules for fees, requesting a fee waiver, and reducing fees.</p>
<p>Questions about FOIA and requests for information held by NCI can be directed either to the <a href="http://legislative.cancer.gov/foia">NCI FOIA Office</a> or to the <a href="http://www.nih.gov/icd/od/foia">National Institutes of Health (NIH) FOIA Office.</a></p>
<p>The NCI FOIA Office is located at:</p>
<p>Building 31, Room 10A48<br>31 Center Drive<br>Bethesda, MD 20892<br>Telephone: 301-496-2999<br>Fax number: 301-435-2931</p>
',
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
  $pane->uuid = 'ff558a3d-314e-47e2-beb6-d069a0e445ad';
  $display->content['new-ff558a3d-314e-47e2-beb6-d069a0e445ad'] = $pane;
  $display->panels['left'][0] = 'new-ff558a3d-314e-47e2-beb6-d069a0e445ad';
  $pane = new stdClass();
  $pane->pid = 'new-e22820db-a6cf-4522-9412-9602f0c0e57a';
  $pane->panel = 'right';
  $pane->type = 'block';
  $pane->subtype = 'block-8';
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
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'about-contact',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'e22820db-a6cf-4522-9412-9602f0c0e57a';
  $display->content['new-e22820db-a6cf-4522-9412-9602f0c0e57a'] = $pane;
  $display->panels['right'][0] = 'new-e22820db-a6cf-4522-9412-9602f0c0e57a';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_about_page__panel_context_2e51715e-70be-4bcb-bb59-33c56e119e6a';
  $handler->task = 'page';
  $handler->subtask = 'about_page';
  $handler->handler = 'panel_context';
  $handler->weight = 4;
  $handler->conf = array(
    'title' => 'Viewing Files',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'about/viewing',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'About
Viewing Files',
    'panels_breadcrumbs_paths' => 'about
<none>',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'right-sidebar';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Viewing Files';
  $display->uuid = '57eb1ee4-bc58-4529-bc03-8742b7b32fc2';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_about_page__panel_context_2e51715e-70be-4bcb-bb59-33c56e119e6a';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-e74a6c73-2114-4d4b-9604-6f390585ec27';
  $pane->panel = 'maincontent';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'title' => '',
    'body' => '<p>In addition to standard HTML Web pages, our Web site contains files in other formats. You may need additional software or browser plug-ins to view some of these files. The following list shows each format along with links to the corresponding freely available plug-ins or viewers.</p>

<h2>Documents</h2>
<p><a href="http://www.adobe.com/products/acrobat/readstep2.html" target="_blank"><img alt="Adobe Acrobat Reader" src="/sites/all/themes/r2r_zen/images/icons/pdf_icon.png"></a><strong> Adobe Acrobat Reader</strong> (.pdf)<br>
If you do not already have Adobe Acrobat, you can <a href="http://www.adobe.com/products/acrobat/readstep2.html" target="_blank">download Acrobat Reader for free</a> (Windows and Macintosh).</p>

<p><a href="http://www.microsoft.com/downloads/details.aspx?FamilyID=3657CE88-7CFA-457A-9AEC-F4F827F20CAC&amp;DisplayLang=en" target="_blank"><img alt="Microsoft Word" src="/sites/all/themes/r2r_zen/images/icons/word_icon.png"></a><strong> Microsoft Word</strong> (.doc)<br>
If you do not already have Microsoft Word, you can <a href="http://www.microsoft.com/downloads/details.aspx?FamilyID=3657CE88-7CFA-457A-9AEC-F4F827F20CAC&amp;DisplayLang=en" target="_blank">download Word Viewer for free</a> (Windows).</p>

<p><a href="http://www.microsoft.com/downloads/details.aspx?displaylang=en&amp;FamilyID=1cd6acf9-ce06-4e1c-8dcf-f33f669dbc3a" target="_blank"><img alt="Microsoft Excel" src="/sites/all/themes/r2r_zen/images/icons/excel_icon.png"></a><strong> Microsoft Excel</strong> (.xls)<br>
If you do not already have Microsoft Excel, you can <a href="http://www.microsoft.com/downloads/details.aspx?displaylang=en&amp;FamilyID=1cd6acf9-ce06-4e1c-8dcf-f33f669dbc3a" target="_blank">download Excel Viewer for free</a> (Windows).</p>

<p><a href="http://www.microsoft.com/downloads/details.aspx?displaylang=en&amp;FamilyID=048dc840-14e1-467d-8dca-19d2a8fd7485" target="_blank"><img alt="Microsoft PowerPoint" src="/sites/all/themes/r2r_zen/images/icons/\\ppt_icon.png"></a><strong> Microsoft PowerPoint</strong> (.ppt)<br>
If you do not already have Microsoft PowerPoint, you can <a href="http://www.microsoft.com/downloads/details.aspx?displaylang=en&amp;FamilyID=048dc840-14e1-467d-8dca-19d2a8fd7485" target="_blank">download PowerPoint Viewer for free</a> (Windows).</p>

<h2>Multimedia</h2>

<p><a href="http://www.microsoft.com/downloads/details.aspx?FamilyID=1d224714-e238-4e45-8668-5166114010ca&amp;DisplayLang=en" target="_blank"><img alt="Microsoft Windows Media Player" src="/sites/all/themes/r2r_zen/images/icons/wmp_icon.png"></a><strong> Microsoft Windows Media Player</strong> (.wmv, .avi, .mpg, .mpeg, .mp3, .mp4, .m4v, .m4a)<br>
If you do not already have Windows Media, you can download Windows Media Player or Windows Media Components for Macintosh for free:</p>

<ul>
  <li><a href="http://www.microsoft.com/downloads/details.aspx?FamilyID=1d224714-e238-4e45-8668-5166114010ca&amp;DisplayLang=en" target="_blank">For Windows</a></li>
  <li><a href="http://www.microsoft.com/downloads/details.aspx?FamilyId=915D874D-D747-4180-A400-5F06B1B5E559&amp;displaylang=en" target="_blank">For Macintosh</a></li>
</ul>

<p><a href="http://www.apple.com/quicktime/download/" target="_blank"><img alt="Apple QuickTime" src="/sites/all/themes/r2r_zen/images/icons/quicktime_icon.png"></a><strong> Apple QuickTime</strong> (.mov, .mpg, .mpeg, .aif, .mp3, .m4p, .m4v, .m4a)<br>
If you do not already have QuickTime, you can <a href="http://www.apple.com/quicktime/download/" target="_blank">download QuickTime Player for free</a> (Windows and Macintosh).</p>

<p><a href="http://www.real.com/realplayer.html" target="_blank"><img alt="RealPlayer" src="/sites/all/themes/r2r_zen/images/icons/realplayer_icon.png"></a><strong> RealPlayer</strong> (.ra, .rm, .ram)<br>
If you do not already have RealPlayer, you can download RealPlayer for free:</p>

<ul>
  <li><a href="http://www.real.com/realplayer.html" target="_blank">For Windows</a></li>
  <li><a href="https://order.real.com/pt/order.html?country=US&amp;language=EN&amp;mppi=0&amp;mppos_list=0&amp;mpst=0&amp;ppath=cpmacpl060204a&amp;pageregion=player_button&amp;pcode=rn&amp;opage=sp_os_mac&amp;src=realplayer_8020,sp_os_mac" target="_blank">For Macintosh</a></li>
</ul>

<p><a href="http://www.adobe.com/go/getflashplayer" target="_blank"><img alt="Adobe Flash Player" src="/sites/all/themes/r2r_zen/images/icons/flash_icon.png"> </a><strong> Adobe Flash Player</strong> (.swf)<br>
If you do not already have Adobe Flash, you can <a href="http://www.adobe.com/go/getflashplayer" target="_blank">download Adobe Flash Player for free</a> (Windows and Macintosh).</p>

<h2>Compressed Files</h2>

<p><a href="http://www.download.com/File-Compression/3150-2250_4-0.html" target="_blank"><img alt="Zip Compressed Files" src="/sites/all/themes/r2r_zen/images/icons/zip_icon.png"></a><strong> Zip Compressed Files</strong><br>
Windows XP and Windows Vista have a zip compression utility built into the operating system. If you are using a Macintosh or running an older Windows operating system and do not already have a compression program such as WinZip, you can download a free <a href="http://www.winzip.com/index.htm" target="_blank">21-day trial version of WinZip</a> (Windows) or download a similar compression program:</p>

<ul>
  <li><a href="http://www.download.com/File-Compression/3150-2250_4-0.html" target="_blank">For Windows</a></li>
  <li><a href="http://www.stuffit.com/mac/expander/index.html" target="_blank">For Macintosh</a></li>
</ul>',
    'format' => 'full_html',
    'substitute' => TRUE,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'viewing-files',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'e74a6c73-2114-4d4b-9604-6f390585ec27';
  $display->content['new-e74a6c73-2114-4d4b-9604-6f390585ec27'] = $pane;
  $display->panels['maincontent'][0] = 'new-e74a6c73-2114-4d4b-9604-6f390585ec27';
  $pane = new stdClass();
  $pane->pid = 'new-b6f68891-0aa4-4335-a866-5a97d1b381a7';
  $pane->panel = 'rightsidebar';
  $pane->type = 'block';
  $pane->subtype = 'block-8';
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
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'about-contact',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'b6f68891-0aa4-4335-a866-5a97d1b381a7';
  $display->content['new-b6f68891-0aa4-4335-a866-5a97d1b381a7'] = $pane;
  $display->panels['rightsidebar'][0] = 'new-b6f68891-0aa4-4335-a866-5a97d1b381a7';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['about_page'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'about_the_r2r_mentorship_program';
  $page->task = 'page';
  $page->admin_title = 'About the R2R Mentorship Program';
  $page->admin_description = '';
  $page->path = 'mentorship/about';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_about_the_r2r_mentorship_program__panel_context_e97e79af-5670-4c38-8898-960af0140ca1';
  $handler->task = 'page';
  $handler->subtask = 'about_the_r2r_mentorship_program';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'right-sidebar';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
      'maincontent' => NULL,
      'rightsidebar' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'About R2R Mentorship Program';
  $display->uuid = '8a1cf792-0375-425c-a5ef-a0b0ff6491ce';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_about_the_r2r_mentorship_program__panel_context_e97e79af-5670-4c38-8898-960af0140ca1';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-51e2f224-21ae-485e-8bda-8cc77e07a18a';
  $pane->panel = 'maincontent';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Top',
    'title' => '',
    'body' => '<p>Between September 2011 and February 2013, the NCI implemented a pilot mentorship program with 6 mentee-mentor pairs as part of Research to Reality (R2R). This pilot has concluded and is currently being evaluated. With the conclusion of this pilot, the mentees are no longer updating these posts with new monthly updates, but we encourage you to read through the mentee stories to learn more about each pair\'s project and engage in a discussion with the broader R2R community on these topics.</p>',
    'format' => 'full_html',
    'substitute' => TRUE,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
    'style' => 'default',
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'jumbotron',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '51e2f224-21ae-485e-8bda-8cc77e07a18a';
  $display->content['new-51e2f224-21ae-485e-8bda-8cc77e07a18a'] = $pane;
  $display->panels['maincontent'][0] = 'new-51e2f224-21ae-485e-8bda-8cc77e07a18a';
  $pane = new stdClass();
  $pane->pid = 'new-9566c425-766a-4e4d-8637-2047644f30fc';
  $pane->panel = 'maincontent';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'About the R2R Mentorship Program',
    'title' => '',
    'body' => '<p><b>The Research to Reality (R2R) Mentorship Program</b> is a pilot program by the National Cancer Institute’s (NCI) Office of Communications and Education and the Division of Cancer Control and Population Sciences.</p><p>The purpose of the Program is to help build the capacity of cancer control practitioners to effectively navigate the complex, “real world” context in which evidence-based decision making occurs. Up to six mentees will be matched with experienced public health professionals. Mentees, with guidance from their mentor, will work on a year-long cancer control and prevention project relevant to their current jobs to learn and apply the skills and knowledge of evidence-based public health (EBPH). In addition to the mentor, participants will receive ongoing technical assistance and training, virtually and in-person, from the NCI. Mentorship and project components will last for 12-months with an additional 6-month period for evaluation and deliverable-completion. All program activities will begin in September 2011.</p><p>&nbsp;</p><div class="table-responsive"><table class="table table-striped"><tbody><tr><th><b>Mentee</b></th><th><b>Mentor</b></th><th><b>Project Topic</b></th></tr><tr><td><b>Charlene Cariou</b>, BS, CHES, MPH (c)<br>St. Luke\'s Mountain State Tumor Institute (ID)</td><td><b>Hope Krebill</b>, RN, BSN, MSW<br>Midwest Cancer Alliance (KS)</td><td>Charlene will be implementing a sun safety education and skin cancer prevention intervention in rural Idaho.</td></tr><tr><td><b>Michael Celestin Jr</b>, MA, CHES<br>Louisiana State University Health Sciences Center, School of Public Health Tobacco Control Initiative (LA)</td><td><b>Alton Hart</b>, MD, MPH<br>Virginia Commonwealth University (VCU), Massey Cancer Center and VCU Center on Health Disparities (VA)</td><td>Michael will be working on a program to increase the use of the Public Health Service (PHS) tobacco guidelines by urologists in state hospitals in Louisiana.</td></tr><tr><td><b>Kiameesha Evans</b>, MPH, DrPH (c)<br>The Cancer Institute of New Jersey (NJ)</td><td><b>Evelyn Gonzalez</b>, MA<br>Fox Chase Cancer Center, Community Programs and Health Communication &amp; Disparities (PA)</td><td>Kiameesha will be working on the implementation and evaluation of the Body and Soul prorgam in several New Jersey churches.</td></tr><tr><td><b>Venice Haynes</b>, MSPH<br>Morehouse School of Medicine (GA)</td><td><b>Cam Escoffery</b>, PhD, MPH, CHES<br>Rollins School of Public Health, Emory Prevention Research Center (GA)</td><td>Venice will be partnering with a community coalition on developing an implementation and evaluation plan for the Witness Project (breast and cervical cancer intervention) in Atlanta, GA.</td></tr><tr><td><b>Angela McFall</b>, MS<br>Michigan Department of Community Health (MI)</td><td><b>June Ryan</b>, MPA<br>Nebraska Department of Health and Human Services (NE)</td><td>Angela will work with health care providers and insurance companies to implement a client reminder program for colorectal cancer screening in Michigan.</td></tr><tr><td><b>Lisa Troyer</b>, BA<br>Montana Department of Public Health and Human Services, Cancer Control Program (MT)</td><td><b>Eugene Lengerich</b>, VMD, MPH<br>Penn State University, Hershey Cancer Center (PA)</td><td>Lisa will be working with insurance providers and small group association plans to adapt and implement a colorectal cancer screening and integrated messaging program to the insured population in rural Montana</td></tr></tbody></table></div>',
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
  $pane->uuid = '9566c425-766a-4e4d-8637-2047644f30fc';
  $display->content['new-9566c425-766a-4e4d-8637-2047644f30fc'] = $pane;
  $display->panels['maincontent'][1] = 'new-9566c425-766a-4e4d-8637-2047644f30fc';
  $pane = new stdClass();
  $pane->pid = 'new-bfbda318-3cdb-40a5-9daf-83e45435f830';
  $pane->panel = 'rightsidebar';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'The Mentor/Mentee Pairs',
    'title' => '',
    'body' => '<h2 class="pane-title">The Mentor/Mentee Pairs</h2>',
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
  $pane->uuid = 'bfbda318-3cdb-40a5-9daf-83e45435f830';
  $display->content['new-bfbda318-3cdb-40a5-9daf-83e45435f830'] = $pane;
  $display->panels['rightsidebar'][0] = 'new-bfbda318-3cdb-40a5-9daf-83e45435f830';
  $pane = new stdClass();
  $pane->pid = 'new-e92fbe92-c949-49a8-962d-df25aeee6f06';
  $pane->panel = 'rightsidebar';
  $pane->type = 'views';
  $pane->subtype = 'mentorship';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '10',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'default',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
    'style' => 'default',
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'sidebar-box mentor-pairs',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'e92fbe92-c949-49a8-962d-df25aeee6f06';
  $display->content['new-e92fbe92-c949-49a8-962d-df25aeee6f06'] = $pane;
  $display->panels['rightsidebar'][1] = 'new-e92fbe92-c949-49a8-962d-df25aeee6f06';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-9566c425-766a-4e4d-8637-2047644f30fc';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['about_the_r2r_mentorship_program'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'contact';
  $page->task = 'page';
  $page->admin_title = 'Contact';
  $page->admin_description = '';
  $page->path = 'about/contact_us';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_contact__panel_context_419c363c-e1bd-4231-a996-7e3a4c550d88';
  $handler->task = 'page';
  $handler->subtask = 'contact';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'two_col_70_30';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Contact the Research to Reality Team';
  $display->uuid = 'e3f42a28-3430-4491-8a1e-6cffe2105bd1';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_contact__panel_context_419c363c-e1bd-4231-a996-7e3a4c550d88';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-da23d7ad-d676-4ae1-b1c2-2f917e270149';
  $pane->panel = 'left';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Contact Text',
    'title' => '',
    'body' => 'Thank you for visiting the Research to Reality Community of Practice. Your comments, questions and suggestions are appreciated and will be addressed by a member of the Research to Reality team. If your feedback or question would benefit other members, please consider posting it to Discussions (link to Discussions Index) instead of using this form.',
    'format' => 'filtered_html',
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
  $pane->uuid = 'da23d7ad-d676-4ae1-b1c2-2f917e270149';
  $display->content['new-da23d7ad-d676-4ae1-b1c2-2f917e270149'] = $pane;
  $display->panels['left'][0] = 'new-da23d7ad-d676-4ae1-b1c2-2f917e270149';
  $pane = new stdClass();
  $pane->pid = 'new-c6f2da96-d0d8-4824-83d6-31f56a798715';
  $pane->panel = 'left';
  $pane->type = 'contact';
  $pane->subtype = 'contact';
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'c6f2da96-d0d8-4824-83d6-31f56a798715';
  $display->content['new-c6f2da96-d0d8-4824-83d6-31f56a798715'] = $pane;
  $display->panels['left'][1] = 'new-c6f2da96-d0d8-4824-83d6-31f56a798715';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-da23d7ad-d676-4ae1-b1c2-2f917e270149';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['contact'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'cyber_seminars';
  $page->task = 'page';
  $page->admin_title = 'Cyber Seminars';
  $page->admin_description = '';
  $page->path = 'cyber-seminars-old';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_cyber_seminars__panel_context_4c53e6ed-9f4a-442e-b325-f35a63a7ecdf';
  $handler->task = 'page';
  $handler->subtask = 'cyber_seminars';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Upcoming Cyber-Seminar Events',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'Cyber-Seminars',
    'panels_breadcrumbs_paths' => '<none>',
    'panels_breadcrumbs_home' => 1,
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'cyber-seminars',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'two_col_70_30';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Cyber-Seminars';
  $display->uuid = 'a18fb89e-6dad-4c2b-a6aa-585c49b83b4b';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_cyber_seminars__panel_context_4c53e6ed-9f4a-442e-b325-f35a63a7ecdf';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-d86a4ab1-1c66-4329-b764-cfb76bc49c0e';
  $pane->panel = 'left';
  $pane->type = 'views';
  $pane->subtype = 'cyber_seminar_upcoming';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '1',
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
  $pane->css = array(
    'css_id' => 'cyber-seminar-featured',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'd86a4ab1-1c66-4329-b764-cfb76bc49c0e';
  $display->content['new-d86a4ab1-1c66-4329-b764-cfb76bc49c0e'] = $pane;
  $display->panels['left'][0] = 'new-d86a4ab1-1c66-4329-b764-cfb76bc49c0e';
  $pane = new stdClass();
  $pane->pid = 'new-5af54755-d847-4ec5-877f-fff1b00578ea';
  $pane->panel = 'left';
  $pane->type = 'views';
  $pane->subtype = 'cyber_seminar_upcoming';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 1,
    'nodes_per_page' => '10',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block_1',
    'override_title' => 1,
    'override_title_text' => 'Recent Cyber-Seminars',
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
  $pane->uuid = '5af54755-d847-4ec5-877f-fff1b00578ea';
  $display->content['new-5af54755-d847-4ec5-877f-fff1b00578ea'] = $pane;
  $display->panels['left'][1] = 'new-5af54755-d847-4ec5-877f-fff1b00578ea';
  $pane = new stdClass();
  $pane->pid = 'new-6659d7c1-c137-44bb-a45d-28cb697026b1';
  $pane->panel = 'left';
  $pane->type = 'block';
  $pane->subtype = 'block-11';
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
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '6659d7c1-c137-44bb-a45d-28cb697026b1';
  $display->content['new-6659d7c1-c137-44bb-a45d-28cb697026b1'] = $pane;
  $display->panels['left'][2] = 'new-6659d7c1-c137-44bb-a45d-28cb697026b1';
  $pane = new stdClass();
  $pane->pid = 'new-2c8db419-e267-4283-8db7-4cf89a899a4c';
  $pane->panel = 'right';
  $pane->type = 'panels_mini';
  $pane->subtype = 'cyber_seminar_search';
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
  $pane->css = array(
    'css_id' => 'cyber-seminar-search',
    'css_class' => 'box fill-grey round-edge-all',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '2c8db419-e267-4283-8db7-4cf89a899a4c';
  $display->content['new-2c8db419-e267-4283-8db7-4cf89a899a4c'] = $pane;
  $display->panels['right'][0] = 'new-2c8db419-e267-4283-8db7-4cf89a899a4c';
  $pane = new stdClass();
  $pane->pid = 'new-13838e95-1d6d-4d3f-9c4d-bc7de25b20a1';
  $pane->panel = 'right';
  $pane->type = 'block';
  $pane->subtype = 'block-12';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Technical Requirements',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'technical-requirements',
    'css_class' => 'round-edge-all border-grey',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '13838e95-1d6d-4d3f-9c4d-bc7de25b20a1';
  $display->content['new-13838e95-1d6d-4d3f-9c4d-bc7de25b20a1'] = $pane;
  $display->panels['right'][1] = 'new-13838e95-1d6d-4d3f-9c4d-bc7de25b20a1';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_cyber_seminars__panel_context_6f2f2839-48de-409f-a43b-7f49e26481e8';
  $handler->task = 'page';
  $handler->subtask = 'cyber_seminars';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'Cyber-Seminar Archive',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'Cyber-Seminars',
    'panels_breadcrumbs_paths' => '<none>',
    'panels_breadcrumbs_home' => 1,
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'cyber-seminars/archive',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'two_col_70_30';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Cyber-Seminar Archives';
  $display->uuid = 'a18fb89e-6dad-4c2b-a6aa-585c49b83b4b';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_cyber_seminars__panel_context_6f2f2839-48de-409f-a43b-7f49e26481e8';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-5c2745f1-219c-4bac-8679-3b5151a3ed8b';
  $pane->panel = 'left';
  $pane->type = 'views';
  $pane->subtype = 'cyber_seminar_upcoming';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 1,
    'nodes_per_page' => '10',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block_3',
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
  $pane->uuid = '5c2745f1-219c-4bac-8679-3b5151a3ed8b';
  $display->content['new-5c2745f1-219c-4bac-8679-3b5151a3ed8b'] = $pane;
  $display->panels['left'][0] = 'new-5c2745f1-219c-4bac-8679-3b5151a3ed8b';
  $pane = new stdClass();
  $pane->pid = 'new-2c8db419-e267-4283-8db7-4cf89a899a4c';
  $pane->panel = 'right';
  $pane->type = 'panels_mini';
  $pane->subtype = 'cyber_seminar_search';
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
  $pane->css = array(
    'css_id' => 'cyber-seminar-search',
    'css_class' => 'box fill-grey round-edge-all',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '2c8db419-e267-4283-8db7-4cf89a899a4c';
  $display->content['new-2c8db419-e267-4283-8db7-4cf89a899a4c'] = $pane;
  $display->panels['right'][0] = 'new-2c8db419-e267-4283-8db7-4cf89a899a4c';
  $pane = new stdClass();
  $pane->pid = 'new-13838e95-1d6d-4d3f-9c4d-bc7de25b20a1';
  $pane->panel = 'right';
  $pane->type = 'block';
  $pane->subtype = 'block-12';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Technical Requirements',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'technical-requirements',
    'css_class' => 'round-edge-all border-grey',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '13838e95-1d6d-4d3f-9c4d-bc7de25b20a1';
  $display->content['new-13838e95-1d6d-4d3f-9c4d-bc7de25b20a1'] = $pane;
  $display->panels['right'][1] = 'new-13838e95-1d6d-4d3f-9c4d-bc7de25b20a1';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['cyber_seminars'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'discussions';
  $page->task = 'page';
  $page->admin_title = 'Discussions';
  $page->admin_description = '';
  $page->path = 'Discussions';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_discussions__panel';
  $handler->task = 'page';
  $handler->subtask = 'discussions';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(
      0 => array(
        'identifier' => 'User',
        'keyword' => 'user',
        'name' => 'user',
        'type' => 'current',
        'uid' => '',
        'id' => 1,
      ),
    ),
    'relationships' => array(),
    'name' => 'panel',
  );
  $display = new panels_display();
  $display->layout = 'single-column';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
      'maincontent' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Discussions';
  $display->uuid = '2bdfca1a-26aa-4c01-9fb7-1f9cedc61a76';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_discussions__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-8e139695-a12e-4138-ba95-3e811149100c';
  $pane->panel = 'maincontent';
  $pane->type = 'views';
  $pane->subtype = 'unpublished_discussions';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 1,
    'nodes_per_page' => '5',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block',
    'override_title' => 1,
    'override_title_text' => 'Your Unpublished Discussions',
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
  $pane->uuid = '8e139695-a12e-4138-ba95-3e811149100c';
  $display->content['new-8e139695-a12e-4138-ba95-3e811149100c'] = $pane;
  $display->panels['maincontent'][0] = 'new-8e139695-a12e-4138-ba95-3e811149100c';
  $pane = new stdClass();
  $pane->pid = 'new-2b2b9f5d-c6b5-4389-bbf2-34f7556123b4';
  $pane->panel = 'maincontent';
  $pane->type = 'views';
  $pane->subtype = 'unpublished_discussions';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 1,
    'nodes_per_page' => '5',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '2b2b9f5d-c6b5-4389-bbf2-34f7556123b4';
  $display->content['new-2b2b9f5d-c6b5-4389-bbf2-34f7556123b4'] = $pane;
  $display->panels['maincontent'][1] = 'new-2b2b9f5d-c6b5-4389-bbf2-34f7556123b4';
  $pane = new stdClass();
  $pane->pid = 'new-5234d0c6-84bd-4d8f-925d-2dd4fc26c952';
  $pane->panel = 'maincontent';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
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
        'not' => TRUE,
      ),
    ),
  );
  $pane->configuration = array(
    'admin_title' => '"Join" if not logged in',
    'title' => '',
    'body' => '<div class="join-start-discussion"><a class="btn btn-lg" href="/user">Join the Discussion</a></div>',
    'format' => 'raw_html',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'join-follow-start-links',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '5234d0c6-84bd-4d8f-925d-2dd4fc26c952';
  $display->content['new-5234d0c6-84bd-4d8f-925d-2dd4fc26c952'] = $pane;
  $display->panels['maincontent'][2] = 'new-5234d0c6-84bd-4d8f-925d-2dd4fc26c952';
  $pane = new stdClass();
  $pane->pid = 'new-72ed888d-d094-4f36-9663-70340e3f1d3c';
  $pane->panel = 'maincontent';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
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
    'logic' => 'or',
  );
  $pane->configuration = array(
    'admin_title' => '"Start a Discussion" if logged in',
    'title' => '',
    'body' => '<div class="join-start-discussion"><a class="btn btn-lg" href="/node/add/discussion">Start a Discussion</a></div>',
    'format' => 'raw_html',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'join-follow-start-links',
  );
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '72ed888d-d094-4f36-9663-70340e3f1d3c';
  $display->content['new-72ed888d-d094-4f36-9663-70340e3f1d3c'] = $pane;
  $display->panels['maincontent'][3] = 'new-72ed888d-d094-4f36-9663-70340e3f1d3c';
  $pane = new stdClass();
  $pane->pid = 'new-30310067-e638-43ce-b9dd-576552d00128';
  $pane->panel = 'maincontent';
  $pane->type = 'block';
  $pane->subtype = 'simplenews-13';
  $pane->shown = FALSE;
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
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '30310067-e638-43ce-b9dd-576552d00128';
  $display->content['new-30310067-e638-43ce-b9dd-576552d00128'] = $pane;
  $display->panels['maincontent'][4] = 'new-30310067-e638-43ce-b9dd-576552d00128';
  $pane = new stdClass();
  $pane->pid = 'new-38c3e7c0-69b7-48ea-bee9-1b1ef40c2f3a';
  $pane->panel = 'maincontent';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Expand Collapse Filter Button',
    'title' => '',
    'body' => '<a class="btn btn-filters" role="button" data-toggle="collapse" href="#filter-box" aria-expanded="false" aria-controls="filters-box"><div class="expand-icon"><span class="glyphicon glyphicon-plus"></span></div><div class="expand-text">Filter and Sort Discussions</div></a>',
    'format' => 'raw_html',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'expand-btn',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = '38c3e7c0-69b7-48ea-bee9-1b1ef40c2f3a';
  $display->content['new-38c3e7c0-69b7-48ea-bee9-1b1ef40c2f3a'] = $pane;
  $display->panels['maincontent'][5] = 'new-38c3e7c0-69b7-48ea-bee9-1b1ef40c2f3a';
  $pane = new stdClass();
  $pane->pid = 'new-f56ad105-944f-4adb-a8f6-fc66b8eb8961';
  $pane->panel = 'maincontent';
  $pane->type = 'views';
  $pane->subtype = 'discussions_new';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 1,
    'nodes_per_page' => '10',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block_1',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'discussions-filter',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 6;
  $pane->locks = array();
  $pane->uuid = 'f56ad105-944f-4adb-a8f6-fc66b8eb8961';
  $display->content['new-f56ad105-944f-4adb-a8f6-fc66b8eb8961'] = $pane;
  $display->panels['maincontent'][6] = 'new-f56ad105-944f-4adb-a8f6-fc66b8eb8961';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-f56ad105-944f-4adb-a8f6-fc66b8eb8961';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['discussions'] = $page;

  $page = new stdClass();
  $page->disabled = TRUE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'discussions_index_page';
  $page->task = 'page';
  $page->admin_title = 'Discussions Index Page';
  $page->admin_description = 'This is the discussions index page for Research to Reality.';
  $page->path = 'discussions';
  $page->access = array();
  $page->menu = array(
    'type' => 'none',
    'title' => 'Discussions',
    'name' => 'main-menu',
    'weight' => '1',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_discussions_index_page__panel_context_19793aff-e75d-4411-a843-e4393f857db6';
  $handler->task = 'page';
  $handler->subtask = 'discussions_index_page';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'All Discussions',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'discussions',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'All Discussions',
    'panels_breadcrumbs_paths' => '<none>',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'All Discussions';
  $display->uuid = '8124a796-746e-463f-a0b0-30c71b29034b';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_discussions_index_page__panel_context_19793aff-e75d-4411-a843-e4393f857db6';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-caaa9504-e892-47dd-800d-fce89dc1b2ce';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-discussions-menu';
  $pane->shown = FALSE;
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
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'discussion-menu',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'caaa9504-e892-47dd-800d-fce89dc1b2ce';
  $display->content['new-caaa9504-e892-47dd-800d-fce89dc1b2ce'] = $pane;
  $display->panels['middle'][0] = 'new-caaa9504-e892-47dd-800d-fce89dc1b2ce';
  $pane = new stdClass();
  $pane->pid = 'new-e71f61d9-ca79-4339-b929-d8e48a05f729';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'views-discussions-block';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => 'All Discussions',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'e71f61d9-ca79-4339-b929-d8e48a05f729';
  $display->content['new-e71f61d9-ca79-4339-b929-d8e48a05f729'] = $pane;
  $display->panels['middle'][1] = 'new-e71f61d9-ca79-4339-b929-d8e48a05f729';
  $pane = new stdClass();
  $pane->pid = 'new-70cc37f5-8fb2-4508-a362-b2a8883cbfc7';
  $pane->panel = 'middle';
  $pane->type = 'total_subscription';
  $pane->subtype = 'total_subscription';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => array(
      0 => 'empty',
      1 => 'empty',
    ),
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
  $pane->uuid = '70cc37f5-8fb2-4508-a362-b2a8883cbfc7';
  $display->content['new-70cc37f5-8fb2-4508-a362-b2a8883cbfc7'] = $pane;
  $display->panels['middle'][2] = 'new-70cc37f5-8fb2-4508-a362-b2a8883cbfc7';
  $pane = new stdClass();
  $pane->pid = 'new-463e15b9-b4ec-49ad-9d4f-ad6654df3601';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'block-9';
  $pane->shown = FALSE;
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
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'discussion-button',
  );
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '463e15b9-b4ec-49ad-9d4f-ad6654df3601';
  $display->content['new-463e15b9-b4ec-49ad-9d4f-ad6654df3601'] = $pane;
  $display->panels['middle'][3] = 'new-463e15b9-b4ec-49ad-9d4f-ad6654df3601';
  $pane = new stdClass();
  $pane->pid = 'new-6fec155c-d292-410a-8e0c-96adaa5e55f1';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'user-login';
  $pane->shown = FALSE;
  $pane->access = array(
    'plugins' => array(),
  );
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'box yellow round-edge-top user-login',
  );
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '6fec155c-d292-410a-8e0c-96adaa5e55f1';
  $display->content['new-6fec155c-d292-410a-8e0c-96adaa5e55f1'] = $pane;
  $display->panels['middle'][4] = 'new-6fec155c-d292-410a-8e0c-96adaa5e55f1';
  $pane = new stdClass();
  $pane->pid = 'new-1fd3a9f2-d455-499e-b161-889225627eb7';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'block-10';
  $pane->shown = FALSE;
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
        'not' => TRUE,
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
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'signup-today',
  );
  $pane->extras = array();
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = '1fd3a9f2-d455-499e-b161-889225627eb7';
  $display->content['new-1fd3a9f2-d455-499e-b161-889225627eb7'] = $pane;
  $display->panels['middle'][5] = 'new-1fd3a9f2-d455-499e-b161-889225627eb7';
  $pane = new stdClass();
  $pane->pid = 'new-25818bc3-8fd8-49de-b70d-95e4b50cf35a';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'custom_search_blocks-1';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Search Discussions:',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'box round-edge-top fill-grey discussion-search',
  );
  $pane->extras = array();
  $pane->position = 6;
  $pane->locks = array();
  $pane->uuid = '25818bc3-8fd8-49de-b70d-95e4b50cf35a';
  $display->content['new-25818bc3-8fd8-49de-b70d-95e4b50cf35a'] = $pane;
  $display->panels['middle'][6] = 'new-25818bc3-8fd8-49de-b70d-95e4b50cf35a';
  $pane = new stdClass();
  $pane->pid = 'new-7c0ab00d-340b-43f4-928a-b59419f4b9cb';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-categories';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Categories',
    'override_title_heading' => 'h4',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'box round-edge-bottom border-grey discussion-category-menu',
  );
  $pane->extras = array();
  $pane->position = 7;
  $pane->locks = array();
  $pane->uuid = '7c0ab00d-340b-43f4-928a-b59419f4b9cb';
  $display->content['new-7c0ab00d-340b-43f4-928a-b59419f4b9cb'] = $pane;
  $display->panels['middle'][7] = 'new-7c0ab00d-340b-43f4-928a-b59419f4b9cb';
  $pane = new stdClass();
  $pane->pid = 'new-b7c150e1-7953-409f-8d41-9485829a988d';
  $pane->panel = 'middle';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(),
  );
  $pane->configuration = array(
    'admin_title' => 'Discussions: join',
    'title' => '',
    'body' => '<p><span>Follow Discussions</span>  <span><a href="/user">Join the Discussion</a></span></p>',
    'format' => 'full_html',
    'substitute' => TRUE,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 8;
  $pane->locks = array();
  $pane->uuid = 'b7c150e1-7953-409f-8d41-9485829a988d';
  $display->content['new-b7c150e1-7953-409f-8d41-9485829a988d'] = $pane;
  $display->panels['middle'][8] = 'new-b7c150e1-7953-409f-8d41-9485829a988d';
  $pane = new stdClass();
  $pane->pid = 'new-588b1d0a-9a76-43e1-a264-a3937fed660d';
  $pane->panel = 'middle';
  $pane->type = 'views';
  $pane->subtype = 'discussions_new';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 1,
    'nodes_per_page' => '10',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block',
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
  $pane->position = 9;
  $pane->locks = array();
  $pane->uuid = '588b1d0a-9a76-43e1-a264-a3937fed660d';
  $display->content['new-588b1d0a-9a76-43e1-a264-a3937fed660d'] = $pane;
  $display->panels['middle'][9] = 'new-588b1d0a-9a76-43e1-a264-a3937fed660d';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_discussions_index_page__panel_context_66a6f0df-2b5f-4c57-93bd-bb12cdeecacd';
  $handler->task = 'page';
  $handler->subtask = 'discussions_index_page';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'Category - General',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'no-discussion-menu',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'discussions/general',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'All Discussions
General',
    'panels_breadcrumbs_paths' => 'discussions
<none>',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'General Discusssions';
  $display->uuid = 'f0f52038-79aa-4311-9dc5-cf38e1b3c50c';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_discussions_index_page__panel_context_66a6f0df-2b5f-4c57-93bd-bb12cdeecacd';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-292eea5e-e082-4e98-b5cd-69c911cce5e3';
  $pane->panel = 'middle';
  $pane->type = 'views';
  $pane->subtype = 'discussions';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 1,
    'nodes_per_page' => '10',
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
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '292eea5e-e082-4e98-b5cd-69c911cce5e3';
  $display->content['new-292eea5e-e082-4e98-b5cd-69c911cce5e3'] = $pane;
  $display->panels['middle'][0] = 'new-292eea5e-e082-4e98-b5cd-69c911cce5e3';
  $pane = new stdClass();
  $pane->pid = 'new-90475ef5-5f08-4b03-a2d0-baa630d525d4';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'block-9';
  $pane->shown = FALSE;
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
  $pane->uuid = '90475ef5-5f08-4b03-a2d0-baa630d525d4';
  $display->content['new-90475ef5-5f08-4b03-a2d0-baa630d525d4'] = $pane;
  $display->panels['middle'][1] = 'new-90475ef5-5f08-4b03-a2d0-baa630d525d4';
  $pane = new stdClass();
  $pane->pid = 'new-d4122936-dab5-420c-b993-01cec3772af9';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'user-login';
  $pane->shown = FALSE;
  $pane->access = array(
    'plugins' => array(),
  );
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'box yellow round-edge-top user-login',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'd4122936-dab5-420c-b993-01cec3772af9';
  $display->content['new-d4122936-dab5-420c-b993-01cec3772af9'] = $pane;
  $display->panels['middle'][2] = 'new-d4122936-dab5-420c-b993-01cec3772af9';
  $pane = new stdClass();
  $pane->pid = 'new-31dfd6b6-7773-4887-a16a-2e7144c60ee3';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'block-10';
  $pane->shown = FALSE;
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
        'not' => TRUE,
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
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'signup-today',
  );
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '31dfd6b6-7773-4887-a16a-2e7144c60ee3';
  $display->content['new-31dfd6b6-7773-4887-a16a-2e7144c60ee3'] = $pane;
  $display->panels['middle'][3] = 'new-31dfd6b6-7773-4887-a16a-2e7144c60ee3';
  $pane = new stdClass();
  $pane->pid = 'new-51e2e37d-6f3f-47c5-ab92-182bd20042e3';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'custom_search_blocks-1';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Search Discussions:',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'box round-edge-top fill-grey discussion-search',
  );
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '51e2e37d-6f3f-47c5-ab92-182bd20042e3';
  $display->content['new-51e2e37d-6f3f-47c5-ab92-182bd20042e3'] = $pane;
  $display->panels['middle'][4] = 'new-51e2e37d-6f3f-47c5-ab92-182bd20042e3';
  $pane = new stdClass();
  $pane->pid = 'new-b3d4a34f-1d8b-4315-b16e-444c851fa859';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-categories';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Categories',
    'override_title_heading' => 'h4',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'box round-edge-bottom border-grey discussion-category-menu',
  );
  $pane->extras = array();
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = 'b3d4a34f-1d8b-4315-b16e-444c851fa859';
  $display->content['new-b3d4a34f-1d8b-4315-b16e-444c851fa859'] = $pane;
  $display->panels['middle'][5] = 'new-b3d4a34f-1d8b-4315-b16e-444c851fa859';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_discussions_index_page__panel_context_ec9a37cd-c872-410d-b3e7-5b5c03caa7ca';
  $handler->task = 'page';
  $handler->subtask = 'discussions_index_page';
  $handler->handler = 'panel_context';
  $handler->weight = 2;
  $handler->conf = array(
    'title' => 'Category - Policy',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'no-discussion-menu',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'discussions/policy',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'All Discussions
Policy',
    'panels_breadcrumbs_paths' => 'discussions
<none>',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'two_col_70_30';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Policy Discussions';
  $display->uuid = '5f8b6ac4-fa89-4a66-be45-e1902cd866d6';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_discussions_index_page__panel_context_ec9a37cd-c872-410d-b3e7-5b5c03caa7ca';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-c3e25f38-ac58-4875-9b04-a5d128f2456a';
  $pane->panel = 'left';
  $pane->type = 'views';
  $pane->subtype = 'discussions';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 1,
    'nodes_per_page' => '10',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block_3',
    'override_title' => 1,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'c3e25f38-ac58-4875-9b04-a5d128f2456a';
  $display->content['new-c3e25f38-ac58-4875-9b04-a5d128f2456a'] = $pane;
  $display->panels['left'][0] = 'new-c3e25f38-ac58-4875-9b04-a5d128f2456a';
  $pane = new stdClass();
  $pane->pid = 'new-9faf9ab6-429d-468f-9a32-f96634ba9578';
  $pane->panel = 'right';
  $pane->type = 'block';
  $pane->subtype = 'block-9';
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
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'discussion-button',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '9faf9ab6-429d-468f-9a32-f96634ba9578';
  $display->content['new-9faf9ab6-429d-468f-9a32-f96634ba9578'] = $pane;
  $display->panels['right'][0] = 'new-9faf9ab6-429d-468f-9a32-f96634ba9578';
  $pane = new stdClass();
  $pane->pid = 'new-00a77854-971d-4790-be63-634ad645838f';
  $pane->panel = 'right';
  $pane->type = 'block';
  $pane->subtype = 'user-login';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(),
  );
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'box yellow round-edge-top user-login',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '00a77854-971d-4790-be63-634ad645838f';
  $display->content['new-00a77854-971d-4790-be63-634ad645838f'] = $pane;
  $display->panels['right'][1] = 'new-00a77854-971d-4790-be63-634ad645838f';
  $pane = new stdClass();
  $pane->pid = 'new-c014dc99-94eb-4a9e-a918-5825153c280b';
  $pane->panel = 'right';
  $pane->type = 'block';
  $pane->subtype = 'block-10';
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
        'not' => TRUE,
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
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'signup-today',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'c014dc99-94eb-4a9e-a918-5825153c280b';
  $display->content['new-c014dc99-94eb-4a9e-a918-5825153c280b'] = $pane;
  $display->panels['right'][2] = 'new-c014dc99-94eb-4a9e-a918-5825153c280b';
  $pane = new stdClass();
  $pane->pid = 'new-bf554fcc-b6da-4754-aed0-fe75580b0eac';
  $pane->panel = 'right';
  $pane->type = 'block';
  $pane->subtype = 'custom_search_blocks-1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Search Discussions:',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'box round-edge-top fill-grey discussion-search',
  );
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'bf554fcc-b6da-4754-aed0-fe75580b0eac';
  $display->content['new-bf554fcc-b6da-4754-aed0-fe75580b0eac'] = $pane;
  $display->panels['right'][3] = 'new-bf554fcc-b6da-4754-aed0-fe75580b0eac';
  $pane = new stdClass();
  $pane->pid = 'new-bc56f660-c7bf-4990-a5c0-49edce26807f';
  $pane->panel = 'right';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-categories';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Categories',
    'override_title_heading' => 'h4',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'box round-edge-bottom border-grey discussion-category-menu',
  );
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = 'bc56f660-c7bf-4990-a5c0-49edce26807f';
  $display->content['new-bc56f660-c7bf-4990-a5c0-49edce26807f'] = $pane;
  $display->panels['right'][4] = 'new-bc56f660-c7bf-4990-a5c0-49edce26807f';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_discussions_index_page__panel_context_453f5339-6f75-469f-b7ec-274fef19354b';
  $handler->task = 'page';
  $handler->subtask = 'discussions_index_page';
  $handler->handler = 'panel_context';
  $handler->weight = 3;
  $handler->conf = array(
    'title' => 'Category - Cyber Seminar',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'no-discussion-menu',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'discussions/cyber-seminars',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'All Discussions
Cyber-Seminar',
    'panels_breadcrumbs_paths' => 'discussions
<none>',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'two_col_70_30';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Cyber-Seminar Discussions';
  $display->uuid = 'c69622a6-bddc-4f40-bc07-2e06bf5e8e6d';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_discussions_index_page__panel_context_453f5339-6f75-469f-b7ec-274fef19354b';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-75684117-32d4-4991-8238-72b02466ef2f';
  $pane->panel = 'left';
  $pane->type = 'views';
  $pane->subtype = 'discussions';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 1,
    'nodes_per_page' => '10',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block_4',
    'override_title' => 1,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '75684117-32d4-4991-8238-72b02466ef2f';
  $display->content['new-75684117-32d4-4991-8238-72b02466ef2f'] = $pane;
  $display->panels['left'][0] = 'new-75684117-32d4-4991-8238-72b02466ef2f';
  $pane = new stdClass();
  $pane->pid = 'new-b01bfb2e-8332-4561-b93b-5cb9d1433ded';
  $pane->panel = 'right';
  $pane->type = 'block';
  $pane->subtype = 'block-9';
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
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'discussion-button',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'b01bfb2e-8332-4561-b93b-5cb9d1433ded';
  $display->content['new-b01bfb2e-8332-4561-b93b-5cb9d1433ded'] = $pane;
  $display->panels['right'][0] = 'new-b01bfb2e-8332-4561-b93b-5cb9d1433ded';
  $pane = new stdClass();
  $pane->pid = 'new-b332b975-3469-4a4d-9966-7c977f88180d';
  $pane->panel = 'right';
  $pane->type = 'block';
  $pane->subtype = 'user-login';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(),
  );
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'box yellow round-edge-top user-login',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'b332b975-3469-4a4d-9966-7c977f88180d';
  $display->content['new-b332b975-3469-4a4d-9966-7c977f88180d'] = $pane;
  $display->panels['right'][1] = 'new-b332b975-3469-4a4d-9966-7c977f88180d';
  $pane = new stdClass();
  $pane->pid = 'new-cdc54603-6c75-408d-b77c-92400820a33e';
  $pane->panel = 'right';
  $pane->type = 'block';
  $pane->subtype = 'block-10';
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
        'not' => TRUE,
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
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'signup-today',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'cdc54603-6c75-408d-b77c-92400820a33e';
  $display->content['new-cdc54603-6c75-408d-b77c-92400820a33e'] = $pane;
  $display->panels['right'][2] = 'new-cdc54603-6c75-408d-b77c-92400820a33e';
  $pane = new stdClass();
  $pane->pid = 'new-2701f3df-e222-4245-a9d0-5a180588a359';
  $pane->panel = 'right';
  $pane->type = 'block';
  $pane->subtype = 'custom_search_blocks-1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Search Discussions: ',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'box round-edge-top fill-grey discussion-search',
  );
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '2701f3df-e222-4245-a9d0-5a180588a359';
  $display->content['new-2701f3df-e222-4245-a9d0-5a180588a359'] = $pane;
  $display->panels['right'][3] = 'new-2701f3df-e222-4245-a9d0-5a180588a359';
  $pane = new stdClass();
  $pane->pid = 'new-41805cb9-68d8-4c13-b968-b59ad776ba3c';
  $pane->panel = 'right';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-categories';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Categories',
    'override_title_heading' => 'h4',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'box round-edge-bottom border-grey discussion-category-menu',
  );
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '41805cb9-68d8-4c13-b968-b59ad776ba3c';
  $display->content['new-41805cb9-68d8-4c13-b968-b59ad776ba3c'] = $pane;
  $display->panels['right'][4] = 'new-41805cb9-68d8-4c13-b968-b59ad776ba3c';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_discussions_index_page__panel_context_35689dbf-672d-44db-95db-ee48f7bdb50f';
  $handler->task = 'page';
  $handler->subtask = 'discussions_index_page';
  $handler->handler = 'panel_context';
  $handler->weight = 4;
  $handler->conf = array(
    'title' => 'Category - Programs',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'no-discussion-menu',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'discussions/programs',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'All Discussions
Programs',
    'panels_breadcrumbs_paths' => 'discussions
<none>',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'two_col_70_30';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Program Discussions';
  $display->uuid = '07417b3b-11aa-40b8-b2e9-dad06cd9a20a';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_discussions_index_page__panel_context_35689dbf-672d-44db-95db-ee48f7bdb50f';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-4cb33e92-ab5f-4e0e-b2e6-bdda4e0e57a7';
  $pane->panel = 'left';
  $pane->type = 'views';
  $pane->subtype = 'discussions';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 1,
    'nodes_per_page' => '10',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block_5',
    'override_title' => 1,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '4cb33e92-ab5f-4e0e-b2e6-bdda4e0e57a7';
  $display->content['new-4cb33e92-ab5f-4e0e-b2e6-bdda4e0e57a7'] = $pane;
  $display->panels['left'][0] = 'new-4cb33e92-ab5f-4e0e-b2e6-bdda4e0e57a7';
  $pane = new stdClass();
  $pane->pid = 'new-53a8ed09-bf5d-4809-bb0d-a43b24720fc6';
  $pane->panel = 'right';
  $pane->type = 'block';
  $pane->subtype = 'block-9';
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
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'discussion-button',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '53a8ed09-bf5d-4809-bb0d-a43b24720fc6';
  $display->content['new-53a8ed09-bf5d-4809-bb0d-a43b24720fc6'] = $pane;
  $display->panels['right'][0] = 'new-53a8ed09-bf5d-4809-bb0d-a43b24720fc6';
  $pane = new stdClass();
  $pane->pid = 'new-383c81b5-8e84-468b-bf08-fa7bb2a5fcf0';
  $pane->panel = 'right';
  $pane->type = 'block';
  $pane->subtype = 'user-login';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(),
  );
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'box yellow round-edge-top user-login',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '383c81b5-8e84-468b-bf08-fa7bb2a5fcf0';
  $display->content['new-383c81b5-8e84-468b-bf08-fa7bb2a5fcf0'] = $pane;
  $display->panels['right'][1] = 'new-383c81b5-8e84-468b-bf08-fa7bb2a5fcf0';
  $pane = new stdClass();
  $pane->pid = 'new-bfa8d5ab-98ad-4d96-be9a-0ad2a5f995f8';
  $pane->panel = 'right';
  $pane->type = 'block';
  $pane->subtype = 'block-10';
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
        'not' => TRUE,
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
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'signup-today',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'bfa8d5ab-98ad-4d96-be9a-0ad2a5f995f8';
  $display->content['new-bfa8d5ab-98ad-4d96-be9a-0ad2a5f995f8'] = $pane;
  $display->panels['right'][2] = 'new-bfa8d5ab-98ad-4d96-be9a-0ad2a5f995f8';
  $pane = new stdClass();
  $pane->pid = 'new-a60d8ab2-2a10-4285-a7db-62febf7a38e1';
  $pane->panel = 'right';
  $pane->type = 'block';
  $pane->subtype = 'custom_search_blocks-1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Search Discussions:',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'box round-edge-top fill-grey discussion-search',
  );
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'a60d8ab2-2a10-4285-a7db-62febf7a38e1';
  $display->content['new-a60d8ab2-2a10-4285-a7db-62febf7a38e1'] = $pane;
  $display->panels['right'][3] = 'new-a60d8ab2-2a10-4285-a7db-62febf7a38e1';
  $pane = new stdClass();
  $pane->pid = 'new-2ecb13ca-9841-40a8-b082-827a94830a1e';
  $pane->panel = 'right';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-categories';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Categories',
    'override_title_heading' => 'h4',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'box round-edge-bottom border-grey discussion-category-menu',
  );
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '2ecb13ca-9841-40a8-b082-827a94830a1e';
  $display->content['new-2ecb13ca-9841-40a8-b082-827a94830a1e'] = $pane;
  $display->panels['right'][4] = 'new-2ecb13ca-9841-40a8-b082-827a94830a1e';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_discussions_index_page__panel_context_63a17299-ffda-43a5-a88e-8c9a53f6a29f';
  $handler->task = 'page';
  $handler->subtask = 'discussions_index_page';
  $handler->handler = 'panel_context';
  $handler->weight = 5;
  $handler->conf = array(
    'title' => 'Category - Research',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'no-discussion-menu',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'discussions/research',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'All Discussions
Research',
    'panels_breadcrumbs_paths' => 'discussions
<none>',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'two_col_70_30';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Research Discussions';
  $display->uuid = '2e06ebc8-a475-49ca-a3fc-7c028c27babe';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_discussions_index_page__panel_context_63a17299-ffda-43a5-a88e-8c9a53f6a29f';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-cbf8697d-421a-4378-be9b-36e7dc332300';
  $pane->panel = 'left';
  $pane->type = 'views';
  $pane->subtype = 'discussions';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 1,
    'nodes_per_page' => '10',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block_6',
    'override_title' => 1,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'cbf8697d-421a-4378-be9b-36e7dc332300';
  $display->content['new-cbf8697d-421a-4378-be9b-36e7dc332300'] = $pane;
  $display->panels['left'][0] = 'new-cbf8697d-421a-4378-be9b-36e7dc332300';
  $pane = new stdClass();
  $pane->pid = 'new-16b2fc8b-c36a-40ed-bef3-ae04db6c7350';
  $pane->panel = 'right';
  $pane->type = 'block';
  $pane->subtype = 'block-9';
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
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'discussion-button',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '16b2fc8b-c36a-40ed-bef3-ae04db6c7350';
  $display->content['new-16b2fc8b-c36a-40ed-bef3-ae04db6c7350'] = $pane;
  $display->panels['right'][0] = 'new-16b2fc8b-c36a-40ed-bef3-ae04db6c7350';
  $pane = new stdClass();
  $pane->pid = 'new-a7a7b5b5-8a19-4db7-ab13-ba017f6a2d88';
  $pane->panel = 'right';
  $pane->type = 'block';
  $pane->subtype = 'user-login';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(),
  );
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'box yellow round-edge-top user-login',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'a7a7b5b5-8a19-4db7-ab13-ba017f6a2d88';
  $display->content['new-a7a7b5b5-8a19-4db7-ab13-ba017f6a2d88'] = $pane;
  $display->panels['right'][1] = 'new-a7a7b5b5-8a19-4db7-ab13-ba017f6a2d88';
  $pane = new stdClass();
  $pane->pid = 'new-d3b368cd-2e66-4310-9395-902bd3ce5a96';
  $pane->panel = 'right';
  $pane->type = 'block';
  $pane->subtype = 'block-10';
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
        'not' => TRUE,
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
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'signup-today',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'd3b368cd-2e66-4310-9395-902bd3ce5a96';
  $display->content['new-d3b368cd-2e66-4310-9395-902bd3ce5a96'] = $pane;
  $display->panels['right'][2] = 'new-d3b368cd-2e66-4310-9395-902bd3ce5a96';
  $pane = new stdClass();
  $pane->pid = 'new-7f4d79e7-3977-4d98-bf95-8fc49802cb60';
  $pane->panel = 'right';
  $pane->type = 'block';
  $pane->subtype = 'custom_search_blocks-1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Search Discussions: ',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'box round-edge-top fill-grey discussion-search',
  );
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '7f4d79e7-3977-4d98-bf95-8fc49802cb60';
  $display->content['new-7f4d79e7-3977-4d98-bf95-8fc49802cb60'] = $pane;
  $display->panels['right'][3] = 'new-7f4d79e7-3977-4d98-bf95-8fc49802cb60';
  $pane = new stdClass();
  $pane->pid = 'new-a8dceda8-e38b-42c3-94c9-35e0a5129a9c';
  $pane->panel = 'right';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-categories';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Categories',
    'override_title_heading' => 'h4',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'box round-edge-bottom border-grey discussion-category-menu',
  );
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = 'a8dceda8-e38b-42c3-94c9-35e0a5129a9c';
  $display->content['new-a8dceda8-e38b-42c3-94c9-35e0a5129a9c'] = $pane;
  $display->panels['right'][4] = 'new-a8dceda8-e38b-42c3-94c9-35e0a5129a9c';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_discussions_index_page__panel_context_1345806f-8d06-47d9-a025-d6c792f04c70';
  $handler->task = 'page';
  $handler->subtask = 'discussions_index_page';
  $handler->handler = 'panel_context';
  $handler->weight = 6;
  $handler->conf = array(
    'title' => 'Category - Collaborations',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'no-discussion-menu',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'discussions/collaborations',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'All Discussions
Collaborations',
    'panels_breadcrumbs_paths' => 'discussions
<none>',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'two_col_70_30';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Collaboration Discussions';
  $display->uuid = '124a6a4d-718f-421c-a6fa-a0f92f18dd16';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_discussions_index_page__panel_context_1345806f-8d06-47d9-a025-d6c792f04c70';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-d756d272-2c24-4667-b5f7-c74bb1c86768';
  $pane->panel = 'left';
  $pane->type = 'views';
  $pane->subtype = 'discussions';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 1,
    'nodes_per_page' => '10',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block_7',
    'override_title' => 1,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'd756d272-2c24-4667-b5f7-c74bb1c86768';
  $display->content['new-d756d272-2c24-4667-b5f7-c74bb1c86768'] = $pane;
  $display->panels['left'][0] = 'new-d756d272-2c24-4667-b5f7-c74bb1c86768';
  $pane = new stdClass();
  $pane->pid = 'new-56480ef8-facc-4f4f-8cad-37d40e0c57a7';
  $pane->panel = 'right';
  $pane->type = 'block';
  $pane->subtype = 'block-9';
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
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'discussion-button',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '56480ef8-facc-4f4f-8cad-37d40e0c57a7';
  $display->content['new-56480ef8-facc-4f4f-8cad-37d40e0c57a7'] = $pane;
  $display->panels['right'][0] = 'new-56480ef8-facc-4f4f-8cad-37d40e0c57a7';
  $pane = new stdClass();
  $pane->pid = 'new-67eaa05f-bfd5-4afb-ba4e-f9ccb5966eea';
  $pane->panel = 'right';
  $pane->type = 'block';
  $pane->subtype = 'user-login';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(),
  );
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'box yellow round-edge-top user-login',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '67eaa05f-bfd5-4afb-ba4e-f9ccb5966eea';
  $display->content['new-67eaa05f-bfd5-4afb-ba4e-f9ccb5966eea'] = $pane;
  $display->panels['right'][1] = 'new-67eaa05f-bfd5-4afb-ba4e-f9ccb5966eea';
  $pane = new stdClass();
  $pane->pid = 'new-775c3fdc-115b-4b7e-8eb7-8b0cea5fd624';
  $pane->panel = 'right';
  $pane->type = 'block';
  $pane->subtype = 'block-10';
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
        'not' => TRUE,
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
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'signup-today',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '775c3fdc-115b-4b7e-8eb7-8b0cea5fd624';
  $display->content['new-775c3fdc-115b-4b7e-8eb7-8b0cea5fd624'] = $pane;
  $display->panels['right'][2] = 'new-775c3fdc-115b-4b7e-8eb7-8b0cea5fd624';
  $pane = new stdClass();
  $pane->pid = 'new-8c72b405-5d1e-449a-a814-5af4910a60f8';
  $pane->panel = 'right';
  $pane->type = 'block';
  $pane->subtype = 'custom_search_blocks-1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Search Discussions:',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'box round-edge-top fill-grey discussion-search',
  );
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '8c72b405-5d1e-449a-a814-5af4910a60f8';
  $display->content['new-8c72b405-5d1e-449a-a814-5af4910a60f8'] = $pane;
  $display->panels['right'][3] = 'new-8c72b405-5d1e-449a-a814-5af4910a60f8';
  $pane = new stdClass();
  $pane->pid = 'new-73140264-555d-4784-b4f0-703986b6a8c4';
  $pane->panel = 'right';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-categories';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Categories',
    'override_title_heading' => 'h4',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'box round-edge-bottom border-grey discussion-category-menu',
  );
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '73140264-555d-4784-b4f0-703986b6a8c4';
  $display->content['new-73140264-555d-4784-b4f0-703986b6a8c4'] = $pane;
  $display->panels['right'][4] = 'new-73140264-555d-4784-b4f0-703986b6a8c4';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_discussions_index_page__panel_context_c3f0880c-945e-4e1a-b29c-7b056ce24e92';
  $handler->task = 'page';
  $handler->subtask = 'discussions_index_page';
  $handler->handler = 'panel_context';
  $handler->weight = 7;
  $handler->conf = array(
    'title' => 'Your Discussions',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'All Discussions
Your Discussions',
    'panels_breadcrumbs_paths' => 'discussions
<none>',
    'panels_breadcrumbs_home' => 1,
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'discussions/your-discussions',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'two_col_70_30';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Your Discussions';
  $display->uuid = 'e63b9f1d-f792-435c-ab95-4ab725cc5299';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_discussions_index_page__panel_context_c3f0880c-945e-4e1a-b29c-7b056ce24e92';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-38087d59-6511-404f-85fe-96852e704e4e';
  $pane->panel = 'left';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-discussions-menu';
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
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'discussion-menu',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '38087d59-6511-404f-85fe-96852e704e4e';
  $display->content['new-38087d59-6511-404f-85fe-96852e704e4e'] = $pane;
  $display->panels['left'][0] = 'new-38087d59-6511-404f-85fe-96852e704e4e';
  $pane = new stdClass();
  $pane->pid = 'new-a7543019-7334-44fc-b8a4-9aa0eb52f9ff';
  $pane->panel = 'left';
  $pane->type = 'views';
  $pane->subtype = 'discussions';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 1,
    'nodes_per_page' => '10',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block_1',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'a7543019-7334-44fc-b8a4-9aa0eb52f9ff';
  $display->content['new-a7543019-7334-44fc-b8a4-9aa0eb52f9ff'] = $pane;
  $display->panels['left'][1] = 'new-a7543019-7334-44fc-b8a4-9aa0eb52f9ff';
  $pane = new stdClass();
  $pane->pid = 'new-a8be4f39-43dc-4230-8be8-fd0edeb072ab';
  $pane->panel = 'right';
  $pane->type = 'block';
  $pane->subtype = 'block-9';
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
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'discussion-button',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'a8be4f39-43dc-4230-8be8-fd0edeb072ab';
  $display->content['new-a8be4f39-43dc-4230-8be8-fd0edeb072ab'] = $pane;
  $display->panels['right'][0] = 'new-a8be4f39-43dc-4230-8be8-fd0edeb072ab';
  $pane = new stdClass();
  $pane->pid = 'new-7c42183c-4eea-4b45-9c38-0af6395befba';
  $pane->panel = 'right';
  $pane->type = 'block';
  $pane->subtype = 'user-login';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(),
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
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'box yellow round-edge-top user-login',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '7c42183c-4eea-4b45-9c38-0af6395befba';
  $display->content['new-7c42183c-4eea-4b45-9c38-0af6395befba'] = $pane;
  $display->panels['right'][1] = 'new-7c42183c-4eea-4b45-9c38-0af6395befba';
  $pane = new stdClass();
  $pane->pid = 'new-d8e6977c-a168-4495-986c-d4f22435bf17';
  $pane->panel = 'right';
  $pane->type = 'block';
  $pane->subtype = 'block-10';
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
        'not' => TRUE,
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
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'signup-today',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'd8e6977c-a168-4495-986c-d4f22435bf17';
  $display->content['new-d8e6977c-a168-4495-986c-d4f22435bf17'] = $pane;
  $display->panels['right'][2] = 'new-d8e6977c-a168-4495-986c-d4f22435bf17';
  $pane = new stdClass();
  $pane->pid = 'new-e1384df7-6450-4a73-aaf6-04ff68fdddf6';
  $pane->panel = 'right';
  $pane->type = 'block';
  $pane->subtype = 'custom_search_blocks-1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Search Discussions:',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'box round-edge-top fill-grey discussion-search',
  );
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'e1384df7-6450-4a73-aaf6-04ff68fdddf6';
  $display->content['new-e1384df7-6450-4a73-aaf6-04ff68fdddf6'] = $pane;
  $display->panels['right'][3] = 'new-e1384df7-6450-4a73-aaf6-04ff68fdddf6';
  $pane = new stdClass();
  $pane->pid = 'new-35545e74-e93d-4215-8ccd-46ccb27ee032';
  $pane->panel = 'right';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-categories';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Categories',
    'override_title_heading' => 'h4',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'box round-edge-bottom border-grey discussion-category-menu',
  );
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '35545e74-e93d-4215-8ccd-46ccb27ee032';
  $display->content['new-35545e74-e93d-4215-8ccd-46ccb27ee032'] = $pane;
  $display->panels['right'][4] = 'new-35545e74-e93d-4215-8ccd-46ccb27ee032';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['discussions_index_page'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'events';
  $page->task = 'page';
  $page->admin_title = 'Events';
  $page->admin_description = 'Events Page';
  $page->path = 'events';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_events__panel_context_40cdf89b-6e59-4870-94a8-cd912c546044';
  $handler->task = 'page';
  $handler->subtask = 'events';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Events Landing Page',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'Events',
    'panels_breadcrumbs_paths' => '<none>',
    'panels_breadcrumbs_home' => 1,
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'events',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
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
  $display->uuid = 'c39fa376-5788-4157-b641-500517e803d1';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_events__panel_context_40cdf89b-6e59-4870-94a8-cd912c546044';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-1041e699-27c9-4b5a-baa3-1545ec258af5';
  $pane->panel = 'middle';
  $pane->type = 'views';
  $pane->subtype = 'event_calendar';
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
    'args' => '',
    'url' => '',
    'display' => 'page_1',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'r2r-lg-calendar',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '1041e699-27c9-4b5a-baa3-1545ec258af5';
  $display->content['new-1041e699-27c9-4b5a-baa3-1545ec258af5'] = $pane;
  $display->panels['middle'][0] = 'new-1041e699-27c9-4b5a-baa3-1545ec258af5';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_events__view_all_events';
  $handler->task = 'page';
  $handler->subtask = 'events';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'View All Events',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'view_all_events',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'events/view-all',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'single-column';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
      'maincontent' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Events';
  $display->uuid = '8e363e78-ffae-4f9d-8b99-3f9093b583b8';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_events__view_all_events';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-3bd09c06-f2a4-44b8-a84d-56d5d8e5c384';
  $pane->panel = 'maincontent';
  $pane->type = 'views';
  $pane->subtype = 'event_calendar';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '10',
    'pager_id' => '0',
    'offset' => '0',
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
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'events-view-all',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '3bd09c06-f2a4-44b8-a84d-56d5d8e5c384';
  $display->content['new-3bd09c06-f2a4-44b8-a84d-56d5d8e5c384'] = $pane;
  $display->panels['maincontent'][0] = 'new-3bd09c06-f2a4-44b8-a84d-56d5d8e5c384';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-3bd09c06-f2a4-44b8-a84d-56d5d8e5c384';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['events'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'featured_r2r_partners';
  $page->task = 'page';
  $page->admin_title = 'Featured R2R Partners';
  $page->admin_description = '';
  $page->path = 'featured-partners';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_featured_r2r_partners__panel_context_4c1bf84d-dd84-48cc-99a4-6568f9a79334';
  $handler->task = 'page';
  $handler->subtask = 'featured_r2r_partners';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Landing Page',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'Featured R2R Partners',
    'panels_breadcrumbs_paths' => '<none>',
    'panels_breadcrumbs_home' => 1,
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'featured-partners',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'right-sidebar';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'maincontent' => NULL,
      'rightsidebar' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Featured Partners';
  $display->uuid = 'bb48c0c5-593b-4fbd-8242-86a0d3292acc';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_featured_r2r_partners__panel_context_4c1bf84d-dd84-48cc-99a4-6568f9a79334';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-68db0046-3e8c-4e82-8642-8328ec49b37b';
  $pane->panel = 'maincontent';
  $pane->type = 'views';
  $pane->subtype = 'featured_r2r_partners';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '1',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block_1',
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
  $pane->uuid = '68db0046-3e8c-4e82-8642-8328ec49b37b';
  $display->content['new-68db0046-3e8c-4e82-8642-8328ec49b37b'] = $pane;
  $display->panels['maincontent'][0] = 'new-68db0046-3e8c-4e82-8642-8328ec49b37b';
  $pane = new stdClass();
  $pane->pid = 'new-44cf70be-4a90-4c5d-890a-cd2e62dbcee5';
  $pane->panel = 'maincontent';
  $pane->type = 'views_panes';
  $pane->subtype = 'featured_r2r_partners-panel_pane_1';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '44cf70be-4a90-4c5d-890a-cd2e62dbcee5';
  $display->content['new-44cf70be-4a90-4c5d-890a-cd2e62dbcee5'] = $pane;
  $display->panels['maincontent'][1] = 'new-44cf70be-4a90-4c5d-890a-cd2e62dbcee5';
  $pane = new stdClass();
  $pane->pid = 'new-d2a5ed3a-ac31-4238-b96c-58fe7b848ea3';
  $pane->panel = 'rightsidebar';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'View All Featured Partners',
    'title' => '',
    'body' => '<p><a class="btn btn-lg view-all-fp" href="/featured-partners/archive">View All Featured Partners</a></p>',
    'format' => 'raw_html',
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
  $pane->uuid = 'd2a5ed3a-ac31-4238-b96c-58fe7b848ea3';
  $display->content['new-d2a5ed3a-ac31-4238-b96c-58fe7b848ea3'] = $pane;
  $display->panels['rightsidebar'][0] = 'new-d2a5ed3a-ac31-4238-b96c-58fe7b848ea3';
  $pane = new stdClass();
  $pane->pid = 'new-33c134ea-55c7-4d85-b648-431e4148d273';
  $pane->panel = 'rightsidebar';
  $pane->type = 'views';
  $pane->subtype = 'featured_r2r_partners';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '1',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block_5',
    'override_title' => 0,
    'override_title_text' => ' ',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '33c134ea-55c7-4d85-b648-431e4148d273';
  $display->content['new-33c134ea-55c7-4d85-b648-431e4148d273'] = $pane;
  $display->panels['rightsidebar'][1] = 'new-33c134ea-55c7-4d85-b648-431e4148d273';
  $pane = new stdClass();
  $pane->pid = 'new-91733c43-9a6f-4b68-ab3e-0165e817c832';
  $pane->panel = 'rightsidebar';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Title',
    'title' => '',
    'body' => '<h2 class="pane-title">Previously Featured R2R Partners</h2>',
    'format' => 'full_html',
    'substitute' => TRUE,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '91733c43-9a6f-4b68-ab3e-0165e817c832';
  $display->content['new-91733c43-9a6f-4b68-ab3e-0165e817c832'] = $pane;
  $display->panels['rightsidebar'][2] = 'new-91733c43-9a6f-4b68-ab3e-0165e817c832';
  $pane = new stdClass();
  $pane->pid = 'new-38ecca4d-2abf-47aa-b018-df0a8fd6141d';
  $pane->panel = 'rightsidebar';
  $pane->type = 'panels_mini';
  $pane->subtype = 'featured_partner_sidebar';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'sidebar-box',
  );
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '38ecca4d-2abf-47aa-b018-df0a8fd6141d';
  $display->content['new-38ecca4d-2abf-47aa-b018-df0a8fd6141d'] = $pane;
  $display->panels['rightsidebar'][3] = 'new-38ecca4d-2abf-47aa-b018-df0a8fd6141d';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_featured_r2r_partners__archives';
  $handler->task = 'page';
  $handler->subtask = 'featured_r2r_partners';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'Archives',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'archives',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'featured-partners/archive',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'Featured R2R Partners
Archives',
    'panels_breadcrumbs_paths' => 'featured-partners
<none>',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'right-sidebar';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'maincontent' => NULL,
      'rightsidebar' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Featured R2R Partner Archives';
  $display->uuid = 'ff9ac817-c6c2-4cc2-a39b-cdf5cfc48880';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_featured_r2r_partners__archives';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-50a48e4f-595e-44aa-865e-e0361af6e984';
  $pane->panel = 'maincontent';
  $pane->type = 'views';
  $pane->subtype = 'featured_r2r_partners';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 1,
    'nodes_per_page' => '10',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block_3',
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
  $pane->uuid = '50a48e4f-595e-44aa-865e-e0361af6e984';
  $display->content['new-50a48e4f-595e-44aa-865e-e0361af6e984'] = $pane;
  $display->panels['maincontent'][0] = 'new-50a48e4f-595e-44aa-865e-e0361af6e984';
  $pane = new stdClass();
  $pane->pid = 'new-410387c3-1714-4172-aadc-90ee4e180c5b';
  $pane->panel = 'rightsidebar';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'title - current partner',
    'title' => '',
    'body' => '<h2 class="pane-title">Currently Featured R2R Partner</h2>',
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
  $pane->uuid = '410387c3-1714-4172-aadc-90ee4e180c5b';
  $display->content['new-410387c3-1714-4172-aadc-90ee4e180c5b'] = $pane;
  $display->panels['rightsidebar'][0] = 'new-410387c3-1714-4172-aadc-90ee4e180c5b';
  $pane = new stdClass();
  $pane->pid = 'new-840efaea-630a-46df-bd4b-b252fdc08f4f';
  $pane->panel = 'rightsidebar';
  $pane->type = 'views';
  $pane->subtype = 'featured_r2r_partners';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '1',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block_4',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'sidebar-box',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '840efaea-630a-46df-bd4b-b252fdc08f4f';
  $display->content['new-840efaea-630a-46df-bd4b-b252fdc08f4f'] = $pane;
  $display->panels['rightsidebar'][1] = 'new-840efaea-630a-46df-bd4b-b252fdc08f4f';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['featured_r2r_partners'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'home_page';
  $page->task = 'page';
  $page->admin_title = 'Home Page';
  $page->admin_description = 'This is the Research To Reality Homepage.';
  $page->path = 'home';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_home_page__panel_context_6bcaae88-1f30-4993-acce-ff3b82e235c4';
  $handler->task = 'page';
  $handler->subtask = 'home_page';
  $handler->handler = 'panel_context';
  $handler->weight = 2;
  $handler->conf = array(
    'title' => 'Panel 2',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'logic' => 'and',
    ),
    'name' => '',
  );
  $display = new panels_display();
  $display->layout = 'homepage';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top_row' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'right' => NULL,
      'call_to_action' => NULL,
      'what_s_new' => NULL,
      'events' => NULL,
      'webinars' => NULL,
      'calendar' => NULL,
      'featured_partner' => NULL,
      'older_feat_partners' => NULL,
      'members_count' => NULL,
      'discussions_count' => NULL,
      'events_count' => NULL,
      'what_is_r2r_' => NULL,
      'recent_discussions' => NULL,
      'whatisr2r' => NULL,
      'recentdiscussions' => NULL,
      'cyberseminars' => NULL,
      'featuredpartner' => NULL,
      'featuredpartner-intro' => NULL,
      'featuredpartner-archive' => NULL,
      'whatisnew' => NULL,
    ),
    'featuredpartner' => array(
      'style' => 'naked',
    ),
    'featuredpartner-intro' => array(
      'style' => 'naked',
    ),
    'featuredpartner-archive' => array(
      'style' => 'naked',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '4e2cef4b-d1ee-4bc2-b7d9-5828acafff05';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_home_page__panel_context_6bcaae88-1f30-4993-acce-ff3b82e235c4';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-ac6cdba5-3aed-46b4-8c5c-5b40b63f66be';
  $pane->panel = 'calendar';
  $pane->type = 'views';
  $pane->subtype = 'rwb_event_seminar_calendar';
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
    'args' => '',
    'url' => '',
    'display' => 'page_1',
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
  $pane->uuid = 'ac6cdba5-3aed-46b4-8c5c-5b40b63f66be';
  $display->content['new-ac6cdba5-3aed-46b4-8c5c-5b40b63f66be'] = $pane;
  $display->panels['calendar'][0] = 'new-ac6cdba5-3aed-46b4-8c5c-5b40b63f66be';
  $pane = new stdClass();
  $pane->pid = 'new-b842e990-2a13-41d1-9a8f-edd3b79a44c5';
  $pane->panel = 'cyberseminars';
  $pane->type = 'views';
  $pane->subtype = 'next_pending_event';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '1',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'b842e990-2a13-41d1-9a8f-edd3b79a44c5';
  $display->content['new-b842e990-2a13-41d1-9a8f-edd3b79a44c5'] = $pane;
  $display->panels['cyberseminars'][0] = 'new-b842e990-2a13-41d1-9a8f-edd3b79a44c5';
  $pane = new stdClass();
  $pane->pid = 'new-556acc4b-50fe-4c9b-946c-b035a2522fe3';
  $pane->panel = 'events';
  $pane->type = 'views';
  $pane->subtype = 'next_pending_event';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '1',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block',
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
  $pane->uuid = '556acc4b-50fe-4c9b-946c-b035a2522fe3';
  $display->content['new-556acc4b-50fe-4c9b-946c-b035a2522fe3'] = $pane;
  $display->panels['events'][0] = 'new-556acc4b-50fe-4c9b-946c-b035a2522fe3';
  $pane = new stdClass();
  $pane->pid = 'new-0623ab80-ed73-4e92-9d84-03eb6d4a2a32';
  $pane->panel = 'featuredpartner';
  $pane->type = 'views';
  $pane->subtype = 'homepage_featured_partners';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '1',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block',
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
  $pane->uuid = '0623ab80-ed73-4e92-9d84-03eb6d4a2a32';
  $display->content['new-0623ab80-ed73-4e92-9d84-03eb6d4a2a32'] = $pane;
  $display->panels['featuredpartner'][0] = 'new-0623ab80-ed73-4e92-9d84-03eb6d4a2a32';
  $pane = new stdClass();
  $pane->pid = 'new-34aa43bb-0da4-4576-80b3-a3b10bdfb11d';
  $pane->panel = 'featuredpartner-archive';
  $pane->type = 'views';
  $pane->subtype = 'homepage_featured_partners';
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
    'display' => 'block_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'clearfix',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '34aa43bb-0da4-4576-80b3-a3b10bdfb11d';
  $display->content['new-34aa43bb-0da4-4576-80b3-a3b10bdfb11d'] = $pane;
  $display->panels['featuredpartner-archive'][0] = 'new-34aa43bb-0da4-4576-80b3-a3b10bdfb11d';
  $pane = new stdClass();
  $pane->pid = 'new-3cdddd5b-8265-41cc-a092-7f17d0abd64c';
  $pane->panel = 'featuredpartner-archive';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'divider',
    'title' => '',
    'body' => '<hr>',
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
  $pane->uuid = '3cdddd5b-8265-41cc-a092-7f17d0abd64c';
  $display->content['new-3cdddd5b-8265-41cc-a092-7f17d0abd64c'] = $pane;
  $display->panels['featuredpartner-archive'][1] = 'new-3cdddd5b-8265-41cc-a092-7f17d0abd64c';
  $pane = new stdClass();
  $pane->pid = 'new-65a5b687-f976-417f-876b-17857210671d';
  $pane->panel = 'featuredpartner-archive';
  $pane->type = 'views';
  $pane->subtype = 'homepage_featured_partners';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '1',
    'pager_id' => '0',
    'offset' => '2',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block_3',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'clearfix',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '65a5b687-f976-417f-876b-17857210671d';
  $display->content['new-65a5b687-f976-417f-876b-17857210671d'] = $pane;
  $display->panels['featuredpartner-archive'][2] = 'new-65a5b687-f976-417f-876b-17857210671d';
  $pane = new stdClass();
  $pane->pid = 'new-dc9c052f-60a4-4d7b-aab8-c3c4c6446ed0';
  $pane->panel = 'featuredpartner-archive';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Link',
    'title' => '',
    'body' => '<div class="archive-btn"><a class="btn btn-sm" href="featured-partners/archive">View Featured Partner Archive</a></div><!-- close archive-btn -->',
    'format' => 'full_html',
    'substitute' => TRUE,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'dc9c052f-60a4-4d7b-aab8-c3c4c6446ed0';
  $display->content['new-dc9c052f-60a4-4d7b-aab8-c3c4c6446ed0'] = $pane;
  $display->panels['featuredpartner-archive'][3] = 'new-dc9c052f-60a4-4d7b-aab8-c3c4c6446ed0';
  $pane = new stdClass();
  $pane->pid = 'new-71ce105c-8795-4d0a-a6db-3470506830b2';
  $pane->panel = 'featuredpartner-intro';
  $pane->type = 'views';
  $pane->subtype = 'homepage_featured_partners';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '1',
    'pager_id' => '0',
    'offset' => '0',
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
  $pane->uuid = '71ce105c-8795-4d0a-a6db-3470506830b2';
  $display->content['new-71ce105c-8795-4d0a-a6db-3470506830b2'] = $pane;
  $display->panels['featuredpartner-intro'][0] = 'new-71ce105c-8795-4d0a-a6db-3470506830b2';
  $pane = new stdClass();
  $pane->pid = 'new-397493a6-7dbd-40ad-ba8e-2349c2073562';
  $pane->panel = 'recentdiscussions';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'recent-discussion-intro',
    'title' => '',
    'body' => '<p><a href="discussions"><b>Start</b></a>, <a href="discussions"><b>Join</b></a>, or <a href="discussions"><b>Follow</b></a> discussions with other community members.</p>',
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
  $pane->uuid = '397493a6-7dbd-40ad-ba8e-2349c2073562';
  $display->content['new-397493a6-7dbd-40ad-ba8e-2349c2073562'] = $pane;
  $display->panels['recentdiscussions'][0] = 'new-397493a6-7dbd-40ad-ba8e-2349c2073562';
  $pane = new stdClass();
  $pane->pid = 'new-cae8adbb-7113-4515-b5e9-3533c8f1e9f7';
  $pane->panel = 'recentdiscussions';
  $pane->type = 'views';
  $pane->subtype = 'homepage_discussions_mobile';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 1,
    'nodes_per_page' => '1',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'default',
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'cae8adbb-7113-4515-b5e9-3533c8f1e9f7';
  $display->content['new-cae8adbb-7113-4515-b5e9-3533c8f1e9f7'] = $pane;
  $display->panels['recentdiscussions'][1] = 'new-cae8adbb-7113-4515-b5e9-3533c8f1e9f7';
  $pane = new stdClass();
  $pane->pid = 'new-4fe8d19d-ae46-41fd-83d2-2b426c2bd38d';
  $pane->panel = 'recentdiscussions';
  $pane->type = 'views';
  $pane->subtype = 'homepage_discussions';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '5',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'default',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '4fe8d19d-ae46-41fd-83d2-2b426c2bd38d';
  $display->content['new-4fe8d19d-ae46-41fd-83d2-2b426c2bd38d'] = $pane;
  $display->panels['recentdiscussions'][2] = 'new-4fe8d19d-ae46-41fd-83d2-2b426c2bd38d';
  $pane = new stdClass();
  $pane->pid = 'new-e164cda8-2f0b-4620-949f-73a27c94a57c';
  $pane->panel = 'whatisnew';
  $pane->type = 'views';
  $pane->subtype = 'what_s_new';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 1,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '1',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block',
    'override_title' => 1,
    'override_title_text' => 'What\'s New',
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
  $pane->uuid = 'e164cda8-2f0b-4620-949f-73a27c94a57c';
  $display->content['new-e164cda8-2f0b-4620-949f-73a27c94a57c'] = $pane;
  $display->panels['whatisnew'][0] = 'new-e164cda8-2f0b-4620-949f-73a27c94a57c';
  $pane = new stdClass();
  $pane->pid = 'new-dd0d9ecc-1598-452f-8cd1-20ef990eca94';
  $pane->panel = 'whatisnew';
  $pane->type = 'views';
  $pane->subtype = 'recent_activities';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 1,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => TRUE,
      ),
    ),
  );
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '3',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block',
    'override_title' => 1,
    'override_title_text' => 'Recent Activities',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'hp-recent-activities',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'dd0d9ecc-1598-452f-8cd1-20ef990eca94';
  $display->content['new-dd0d9ecc-1598-452f-8cd1-20ef990eca94'] = $pane;
  $display->panels['whatisnew'][1] = 'new-dd0d9ecc-1598-452f-8cd1-20ef990eca94';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['home_page'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'lc_workspace_dashboard';
  $page->task = 'page';
  $page->admin_title = 'lc_workspace_dashboard';
  $page->admin_description = '';
  $page->path = 'learning-communities/%node/dashboard';
  $page->access = array(
    'logic' => 'and',
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 3,
            1 => 4,
            2 => 7,
            3 => 8,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
  );
  $page->menu = array(
    'type' => 'tab',
    'title' => 'Dashboard',
    'name' => 'navigation',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array(
    'node' => array(
      'id' => 1,
      'identifier' => 'Node: ID',
      'name' => 'entity_id:node',
      'settings' => array(),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_lc_workspace_dashboard__panel_context_c163c5e9-39c1-4db8-8a60-17909b85c843';
  $handler->task = 'page';
  $handler->subtask = 'lc_workspace_dashboard';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'right-sidebar';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top_row' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'right' => NULL,
      'maincontent' => NULL,
      'rightsidebar' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title - Dashboard';
  $display->uuid = '9d449e80-6197-4c68-bacd-19f1133b0e05';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_lc_workspace_dashboard__panel_context_c163c5e9-39c1-4db8-8a60-17909b85c843';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-54b451e9-f7e4-4973-b413-1f1a926a1259';
  $pane->panel = 'maincontent';
  $pane->type = 'block';
  $pane->subtype = 'quicktabs-learning_community_recent';
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
  $pane->uuid = '54b451e9-f7e4-4973-b413-1f1a926a1259';
  $display->content['new-54b451e9-f7e4-4973-b413-1f1a926a1259'] = $pane;
  $display->panels['maincontent'][0] = 'new-54b451e9-f7e4-4973-b413-1f1a926a1259';
  $pane = new stdClass();
  $pane->pid = 'new-f4967803-fe01-4303-81be-2272a664f2df';
  $pane->panel = 'maincontent';
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
    'args' => '',
    'url' => '',
    'display' => 'block_1',
    'context' => array(
      0 => '',
      1 => '',
    ),
    'override_title' => 1,
    'override_title_text' => '%node:title Events',
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
  $pane->uuid = 'f4967803-fe01-4303-81be-2272a664f2df';
  $display->content['new-f4967803-fe01-4303-81be-2272a664f2df'] = $pane;
  $display->panels['maincontent'][1] = 'new-f4967803-fe01-4303-81be-2272a664f2df';
  $pane = new stdClass();
  $pane->pid = 'new-0d95fe4a-4fa5-481d-a883-115584980bb6';
  $pane->panel = 'rightsidebar';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'title members list',
    'title' => 'Members',
    'body' => '',
    'format' => 'raw_html',
    'substitute' => 1,
    'title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '0d95fe4a-4fa5-481d-a883-115584980bb6';
  $display->content['new-0d95fe4a-4fa5-481d-a883-115584980bb6'] = $pane;
  $display->panels['rightsidebar'][0] = 'new-0d95fe4a-4fa5-481d-a883-115584980bb6';
  $pane = new stdClass();
  $pane->pid = 'new-c337ae68-fd9b-4605-899f-da0298e1393d';
  $pane->panel = 'rightsidebar';
  $pane->type = 'views_panes';
  $pane->subtype = 'og_members-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => array(
      0 => 'argument_entity_id:node_1',
    ),
    'override_title' => 1,
    'override_title_text' => 'Members',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'sidebar-box',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'c337ae68-fd9b-4605-899f-da0298e1393d';
  $display->content['new-c337ae68-fd9b-4605-899f-da0298e1393d'] = $pane;
  $display->panels['rightsidebar'][1] = 'new-c337ae68-fd9b-4605-899f-da0298e1393d';
  $pane = new stdClass();
  $pane->pid = 'new-aef2f163-3dbb-433a-a7cb-f75ba21b5905';
  $pane->panel = 'rightsidebar';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'upcoming events title',
    'title' => '',
    'body' => '<h2 class="pane-title">Upcoming Events</h2>',
    'format' => 'full_html',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'aef2f163-3dbb-433a-a7cb-f75ba21b5905';
  $display->content['new-aef2f163-3dbb-433a-a7cb-f75ba21b5905'] = $pane;
  $display->panels['rightsidebar'][2] = 'new-aef2f163-3dbb-433a-a7cb-f75ba21b5905';
  $pane = new stdClass();
  $pane->pid = 'new-1b17a53a-94e5-44d9-a991-4ef8ee731e86';
  $pane->panel = 'rightsidebar';
  $pane->type = 'panels_mini';
  $pane->subtype = 'homepage_events';
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
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'sidebar-box',
  );
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '1b17a53a-94e5-44d9-a991-4ef8ee731e86';
  $display->content['new-1b17a53a-94e5-44d9-a991-4ef8ee731e86'] = $pane;
  $display->panels['rightsidebar'][3] = 'new-1b17a53a-94e5-44d9-a991-4ef8ee731e86';
  $pane = new stdClass();
  $pane->pid = 'new-4b881c97-028d-43f7-a321-754c08884544';
  $pane->panel = 'rightsidebar';
  $pane->type = 'panels_mini';
  $pane->subtype = 'clone_of_homepage_events';
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
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'sidebar-box',
  );
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '4b881c97-028d-43f7-a321-754c08884544';
  $display->content['new-4b881c97-028d-43f7-a321-754c08884544'] = $pane;
  $display->panels['rightsidebar'][4] = 'new-4b881c97-028d-43f7-a321-754c08884544';
  $pane = new stdClass();
  $pane->pid = 'new-71ee4f9a-5573-4115-8963-c9a2b56ccca0';
  $pane->panel = 'rightsidebar';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Learning Communities',
    'title' => '',
    'body' => '<h2 class="pane-title">Learning Communities</h2>',
    'format' => 'full_html',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = '71ee4f9a-5573-4115-8963-c9a2b56ccca0';
  $display->content['new-71ee4f9a-5573-4115-8963-c9a2b56ccca0'] = $pane;
  $display->panels['rightsidebar'][5] = 'new-71ee4f9a-5573-4115-8963-c9a2b56ccca0';
  $pane = new stdClass();
  $pane->pid = 'new-2268aa4f-da93-4812-a91f-a6de0bcf0b54';
  $pane->panel = 'rightsidebar';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-the-learning-communities';
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
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'sidebar-box',
  );
  $pane->extras = array();
  $pane->position = 6;
  $pane->locks = array();
  $pane->uuid = '2268aa4f-da93-4812-a91f-a6de0bcf0b54';
  $display->content['new-2268aa4f-da93-4812-a91f-a6de0bcf0b54'] = $pane;
  $display->panels['rightsidebar'][6] = 'new-2268aa4f-da93-4812-a91f-a6de0bcf0b54';
  $pane = new stdClass();
  $pane->pid = 'new-01b42589-f008-4213-bbc3-a5e40c3cd99c';
  $pane->panel = 'rightsidebar';
  $pane->type = 'views';
  $pane->subtype = 'lc_events';
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
    'context' => array(
      0 => '',
    ),
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
  $pane->position = 7;
  $pane->locks = array();
  $pane->uuid = '01b42589-f008-4213-bbc3-a5e40c3cd99c';
  $display->content['new-01b42589-f008-4213-bbc3-a5e40c3cd99c'] = $pane;
  $display->panels['rightsidebar'][7] = 'new-01b42589-f008-4213-bbc3-a5e40c3cd99c';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['lc_workspace_dashboard'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'lc_workspace_discussions';
  $page->task = 'page';
  $page->admin_title = 'Learning Communities Workspace - Discussions';
  $page->admin_description = '';
  $page->path = 'learning-communities/%node/discussions';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'php',
        'settings' => array(
          'description' => 'User in workspace?',
          'php' => '//Code to check if the user can see a group workspace landing page.  
//The user must be in the same group as the workspace itself.

// This is legacy code - it no longer works but keeping here for reference
/*	global $user;
	if ( $user->uid ) {
		$userGroups = array_keys($user->og_groups);
		if(sizeof($userGroups) >= 1){	
			if (arg(0) == \'learning-communities\') {
				if(arg(1) == \'lc-workspace\'){
					$groupid = arg(2);
					if(in_array($groupid, $userGroups)){
						return TRUE;
					}
				}
			}
		}
	}
	return FALSE; */
/*
// This code works with latest version of OG
	global $user;
	if (og_is_group_member(1549, $include_admins = TRUE, $uid = $user->uid)) {
		return TRUE;
	}
	else if (og_is_group_member(1550, $include_admins = TRUE, $uid = $user->uid)) {
		return TRUE;
	}
	else {
		return FALSE;
	}
*/
return TRUE;',
        ),
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'tab',
    'title' => 'Discussions',
    'name' => 'navigation',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array(
    'node' => array(
      'id' => 1,
      'identifier' => 'Node: ID',
      'name' => 'entity_id:node',
      'settings' => array(),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_lc_workspace_discussions__panel_context_d4a250db-cf98-4b53-b611-0065c9adf42f';
  $handler->task = 'page';
  $handler->subtask = 'lc_workspace_discussions';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'two_col_70_30';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title - Discussions';
  $display->uuid = 'ad34e37a-5f73-4703-8a15-2f9327bc2080';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_lc_workspace_discussions__panel_context_d4a250db-cf98-4b53-b611-0065c9adf42f';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-fcb9a57e-05ea-4737-9a59-3436f766c3d0';
  $pane->panel = 'left';
  $pane->type = 'views_panes';
  $pane->subtype = 'lc_content-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => array(
      0 => 'argument_entity_id:node_1',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'fcb9a57e-05ea-4737-9a59-3436f766c3d0';
  $display->content['new-fcb9a57e-05ea-4737-9a59-3436f766c3d0'] = $pane;
  $display->panels['left'][0] = 'new-fcb9a57e-05ea-4737-9a59-3436f766c3d0';
  $pane = new stdClass();
  $pane->pid = 'new-e79ae44e-6418-49e1-b7e1-17f096f52abd';
  $pane->panel = 'right';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Learning Communities Menu',
    'title' => 'Group Setions',
    'body' => '<ul class="menu">
<li class="menu__item is-leaf first leaf"><a href="/learning-communities/%node:nid/discussions" class="menu__link">Group Dashboard</a></li>
<li class="menu__item is-leaf"><a href="/learning-communities/%node:nid/discussions" class="menu__link"><strong>Discussions</strong></a></li>
<li class="menu__item is-leaf"><a href="/learning-communities/%node:nid/discussions" class="menu__link">Documents</a></li>
<li class="menu__item is-leaf"><a href="/learning-communities/%node:nid/discussions" class="menu__link">Stories</a></li>
<li class="menu__item is-leaf"><a href="/learning-communities/%node:nid/discussions" class="menu__link">Events</a></li>
<li class="menu__item is-leaf last leaf"><a href="/learning-communities/%node:nid/discussions" class="menu__link">Tasks</a></li>
</ul>',
    'format' => 'full_html',
    'substitute' => 1,
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
  $pane->uuid = 'e79ae44e-6418-49e1-b7e1-17f096f52abd';
  $display->content['new-e79ae44e-6418-49e1-b7e1-17f096f52abd'] = $pane;
  $display->panels['right'][0] = 'new-e79ae44e-6418-49e1-b7e1-17f096f52abd';
  $pane = new stdClass();
  $pane->pid = 'new-f9928fb1-3520-487a-8e49-5dd720c57524';
  $pane->panel = 'right';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'title' => '',
    'body' => '<div class="btn secondary"><a href="/node/add/lc-discussion">Start a New Discussion</a></div>',
    'format' => 'full_html',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'f9928fb1-3520-487a-8e49-5dd720c57524';
  $display->content['new-f9928fb1-3520-487a-8e49-5dd720c57524'] = $pane;
  $display->panels['right'][1] = 'new-f9928fb1-3520-487a-8e49-5dd720c57524';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['lc_workspace_discussions'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'lc_workspace_documents';
  $page->task = 'page';
  $page->admin_title = 'Learning Communities Workspace - Documents';
  $page->admin_description = '';
  $page->path = 'learning-communities/%node/documents';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'php',
        'settings' => array(
          'description' => 'User in workspace?',
          'php' => '//Code to check if the user can see a group workspace landing page.  
//The user must be in the same group as the workspace itself.

// This is legacy code - it no longer works but keeping here for reference
/*	global $user;
	if ( $user->uid ) {
		$userGroups = array_keys($user->og_groups);
		if(sizeof($userGroups) >= 1){	
			if (arg(0) == \'learning-communities\') {
				if(arg(1) == \'lc-workspace\'){
					$groupid = arg(2);
					if(in_array($groupid, $userGroups)){
						return TRUE;
					}
				}
			}
		}
	}
	return FALSE; */
/*
// This code works with latest version of OG
	global $user;
	if (og_is_group_member(1549, $include_admins = TRUE, $uid = $user->uid)) {
		return TRUE;
	}
	else if (og_is_group_member(1550, $include_admins = TRUE, $uid = $user->uid)) {
		return TRUE;
	}
	else {
		return FALSE;
	}
*/
return TRUE;',
        ),
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'tab',
    'title' => 'Documents',
    'name' => 'navigation',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array(
    'node' => array(
      'id' => 1,
      'identifier' => 'Node: ID',
      'name' => 'nid',
      'settings' => array(),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_lc_workspace_documents__panel_context_a4363e75-e164-4e78-8ead-27f380d7443f';
  $handler->task = 'page';
  $handler->subtask = 'lc_workspace_documents';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'two_col_70_30';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title - Documents';
  $display->uuid = '3f49eb7f-90ad-413a-b493-1991c52c1034';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_lc_workspace_documents__panel_context_a4363e75-e164-4e78-8ead-27f380d7443f';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-3b5f1394-5a71-42fb-9f4c-8e3702939902';
  $pane->panel = 'left';
  $pane->type = 'views_panes';
  $pane->subtype = 'lc_content-panel_pane_2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => array(
      0 => 'argument_nid_1',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '3b5f1394-5a71-42fb-9f4c-8e3702939902';
  $display->content['new-3b5f1394-5a71-42fb-9f4c-8e3702939902'] = $pane;
  $display->panels['left'][0] = 'new-3b5f1394-5a71-42fb-9f4c-8e3702939902';
  $pane = new stdClass();
  $pane->pid = 'new-69c64c46-f5ff-4a97-9d96-41e2e6357ea4';
  $pane->panel = 'right';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'title' => '',
    'body' => '<div class="btn secondary"><a href="/node/add/lc-document">Upload a Document</a></div>',
    'format' => 'full_html',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '69c64c46-f5ff-4a97-9d96-41e2e6357ea4';
  $display->content['new-69c64c46-f5ff-4a97-9d96-41e2e6357ea4'] = $pane;
  $display->panels['right'][0] = 'new-69c64c46-f5ff-4a97-9d96-41e2e6357ea4';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['lc_workspace_documents'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'lc_workspace_stories';
  $page->task = 'page';
  $page->admin_title = 'Learning Communities Workspace - Stories';
  $page->admin_description = 'Displays a groups\' list of stories, and allows the group to create a new story.';
  $page->path = 'learning-communities/%node/stories';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'php',
        'settings' => array(
          'description' => 'User in workspace?',
          'php' => 'return TRUE;',
        ),
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'tab',
    'title' => 'Stories',
    'name' => 'navigation',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array(
    'node' => array(
      'id' => 1,
      'identifier' => 'Node: ID',
      'name' => 'nid',
      'settings' => array(),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_lc_workspace_stories__panel_context_9d146b29-aa63-4c2a-8761-b92962fe2a5c';
  $handler->task = 'page';
  $handler->subtask = 'lc_workspace_stories';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'two_col_70_30';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title - Stories';
  $display->uuid = '5720dbde-f8fa-4b08-b35b-2420cc9e09f0';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_lc_workspace_stories__panel_context_9d146b29-aa63-4c2a-8761-b92962fe2a5c';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-60b51fa7-6bac-4331-a521-6ff755ca3fd5';
  $pane->panel = 'left';
  $pane->type = 'views_panes';
  $pane->subtype = 'lc_content-panel_pane_3';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => array(
      0 => 'argument_nid_1',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '60b51fa7-6bac-4331-a521-6ff755ca3fd5';
  $display->content['new-60b51fa7-6bac-4331-a521-6ff755ca3fd5'] = $pane;
  $display->panels['left'][0] = 'new-60b51fa7-6bac-4331-a521-6ff755ca3fd5';
  $pane = new stdClass();
  $pane->pid = 'new-ae746d50-420d-4918-b7ef-9514d65f548e';
  $pane->panel = 'right';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'title' => '',
    'body' => '<div class="btn secondary"><a href="/node/add/lc-story">Create a Story</a></div>',
    'format' => 'full_html',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'ae746d50-420d-4918-b7ef-9514d65f548e';
  $display->content['new-ae746d50-420d-4918-b7ef-9514d65f548e'] = $pane;
  $display->panels['right'][0] = 'new-ae746d50-420d-4918-b7ef-9514d65f548e';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['lc_workspace_stories'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'lc_workspace_tasks';
  $page->task = 'page';
  $page->admin_title = 'Learning Communities Workspace - Tasks';
  $page->admin_description = '';
  $page->path = 'learning-communities/%node/tasks';
  $page->access = array(
    'plugins' => array(),
    'logic' => 'and',
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'tab',
    'title' => 'Tasks',
    'name' => 'navigation',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array(
    'node' => array(
      'id' => 1,
      'identifier' => 'Node: ID',
      'name' => 'nid',
      'settings' => array(),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_lc_workspace_tasks__panel_context_4ff5cda0-8cde-43cc-8e72-7bec760dcf5a';
  $handler->task = 'page';
  $handler->subtask = 'lc_workspace_tasks';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'two_col_70_30';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title - Tasks';
  $display->uuid = 'b2fcae3c-4c66-4e95-a49f-aabc42809003';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_lc_workspace_tasks__panel_context_4ff5cda0-8cde-43cc-8e72-7bec760dcf5a';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-42bfde61-58d1-46ec-963c-f3e979100811';
  $pane->panel = 'left';
  $pane->type = 'views_panes';
  $pane->subtype = 'lc_content-panel_pane_4';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => array(
      0 => 'argument_nid_1',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '42bfde61-58d1-46ec-963c-f3e979100811';
  $display->content['new-42bfde61-58d1-46ec-963c-f3e979100811'] = $pane;
  $display->panels['left'][0] = 'new-42bfde61-58d1-46ec-963c-f3e979100811';
  $pane = new stdClass();
  $pane->pid = 'new-4f429856-4476-494b-bdbd-2f8d56860d93';
  $pane->panel = 'right';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'title' => '',
    'body' => '<div class="btn secondary"><a href="/node/add/lc-task">Create a Task</a></div>',
    'format' => 'full_html',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '4f429856-4476-494b-bdbd-2f8d56860d93';
  $display->content['new-4f429856-4476-494b-bdbd-2f8d56860d93'] = $pane;
  $display->panels['right'][0] = 'new-4f429856-4476-494b-bdbd-2f8d56860d93';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['lc_workspace_tasks'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'learning_communities_workspace';
  $page->task = 'page';
  $page->admin_title = 'Learning Communities Workspace';
  $page->admin_description = '';
  $page->path = 'learning-communities/lc-workspace';
  $page->access = array(
    'plugins' => array(),
    'logic' => 'and',
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_learning_communities_workspace__panel_context_e2d84f55-b7e3-48fb-8607-c6a562e0bb75';
  $handler->task = 'page';
  $handler->subtask = 'learning_communities_workspace';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Admin Dashboard',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'learning-communities/lc-workspace',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'home_page';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top_row' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Learning Communities Workspace Dashboard';
  $display->uuid = '7e69861d-c7e7-43b1-b2c8-8a4b75664a74';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_learning_communities_workspace__panel_context_e2d84f55-b7e3-48fb-8607-c6a562e0bb75';
  $display->content = array();
  $display->panels = array();
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['learning_communities_workspace'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'learning_communities_workspace_events';
  $page->task = 'page';
  $page->admin_title = 'Learning Communities Workspace - Events';
  $page->admin_description = '';
  $page->path = 'learning-communities/%node/events';
  $page->access = array(
    'plugins' => array(),
    'logic' => 'and',
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'tab',
    'title' => 'Events',
    'name' => 'navigation',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array(
    'node' => array(
      'id' => 1,
      'identifier' => 'Node: ID',
      'name' => 'nid',
      'settings' => array(),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_learning_communities_workspace_events__panel_context_93217ed7-5d2f-4d89-a34b-ad6d28faee8b';
  $handler->task = 'page';
  $handler->subtask = 'learning_communities_workspace_events';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'two_col_70_30';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title - Tasks';
  $display->uuid = 'b2fcae3c-4c66-4e95-a49f-aabc42809003';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_learning_communities_workspace_events__panel_context_93217ed7-5d2f-4d89-a34b-ad6d28faee8b';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-c6124f59-85bf-4dbe-9400-52531fc569e6';
  $pane->panel = 'left';
  $pane->type = 'views';
  $pane->subtype = 'lc_calendar';
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
    'args' => '',
    'url' => '',
    'display' => 'block_1',
    'context' => array(
      0 => '',
    ),
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
  $pane->uuid = 'c6124f59-85bf-4dbe-9400-52531fc569e6';
  $display->content['new-c6124f59-85bf-4dbe-9400-52531fc569e6'] = $pane;
  $display->panels['left'][0] = 'new-c6124f59-85bf-4dbe-9400-52531fc569e6';
  $pane = new stdClass();
  $pane->pid = 'new-4fc11b1e-a5ab-4c01-b96c-08d3ec77a25f';
  $pane->panel = 'right';
  $pane->type = 'block';
  $pane->subtype = 'block-17';
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
  $pane->uuid = '4fc11b1e-a5ab-4c01-b96c-08d3ec77a25f';
  $display->content['new-4fc11b1e-a5ab-4c01-b96c-08d3ec77a25f'] = $pane;
  $display->panels['right'][0] = 'new-4fc11b1e-a5ab-4c01-b96c-08d3ec77a25f';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['learning_communities_workspace_events'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'mentorship';
  $page->task = 'page';
  $page->admin_title = 'Mentorship';
  $page->admin_description = '';
  $page->path = 'mentorship';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_mentorship__panel_context_3f8ac1a9-c8cb-458a-8ab3-df109f5314e6';
  $handler->task = 'page';
  $handler->subtask = 'mentorship';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Homepage - Public',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'right-sidebar';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
      'maincontent' => NULL,
      'rightsidebar' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Mentorship';
  $display->uuid = 'dad869bd-d889-4c22-bac4-1ba6aebb80a9';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_mentorship__panel_context_3f8ac1a9-c8cb-458a-8ab3-df109f5314e6';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-02b2997d-22c9-4639-a004-04e02d8362fa';
  $pane->panel = 'maincontent';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Mentorship Main Content',
    'title' => '',
    'body' => 'Between September 2011 and February 2013, the NCI implemented a pilot mentorship program with 6 mentee-mentor pairs as part of Research to Reality (R2R). This pilot has concluded and is currently being evaluated. With the conclusion of this pilot, the mentees are no longer updating these posts with new monthly updates, but we encourage you to read through the mentee stories to learn more about each pair\'s project and engage in a discussion with the broader R2R community on these topics.',
    'format' => 'full_html',
    'substitute' => TRUE,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
    'style' => 'default',
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'jumbotron',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '02b2997d-22c9-4639-a004-04e02d8362fa';
  $display->content['new-02b2997d-22c9-4639-a004-04e02d8362fa'] = $pane;
  $display->panels['maincontent'][0] = 'new-02b2997d-22c9-4639-a004-04e02d8362fa';
  $pane = new stdClass();
  $pane->pid = 'new-c1705614-f530-441d-b51b-aa6344a9ad16';
  $pane->panel = 'maincontent';
  $pane->type = 'views';
  $pane->subtype = 'mentorship';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '1',
    'pager_id' => '0',
    'offset' => '1',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'page_2',
    'override_title' => 1,
    'override_title_text' => 'Mentorship Highlight',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
    'style' => 'default',
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'mentor-highlight',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'c1705614-f530-441d-b51b-aa6344a9ad16';
  $display->content['new-c1705614-f530-441d-b51b-aa6344a9ad16'] = $pane;
  $display->panels['maincontent'][1] = 'new-c1705614-f530-441d-b51b-aa6344a9ad16';
  $pane = new stdClass();
  $pane->pid = 'new-5139adaf-08eb-49aa-bb3f-2fa370407f68';
  $pane->panel = 'maincontent';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'More Stories from our Mentor/Mentee Pairs',
    'title' => '',
    'body' => '<h2 class="pane-title">More Stories From Our Mentor/Mentee Pairs</h2>',
    'format' => 'full_html',
    'substitute' => TRUE,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '5139adaf-08eb-49aa-bb3f-2fa370407f68';
  $display->content['new-5139adaf-08eb-49aa-bb3f-2fa370407f68'] = $pane;
  $display->panels['maincontent'][2] = 'new-5139adaf-08eb-49aa-bb3f-2fa370407f68';
  $pane = new stdClass();
  $pane->pid = 'new-7cc39b43-2cb1-45e8-aad3-18a97bec359c';
  $pane->panel = 'maincontent';
  $pane->type = 'views';
  $pane->subtype = 'mentorship';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '5',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'page_1',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'sidebar-box',
  );
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '7cc39b43-2cb1-45e8-aad3-18a97bec359c';
  $display->content['new-7cc39b43-2cb1-45e8-aad3-18a97bec359c'] = $pane;
  $display->panels['maincontent'][3] = 'new-7cc39b43-2cb1-45e8-aad3-18a97bec359c';
  $pane = new stdClass();
  $pane->pid = 'new-7912f069-f226-416f-9743-b58cb8b7792e';
  $pane->panel = 'rightsidebar';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'The Mentor/Mentee Pairs',
    'title' => '',
    'body' => '<h2 class="pane-title">The Mentor/Mentee Pairs</h2>',
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
  $pane->uuid = '7912f069-f226-416f-9743-b58cb8b7792e';
  $display->content['new-7912f069-f226-416f-9743-b58cb8b7792e'] = $pane;
  $display->panels['rightsidebar'][0] = 'new-7912f069-f226-416f-9743-b58cb8b7792e';
  $pane = new stdClass();
  $pane->pid = 'new-a74244f9-c3ee-473b-9585-3fe2031356f0';
  $pane->panel = 'rightsidebar';
  $pane->type = 'views';
  $pane->subtype = 'mentorship';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '10',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'default',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
    'style' => 'default',
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'sidebar-box mentor-pairs',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'a74244f9-c3ee-473b-9585-3fe2031356f0';
  $display->content['new-a74244f9-c3ee-473b-9585-3fe2031356f0'] = $pane;
  $display->panels['rightsidebar'][1] = 'new-a74244f9-c3ee-473b-9585-3fe2031356f0';
  $pane = new stdClass();
  $pane->pid = 'new-842eba09-7a7f-4a9c-9227-348e4ca8340f';
  $pane->panel = 'rightsidebar';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'About the R2R Mentorship Program',
    'title' => '',
    'body' => '<h2 class="pane-title">About the R2R Mentorship Program</h2>',
    'format' => 'full_html',
    'substitute' => TRUE,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '842eba09-7a7f-4a9c-9227-348e4ca8340f';
  $display->content['new-842eba09-7a7f-4a9c-9227-348e4ca8340f'] = $pane;
  $display->panels['rightsidebar'][2] = 'new-842eba09-7a7f-4a9c-9227-348e4ca8340f';
  $pane = new stdClass();
  $pane->pid = 'new-bb3e31d7-47ae-4385-b7b0-de281b7b01fe';
  $pane->panel = 'rightsidebar';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'About the R2R Mentorship Program',
    'title' => '',
    'body' => '<p>The purpose of the Program is to help build the capacity of cancer control practitioners to effectively navigate the complex, "real world" context in which evidence-based decision making occurs.</p><p><a class="btn btn-sm" href="/mentorship/about">Find Out More</a></p>',
    'format' => 'full_html',
    'substitute' => TRUE,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
    'style' => 'default',
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'sidebar-box',
  );
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'bb3e31d7-47ae-4385-b7b0-de281b7b01fe';
  $display->content['new-bb3e31d7-47ae-4385-b7b0-de281b7b01fe'] = $pane;
  $display->panels['rightsidebar'][3] = 'new-bb3e31d7-47ae-4385-b7b0-de281b7b01fe';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-02b2997d-22c9-4639-a004-04e02d8362fa';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['mentorship'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'mentorship_pair';
  $page->task = 'page';
  $page->admin_title = 'Mentorship Pair';
  $page->admin_description = '';
  $page->path = 'mentorship/pairs';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_mentorship_pair__panel_context_8976b234-7543-4919-9e20-a57a20b14ccc';
  $handler->task = 'page';
  $handler->subtask = 'mentorship_pair';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Membership Pair',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'right-sidebar';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
      'maincontent' => NULL,
      'rightsidebar' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'f7bfe900-56dd-4ace-81f2-552dfffe2279';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_mentorship_pair__panel_context_8976b234-7543-4919-9e20-a57a20b14ccc';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-868cbcdd-1dda-4f09-a437-f962bd9d105b';
  $pane->panel = 'maincontent';
  $pane->type = 'views';
  $pane->subtype = 'mentorship_pair';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 1,
    'nodes_per_page' => '1',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'default',
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
  $pane->uuid = '868cbcdd-1dda-4f09-a437-f962bd9d105b';
  $display->content['new-868cbcdd-1dda-4f09-a437-f962bd9d105b'] = $pane;
  $display->panels['maincontent'][0] = 'new-868cbcdd-1dda-4f09-a437-f962bd9d105b';
  $pane = new stdClass();
  $pane->pid = 'new-163469f6-6a80-469e-8bac-6de36aa79b07';
  $pane->panel = 'rightsidebar';
  $pane->type = 'views';
  $pane->subtype = 'mentorship';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '10',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'page',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
    'style' => 'rounded_corners',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '163469f6-6a80-469e-8bac-6de36aa79b07';
  $display->content['new-163469f6-6a80-469e-8bac-6de36aa79b07'] = $pane;
  $display->panels['rightsidebar'][0] = 'new-163469f6-6a80-469e-8bac-6de36aa79b07';
  $pane = new stdClass();
  $pane->pid = 'new-b2964ee3-54f3-4031-a173-55478315b817';
  $pane->panel = 'rightsidebar';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'About the R2R Mentorship Program',
    'title' => 'About the R2R Mentorship Program',
    'body' => '<p>The purpose of the Program is to help build the capacity of cancer control practitioners to effectively navigate the complex, "real world" context in which evidence-based decision making occurs.</p><p><a class="btn" href="/mentorship/about">Find Out More</a></p>',
    'format' => 'full_html',
    'substitute' => TRUE,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
    'style' => 'rounded_corners',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'b2964ee3-54f3-4031-a173-55478315b817';
  $display->content['new-b2964ee3-54f3-4031-a173-55478315b817'] = $pane;
  $display->panels['rightsidebar'][1] = 'new-b2964ee3-54f3-4031-a173-55478315b817';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-868cbcdd-1dda-4f09-a437-f962bd9d105b';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['mentorship_pair'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'new_cyber_seminar_page';
  $page->task = 'page';
  $page->admin_title = 'New Cyber Seminar Page';
  $page->admin_description = 'A cyber seminar page that lets users filter by date and keyword';
  $page->path = 'cyber-seminars';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_new_cyber_seminar_page__panel';
  $handler->task = 'page';
  $handler->subtask = 'new_cyber_seminar_page';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
  );
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
  $display->uuid = 'eef1c776-88df-41a1-bd16-9b9c481ff024';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_new_cyber_seminar_page__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-4d9cf838-6433-4f29-b8a7-264b65bc4fe0';
  $pane->panel = 'middle';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Title',
    'title' => '',
    'body' => '<h1>Cyber Seminars</h1>',
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
  $pane->uuid = '4d9cf838-6433-4f29-b8a7-264b65bc4fe0';
  $display->content['new-4d9cf838-6433-4f29-b8a7-264b65bc4fe0'] = $pane;
  $display->panels['middle'][0] = 'new-4d9cf838-6433-4f29-b8a7-264b65bc4fe0';
  $pane = new stdClass();
  $pane->pid = 'new-b7c94fb5-9591-45df-a8d1-7428d5cc2466';
  $pane->panel = 'middle';
  $pane->type = 'views';
  $pane->subtype = 'cyber_seminars';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 1,
    'nodes_per_page' => '1',
    'pager_id' => '0',
    'offset' => '0',
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
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'upcoming-cyberseminars',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'b7c94fb5-9591-45df-a8d1-7428d5cc2466';
  $display->content['new-b7c94fb5-9591-45df-a8d1-7428d5cc2466'] = $pane;
  $display->panels['middle'][1] = 'new-b7c94fb5-9591-45df-a8d1-7428d5cc2466';
  $pane = new stdClass();
  $pane->pid = 'new-24a29062-2c8e-4635-9118-3ce77857933e';
  $pane->panel = 'middle';
  $pane->type = 'views';
  $pane->subtype = 'cyber_seminars';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 1,
    'nodes_per_page' => '1',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
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
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'archive-cyberseminars',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '24a29062-2c8e-4635-9118-3ce77857933e';
  $display->content['new-24a29062-2c8e-4635-9118-3ce77857933e'] = $pane;
  $display->panels['middle'][2] = 'new-24a29062-2c8e-4635-9118-3ce77857933e';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['new_cyber_seminar_page'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'newsletter_signup';
  $page->task = 'page';
  $page->admin_title = 'Newsletter Signup';
  $page->admin_description = '';
  $page->path = 'NewsletterSignup';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_newsletter_signup__panel';
  $handler->task = 'page';
  $handler->subtask = 'newsletter_signup';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(
      0 => array(
        'identifier' => 'User',
        'keyword' => 'user',
        'name' => 'user',
        'type' => 'current',
        'uid' => '',
        'id' => 1,
      ),
    ),
    'relationships' => array(
      0 => array(
        'identifier' => 'OG membership from a group node and user',
        'keyword' => 'og_membership',
        'name' => 'og_membership_from_group_and_user',
        'context' => array(
          1 => 'context_user_1',
        ),
        'id' => 1,
      ),
    ),
    'name' => 'panel',
  );
  $display = new panels_display();
  $display->layout = 'single-column';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'maincontent' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '85e4374b-d2bf-4225-85dd-dc244c0b3ece';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_newsletter_signup__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-400fc604-86aa-40cd-a3f6-6dcf2db6b07b';
  $pane->panel = 'maincontent';
  $pane->type = 'block';
  $pane->subtype = 'simplenews-13';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
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
  $pane->uuid = '400fc604-86aa-40cd-a3f6-6dcf2db6b07b';
  $display->content['new-400fc604-86aa-40cd-a3f6-6dcf2db6b07b'] = $pane;
  $display->panels['maincontent'][0] = 'new-400fc604-86aa-40cd-a3f6-6dcf2db6b07b';
  $pane = new stdClass();
  $pane->pid = 'new-6f1a234a-8140-4141-ba14-5e6c3012e77c';
  $pane->panel = 'maincontent';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'title' => '',
    'body' => '<div>
<p>&nbsp;</p>
<p>&nbsp;</p>
</div>',
    'format' => 'raw_html',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '6f1a234a-8140-4141-ba14-5e6c3012e77c';
  $display->content['new-6f1a234a-8140-4141-ba14-5e6c3012e77c'] = $pane;
  $display->panels['maincontent'][1] = 'new-6f1a234a-8140-4141-ba14-5e6c3012e77c';
  $pane = new stdClass();
  $pane->pid = 'new-fe08ca3e-a345-4309-ae9f-90a83b98bd41';
  $pane->panel = 'maincontent';
  $pane->type = 'block';
  $pane->subtype = 'simplenews-23';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'php',
        'settings' => array(
          'description' => '',
          'php' => 'foreach ($contexts["context_user_1"]->data->og_user_node["und"] as $val) {
	if($val["target_id"] == "1642")
		return true;
}
return false;',
        ),
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
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
  $pane->uuid = 'fe08ca3e-a345-4309-ae9f-90a83b98bd41';
  $display->content['new-fe08ca3e-a345-4309-ae9f-90a83b98bd41'] = $pane;
  $display->panels['maincontent'][2] = 'new-fe08ca3e-a345-4309-ae9f-90a83b98bd41';
  $pane = new stdClass();
  $pane->pid = 'new-fb98d21c-bcce-43a1-b073-6aecbe0e46d6';
  $pane->panel = 'maincontent';
  $pane->type = 'block';
  $pane->subtype = 'simplenews-20';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'php',
        'settings' => array(
          'description' => '',
          'php' => 'foreach ($contexts["context_user_1"]->data->og_user_node["und"] as $val) {
	if($val["target_id"] == "1")
		return true;
}
return false;',
        ),
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
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
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'fb98d21c-bcce-43a1-b073-6aecbe0e46d6';
  $display->content['new-fb98d21c-bcce-43a1-b073-6aecbe0e46d6'] = $pane;
  $display->panels['maincontent'][3] = 'new-fb98d21c-bcce-43a1-b073-6aecbe0e46d6';
  $pane = new stdClass();
  $pane->pid = 'new-a7e4a04a-f265-4e7c-9d16-fdc6b53b348d';
  $pane->panel = 'maincontent';
  $pane->type = 'block';
  $pane->subtype = 'simplenews-21';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'php',
        'settings' => array(
          'description' => '',
          'php' => 'foreach ($contexts["context_user_1"]->data->og_user_node["und"] as $val) {
	if($val["target_id"] == "2")
		return true;
}
return false;',
        ),
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
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
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = 'a7e4a04a-f265-4e7c-9d16-fdc6b53b348d';
  $display->content['new-a7e4a04a-f265-4e7c-9d16-fdc6b53b348d'] = $pane;
  $display->panels['maincontent'][4] = 'new-a7e4a04a-f265-4e7c-9d16-fdc6b53b348d';
  $pane = new stdClass();
  $pane->pid = 'new-31921ac1-a781-490d-8171-c0ef7f0b8810';
  $pane->panel = 'maincontent';
  $pane->type = 'block';
  $pane->subtype = 'simplenews-19';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'php',
        'settings' => array(
          'description' => '',
          'php' => 'foreach ($contexts["context_user_1"]->data->og_user_node["und"] as $val) {
	if($val["target_id"] == "1641")
		return true;
}
return false;',
        ),
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
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
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = '31921ac1-a781-490d-8171-c0ef7f0b8810';
  $display->content['new-31921ac1-a781-490d-8171-c0ef7f0b8810'] = $pane;
  $display->panels['maincontent'][5] = 'new-31921ac1-a781-490d-8171-c0ef7f0b8810';
  $pane = new stdClass();
  $pane->pid = 'new-f18e02c3-bec3-43c1-b9f1-6921bed42b02';
  $pane->panel = 'maincontent';
  $pane->type = 'block';
  $pane->subtype = 'simplenews-24';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'php',
        'settings' => array(
          'description' => '',
          'php' => 'foreach ($contexts["context_user_1"]->data->og_user_node["und"] as $val) {
	if($val["target_id"] == "3")
		return true;
}
return false;',
        ),
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
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
  $pane->position = 6;
  $pane->locks = array();
  $pane->uuid = 'f18e02c3-bec3-43c1-b9f1-6921bed42b02';
  $display->content['new-f18e02c3-bec3-43c1-b9f1-6921bed42b02'] = $pane;
  $display->panels['maincontent'][6] = 'new-f18e02c3-bec3-43c1-b9f1-6921bed42b02';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-fe08ca3e-a345-4309-ae9f-90a83b98bd41';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['newsletter_signup'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'registered_successfully';
  $page->task = 'page';
  $page->admin_title = 'Registered Successfully';
  $page->admin_description = 'A message to explain to a newly registered user that they must wait for their account to be verified';
  $page->path = 'RegisterSuccess';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_registered_successfully__panel_context_26483611-378e-40cd-8d18-071cbb97a4e0';
  $handler->task = 'page';
  $handler->subtask = 'registered_successfully';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
  );
  $display = new panels_display();
  $display->layout = 'single-column';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'maincontent' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'a29451be-e60a-4998-b919-1577ef8cafd1';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_registered_successfully__panel_context_26483611-378e-40cd-8d18-071cbb97a4e0';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-640b3191-261f-4cb1-8043-4d55039f3463';
  $pane->panel = 'maincontent';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Registered Successfully Block',
    'title' => 'You Registered Successfully',
    'body' => '<p>Your account is awaiting administrator approval. <br> <a href="/">Return to the Research to Reality Homepage</a></p>',
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
  $pane->uuid = '640b3191-261f-4cb1-8043-4d55039f3463';
  $display->content['new-640b3191-261f-4cb1-8043-4d55039f3463'] = $pane;
  $display->panels['maincontent'][0] = 'new-640b3191-261f-4cb1-8043-4d55039f3463';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-640b3191-261f-4cb1-8043-4d55039f3463';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['registered_successfully'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'rwb_event_and_seminar_calendar';
  $page->task = 'page';
  $page->admin_title = 'RWB Event and Seminar Calendar';
  $page->admin_description = 'calendar for both Event and Seminar';
  $page->path = 'rwb_eventseminar_calendar';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_rwb_event_and_seminar_calendar__panel_context_28bf04aa-a6e7-4e55-b38f-361e23808dd1';
  $handler->task = 'page';
  $handler->subtask = 'rwb_event_and_seminar_calendar';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'RWB Calendar Page Title',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
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
  $display->title = 'Events & Cyber Seminar Calendar';
  $display->uuid = 'c7136fb8-abc0-4938-9cee-fcb57494b13c';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_rwb_event_and_seminar_calendar__panel_context_28bf04aa-a6e7-4e55-b38f-361e23808dd1';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-c8259e05-1348-489c-ae96-e03c78856f2b';
  $pane->panel = 'middle';
  $pane->type = 'views';
  $pane->subtype = 'rwb_event_seminar_calendar';
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
    'args' => '',
    'url' => '',
    'display' => 'page_1',
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
  $pane->uuid = 'c8259e05-1348-489c-ae96-e03c78856f2b';
  $display->content['new-c8259e05-1348-489c-ae96-e03c78856f2b'] = $pane;
  $display->panels['middle'][0] = 'new-c8259e05-1348-489c-ae96-e03c78856f2b';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-c8259e05-1348-489c-ae96-e03c78856f2b';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['rwb_event_and_seminar_calendar'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'user_login';
  $page->task = 'page';
  $page->admin_title = 'User Login';
  $page->admin_description = 'User Login page (/user)';
  $page->path = 'user-login';
  $page->access = array(
    'plugins' => array(),
    'logic' => 'and',
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_user_login__panel';
  $handler->task = 'page';
  $handler->subtask = 'user_login';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 1,
            ),
          ),
          'context' => 'logged-in-user',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'right-sidebar';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'leftsidebar' => NULL,
      'maincontent' => NULL,
      'rightsidebar' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Log In';
  $display->uuid = '00690194-7a66-46ac-9857-d9bc164721ef';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_user_login__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-38180085-0f23-4f9b-bd28-be4db2cf2d49';
  $pane->panel = 'maincontent';
  $pane->type = 'block';
  $pane->subtype = 'user-login';
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
  $pane->uuid = '38180085-0f23-4f9b-bd28-be4db2cf2d49';
  $display->content['new-38180085-0f23-4f9b-bd28-be4db2cf2d49'] = $pane;
  $display->panels['maincontent'][0] = 'new-38180085-0f23-4f9b-bd28-be4db2cf2d49';
  $pane = new stdClass();
  $pane->pid = 'new-441c2cb6-c790-4872-bac3-7bbd33f70cbe';
  $pane->panel = 'rightsidebar';
  $pane->type = 'block';
  $pane->subtype = 'connector-one_click_block';
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
  $pane->uuid = '441c2cb6-c790-4872-bac3-7bbd33f70cbe';
  $display->content['new-441c2cb6-c790-4872-bac3-7bbd33f70cbe'] = $pane;
  $display->panels['rightsidebar'][0] = 'new-441c2cb6-c790-4872-bac3-7bbd33f70cbe';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-441c2cb6-c790-4872-bac3-7bbd33f70cbe';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_user_login__panel_context_d742229d-836a-4aa6-a67e-1c240a1ce730';
  $handler->task = 'page';
  $handler->subtask = 'user_login';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'redirect user',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 1,
            ),
          ),
          'context' => 'logged-in-user',
          'not' => TRUE,
        ),
      ),
      'logic' => 'or',
    ),
  );
  $display = new panels_display();
  $display->layout = 'single-column';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'maincontent' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'User Login';
  $display->uuid = '3394cc48-4543-49cc-8d3d-14001e0d7455';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_user_login__panel_context_d742229d-836a-4aa6-a67e-1c240a1ce730';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-87e52f2e-a7b5-40f0-b55c-85810f902371';
  $pane->panel = 'maincontent';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Redirect to homepage',
    'title' => '',
    'body' => '<script>
(function() {
window.location.href = "/";
})();
</script>',
    'format' => 'raw_html',
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
  $pane->uuid = '87e52f2e-a7b5-40f0-b55c-85810f902371';
  $display->content['new-87e52f2e-a7b5-40f0-b55c-85810f902371'] = $pane;
  $display->panels['maincontent'][0] = 'new-87e52f2e-a7b5-40f0-b55c-85810f902371';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['user_login'] = $page;

  return $pages;

}
