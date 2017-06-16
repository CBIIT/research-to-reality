<?php
/**
 * @file
 * rtr_menus.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function rtr_menus_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_about:about.
  $menu_links['main-menu_about:about'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'about',
    'router_path' => 'about',
    'link_title' => 'About',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_about:about',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -43,
    'customized' => 1,
  );
  // Exported menu link: main-menu_ccc-hpv-workshop-learning-community:learning-communities/ccchpv.
  $menu_links['main-menu_ccc-hpv-workshop-learning-community:learning-communities/ccchpv'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'learning-communities/ccchpv',
    'router_path' => 'learning-communities',
    'link_title' => 'CCC-HPV Workshop Learning Community',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_ccc-hpv-workshop-learning-community:learning-communities/ccchpv',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'main-menu_learning-communities:learning-communities',
  );
  // Exported menu link: main-menu_crc-screening-workgroup-learning-community:learning-communities/crc.
  $menu_links['main-menu_crc-screening-workgroup-learning-community:learning-communities/crc'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'learning-communities/crc',
    'router_path' => 'learning-communities',
    'link_title' => 'CRC Screening Workgroup Learning Community',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_crc-screening-workgroup-learning-community:learning-communities/crc',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'parent_identifier' => 'main-menu_learning-communities:learning-communities',
  );
  // Exported menu link: main-menu_cyber-seminars:cyber-seminars.
  $menu_links['main-menu_cyber-seminars:cyber-seminars'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'cyber-seminars',
    'router_path' => 'cyber-seminars',
    'link_title' => 'Cyber Seminars',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_cyber-seminars:cyber-seminars',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: main-menu_discussions:discussions.
  $menu_links['main-menu_discussions:discussions'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'discussions',
    'router_path' => 'Discussions',
    'link_title' => 'Discussions',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_discussions:discussions',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: main-menu_events:events.
  $menu_links['main-menu_events:events'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'events',
    'router_path' => 'events',
    'link_title' => 'Events',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_events:events',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
  );
  // Exported menu link: main-menu_featured-partners:featured-partners.
  $menu_links['main-menu_featured-partners:featured-partners'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'featured-partners',
    'router_path' => 'featured-partners',
    'link_title' => 'Featured Partners',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_featured-partners:featured-partners',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: main-menu_healthcare-teams-in-cancer-care-delivery:learning-communities/nci.
  $menu_links['main-menu_healthcare-teams-in-cancer-care-delivery:learning-communities/nci'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'learning-communities/nci',
    'router_path' => 'learning-communities',
    'link_title' => 'Healthcare Teams in Cancer Care Delivery',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_healthcare-teams-in-cancer-care-delivery:learning-communities/nci',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_learning-communities:learning-communities',
  );
  // Exported menu link: main-menu_home:<front>.
  $menu_links['main-menu_home:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home',
    'options' => array(
      'identifier' => 'main-menu_home:<front>',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: main-menu_hpv-vaccine-uptake-learning-community:learning-communities/hpv.
  $menu_links['main-menu_hpv-vaccine-uptake-learning-community:learning-communities/hpv'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'learning-communities/hpv',
    'router_path' => 'learning-communities',
    'link_title' => 'HPV Vaccine Uptake Learning Community',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_hpv-vaccine-uptake-learning-community:learning-communities/hpv',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'main-menu_learning-communities:learning-communities',
  );
  // Exported menu link: main-menu_learning-communities:learning-communities.
  $menu_links['main-menu_learning-communities:learning-communities'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'learning-communities',
    'router_path' => 'learning-communities',
    'link_title' => 'Learning Communities',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_learning-communities:learning-communities',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: main-menu_mentorship:mentorship.
  $menu_links['main-menu_mentorship:mentorship'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'mentorship',
    'router_path' => 'mentorship',
    'link_title' => 'Mentorship',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_mentorship:mentorship',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'main-menu_learning-communities:learning-communities',
  );
  // Exported menu link: main-menu_my-own-health-report-learning-community:learning-communities/mohr.
  $menu_links['main-menu_my-own-health-report-learning-community:learning-communities/mohr'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'learning-communities/mohr',
    'router_path' => 'learning-communities',
    'link_title' => 'My Own Health Report Learning Community',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_my-own-health-report-learning-community:learning-communities/mohr',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
    'parent_identifier' => 'main-menu_learning-communities:learning-communities',
  );
  // Exported menu link: main-menu_population-health-assessment-in-cancer-catchment-areas-grantee-learning-community:learning-communities/pha.
  $menu_links['main-menu_population-health-assessment-in-cancer-catchment-areas-grantee-learning-community:learning-communities/pha'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'learning-communities/pha',
    'router_path' => 'learning-communities',
    'link_title' => 'Population Health Assessment in Cancer Catchment Areas Grantee Learning Community',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_population-health-assessment-in-cancer-catchment-areas-grantee-learning-community:learning-communities/pha',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_learning-communities:learning-communities',
  );
  // Exported menu link: main-menu_the-qualris-group-learning-community:learning-communities/qualris.
  $menu_links['main-menu_the-qualris-group-learning-community:learning-communities/qualris'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'learning-communities/qualris',
    'router_path' => 'learning-communities',
    'link_title' => 'The QUALRIS Group Learning Community',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_the-qualris-group-learning-community:learning-communities/qualris',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
    'parent_identifier' => 'main-menu_learning-communities:learning-communities',
  );
  // Exported menu link: menu-categories_collaborations:discussions/collaborations.
  $menu_links['menu-categories_collaborations:discussions/collaborations'] = array(
    'menu_name' => 'menu-categories',
    'link_path' => 'discussions/collaborations',
    'router_path' => 'discussions',
    'link_title' => 'Collaborations',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-categories_collaborations:discussions/collaborations',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
  );
  // Exported menu link: menu-categories_cyber-seminars:discussions/cyber-seminars.
  $menu_links['menu-categories_cyber-seminars:discussions/cyber-seminars'] = array(
    'menu_name' => 'menu-categories',
    'link_path' => 'discussions/cyber-seminars',
    'router_path' => 'discussions',
    'link_title' => 'Cyber-Seminars',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-categories_cyber-seminars:discussions/cyber-seminars',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-categories_general:discussions/general.
  $menu_links['menu-categories_general:discussions/general'] = array(
    'menu_name' => 'menu-categories',
    'link_path' => 'discussions/general',
    'router_path' => 'discussions',
    'link_title' => 'General',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-categories_general:discussions/general',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-categories_policy:discussions/policy.
  $menu_links['menu-categories_policy:discussions/policy'] = array(
    'menu_name' => 'menu-categories',
    'link_path' => 'discussions/policy',
    'router_path' => 'discussions',
    'link_title' => 'Policy',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-categories_policy:discussions/policy',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: menu-categories_programs:discussions/programs.
  $menu_links['menu-categories_programs:discussions/programs'] = array(
    'menu_name' => 'menu-categories',
    'link_path' => 'discussions/programs',
    'router_path' => 'discussions',
    'link_title' => 'Programs',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-categories_programs:discussions/programs',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-categories_research:discussions/research.
  $menu_links['menu-categories_research:discussions/research'] = array(
    'menu_name' => 'menu-categories',
    'link_path' => 'discussions/research',
    'router_path' => 'discussions',
    'link_title' => 'Research',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-categories_research:discussions/research',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: menu-discussions-menu_all-discussions:discussions.
  $menu_links['menu-discussions-menu_all-discussions:discussions'] = array(
    'menu_name' => 'menu-discussions-menu',
    'link_path' => 'discussions',
    'router_path' => 'discussions',
    'link_title' => 'All Discussions',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-discussions-menu_all-discussions:discussions',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-discussions-menu_your-discussions:discussions/your-discussions.
  $menu_links['menu-discussions-menu_your-discussions:discussions/your-discussions'] = array(
    'menu_name' => 'menu-discussions-menu',
    'link_path' => 'discussions/your-discussions',
    'router_path' => 'discussions',
    'link_title' => 'Your Discussions',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-discussions-menu_your-discussions:discussions/your-discussions',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-menu_accessibility:about/accessibility.
  $menu_links['menu-footer-menu_accessibility:about/accessibility'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'about/accessibility',
    'router_path' => 'about',
    'link_title' => 'Accessibility',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-footer-menu_accessibility:about/accessibility',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-menu_cancer-control-planet:http://cancercontrolplanet.cancer.gov.
  $menu_links['menu-footer-menu_cancer-control-planet:http://cancercontrolplanet.cancer.gov'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'http://cancercontrolplanet.cancer.gov',
    'router_path' => '',
    'link_title' => 'Cancer Control P.L.A.N.E.T.',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-footer-menu_cancer-control-planet:http://cancercontrolplanet.cancer.gov',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-menu_contact-us:about/contact-us.
  $menu_links['menu-footer-menu_contact-us:about/contact-us'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'about/contact-us',
    'router_path' => 'about',
    'link_title' => 'Contact Us',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-footer-menu_contact-us:about/contact-us',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-menu_foia:about/FOIA.
  $menu_links['menu-footer-menu_foia:about/FOIA'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'about/FOIA',
    'router_path' => 'about',
    'link_title' => 'FOIA',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-footer-menu_foia:about/FOIA',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-menu_nci-home:http://www.cancer.gov.
  $menu_links['menu-footer-menu_nci-home:http://www.cancer.gov'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'http://www.cancer.gov',
    'router_path' => '',
    'link_title' => 'NCI Home',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-footer-menu_nci-home:http://www.cancer.gov',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-menu_policies:about/policies.
  $menu_links['menu-footer-menu_policies:about/policies'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'about/policies',
    'router_path' => 'about',
    'link_title' => 'Policies',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-footer-menu_policies:about/policies',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-menu_viewing-files:about/viewing.
  $menu_links['menu-footer-menu_viewing-files:about/viewing'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'about/viewing',
    'router_path' => 'about',
    'link_title' => 'Viewing Files',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-footer-menu_viewing-files:about/viewing',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
  );
  // Exported menu link: menu-lc-workspace-add-content_announcment:node/add/lc-announcement.
  $menu_links['menu-lc-workspace-add-content_announcment:node/add/lc-announcement'] = array(
    'menu_name' => 'menu-lc-workspace-add-content',
    'link_path' => 'node/add/lc-announcement',
    'router_path' => 'node/add/lc-announcement',
    'link_title' => 'Announcment',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-lc-workspace-add-content_announcment:node/add/lc-announcement',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-lc-workspace-add-content_discussion:node/add/lc-discussion.
  $menu_links['menu-lc-workspace-add-content_discussion:node/add/lc-discussion'] = array(
    'menu_name' => 'menu-lc-workspace-add-content',
    'link_path' => 'node/add/lc-discussion',
    'router_path' => 'node/add/lc-discussion',
    'link_title' => 'Discussion',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-lc-workspace-add-content_discussion:node/add/lc-discussion',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-lc-workspace-add-content_document:node/add/lc-document.
  $menu_links['menu-lc-workspace-add-content_document:node/add/lc-document'] = array(
    'menu_name' => 'menu-lc-workspace-add-content',
    'link_path' => 'node/add/lc-document',
    'router_path' => 'node/add/lc-document',
    'link_title' => 'Document',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-lc-workspace-add-content_document:node/add/lc-document',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-lc-workspace-add-content_event:node/add/lc-event.
  $menu_links['menu-lc-workspace-add-content_event:node/add/lc-event'] = array(
    'menu_name' => 'menu-lc-workspace-add-content',
    'link_path' => 'node/add/lc-event',
    'router_path' => 'node/add/lc-event',
    'link_title' => 'Event',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-lc-workspace-add-content_event:node/add/lc-event',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-lc-workspace-add-content_task:node/add/lc-task.
  $menu_links['menu-lc-workspace-add-content_task:node/add/lc-task'] = array(
    'menu_name' => 'menu-lc-workspace-add-content',
    'link_path' => 'node/add/lc-task',
    'router_path' => 'node/add/lc-task',
    'link_title' => 'Task',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-lc-workspace-add-content_task:node/add/lc-task',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-the-learning-communities_ccc-hpv-workshop:learning-communities/ccchpv.
  $menu_links['menu-the-learning-communities_ccc-hpv-workshop:learning-communities/ccchpv'] = array(
    'menu_name' => 'menu-the-learning-communities',
    'link_path' => 'learning-communities/ccchpv',
    'router_path' => 'learning-communities',
    'link_title' => 'CCC-HPV Workshop',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-the-learning-communities_ccc-hpv-workshop:learning-communities/ccchpv',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: menu-the-learning-communities_crc-screening-workgroup:learning-communities/crc.
  $menu_links['menu-the-learning-communities_crc-screening-workgroup:learning-communities/crc'] = array(
    'menu_name' => 'menu-the-learning-communities',
    'link_path' => 'learning-communities/crc',
    'router_path' => 'learning-communities',
    'link_title' => 'CRC Screening Workgroup',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-the-learning-communities_crc-screening-workgroup:learning-communities/crc',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: menu-the-learning-communities_healthcare-teams-in-cancer-care-delivery:learning-communities/nci.
  $menu_links['menu-the-learning-communities_healthcare-teams-in-cancer-care-delivery:learning-communities/nci'] = array(
    'menu_name' => 'menu-the-learning-communities',
    'link_path' => 'learning-communities/nci',
    'router_path' => 'learning-communities',
    'link_title' => 'Healthcare Teams in Cancer Care Delivery',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-the-learning-communities_healthcare-teams-in-cancer-care-delivery:learning-communities/nci',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-the-learning-communities_hpv-vaccine-uptake:learning-communities/hpv.
  $menu_links['menu-the-learning-communities_hpv-vaccine-uptake:learning-communities/hpv'] = array(
    'menu_name' => 'menu-the-learning-communities',
    'link_path' => 'learning-communities/hpv',
    'router_path' => 'learning-communities',
    'link_title' => 'HPV Vaccine Uptake',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-the-learning-communities_hpv-vaccine-uptake:learning-communities/hpv',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-the-learning-communities_my-own-health-report:learning-communities/mohr.
  $menu_links['menu-the-learning-communities_my-own-health-report:learning-communities/mohr'] = array(
    'menu_name' => 'menu-the-learning-communities',
    'link_path' => 'learning-communities/mohr',
    'router_path' => 'learning-communities',
    'link_title' => 'My Own Health Report',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-the-learning-communities_my-own-health-report:learning-communities/mohr',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-the-learning-communities_population-health-assessment:learning-communities/pha.
  $menu_links['menu-the-learning-communities_population-health-assessment:learning-communities/pha'] = array(
    'menu_name' => 'menu-the-learning-communities',
    'link_path' => 'learning-communities/pha',
    'router_path' => 'learning-communities',
    'link_title' => 'Population Health Assessment',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-the-learning-communities_population-health-assessment:learning-communities/pha',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-the-learning-communities_qualris:learning-communities/qualris.
  $menu_links['menu-the-learning-communities_qualris:learning-communities/qualris'] = array(
    'menu_name' => 'menu-the-learning-communities',
    'link_path' => 'learning-communities/qualris',
    'router_path' => 'learning-communities',
    'link_title' => 'QUALRIS',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-the-learning-communities_qualris:learning-communities/qualris',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('About');
  t('Accessibility');
  t('All Discussions');
  t('Announcment');
  t('CCC-HPV Workshop');
  t('CCC-HPV Workshop Learning Community');
  t('CRC Screening Workgroup');
  t('CRC Screening Workgroup Learning Community');
  t('Cancer Control P.L.A.N.E.T.');
  t('Collaborations');
  t('Contact Us');
  t('Cyber Seminars');
  t('Cyber-Seminars');
  t('Discussion');
  t('Discussions');
  t('Document');
  t('Event');
  t('Events');
  t('FOIA');
  t('Featured Partners');
  t('General');
  t('HPV Vaccine Uptake');
  t('HPV Vaccine Uptake Learning Community');
  t('Healthcare Teams in Cancer Care Delivery');
  t('Home');
  t('Learning Communities');
  t('Mentorship');
  t('My Own Health Report');
  t('My Own Health Report Learning Community');
  t('NCI Home');
  t('Policies');
  t('Policy');
  t('Population Health Assessment');
  t('Population Health Assessment in Cancer Catchment Areas Grantee Learning Community');
  t('Programs');
  t('QUALRIS');
  t('Research');
  t('Task');
  t('The QUALRIS Group Learning Community');
  t('Viewing Files');
  t('Your Discussions');

  return $menu_links;
}
