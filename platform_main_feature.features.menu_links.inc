<?php
/**
 * @file
 * platform_main_feature.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function platform_main_feature_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_home:<front>.
  $menu_links['main-menu_home:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home',
    'options' => array(
      'identifier' => 'main-menu_home:<front>',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-menu-digital_contact-us:http://www.nyam.org/contact-us.
  $menu_links['menu-footer-menu-digital_contact-us:http://www.nyam.org/contact-us'] = array(
    'menu_name' => 'menu-footer-menu-digital',
    'link_path' => 'http://www.nyam.org/contact-us',
    'router_path' => '',
    'link_title' => 'Contact Us',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-footer-menu-digital_contact-us:http://www.nyam.org/contact-us',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-menu-digital_email-sign-up:http://support.nyam.org/site/Survey?ACTION_REQUIRED=URI_ACTION_USER_REQUESTS&SURVEY_ID=1741.
  $menu_links['menu-footer-menu-digital_email-sign-up:http://support.nyam.org/site/Survey?ACTION_REQUIRED=URI_ACTION_USER_REQUESTS&SURVEY_ID=1741'] = array(
    'menu_name' => 'menu-footer-menu-digital',
    'link_path' => 'http://support.nyam.org/site/Survey?ACTION_REQUIRED=URI_ACTION_USER_REQUESTS&SURVEY_ID=1741',
    'router_path' => '',
    'link_title' => 'Email Sign Up',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-footer-menu-digital_email-sign-up:http://support.nyam.org/site/Survey?ACTION_REQUIRED=URI_ACTION_USER_REQUESTS&SURVEY_ID=1741',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-menu-digital_follow-us:http://www.nyam.org/follow-us.
  $menu_links['menu-footer-menu-digital_follow-us:http://www.nyam.org/follow-us'] = array(
    'menu_name' => 'menu-footer-menu-digital',
    'link_path' => 'http://www.nyam.org/follow-us',
    'router_path' => '',
    'link_title' => 'Follow Us',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-footer-menu-digital_follow-us:http://www.nyam.org/follow-us',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-menu-digital_subscribe-rss:http://www.nyam.org/rss-feeds.
  $menu_links['menu-footer-menu-digital_subscribe-rss:http://www.nyam.org/rss-feeds'] = array(
    'menu_name' => 'menu-footer-menu-digital',
    'link_path' => 'http://www.nyam.org/rss-feeds',
    'router_path' => '',
    'link_title' => 'Subscribe (RSS)',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-footer-menu-digital_subscribe-rss:http://www.nyam.org/rss-feeds',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-menu-physical_careers:http://www.nyam.org/about/careers.
  $menu_links['menu-footer-menu-physical_careers:http://www.nyam.org/about/careers'] = array(
    'menu_name' => 'menu-footer-menu-physical',
    'link_path' => 'http://www.nyam.org/about/careers',
    'router_path' => '',
    'link_title' => 'Careers',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-footer-menu-physical_careers:http://www.nyam.org/about/careers',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-menu-physical_directions:http://www.nyam.org/about/visit.
  $menu_links['menu-footer-menu-physical_directions:http://www.nyam.org/about/visit'] = array(
    'menu_name' => 'menu-footer-menu-physical',
    'link_path' => 'http://www.nyam.org/about/visit',
    'router_path' => '',
    'link_title' => 'Directions',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-footer-menu-physical_directions:http://www.nyam.org/about/visit',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-menu-physical_privacy-policy:http://www.nyam.org/privacy-policy.
  $menu_links['menu-footer-menu-physical_privacy-policy:http://www.nyam.org/privacy-policy'] = array(
    'menu_name' => 'menu-footer-menu-physical',
    'link_path' => 'http://www.nyam.org/privacy-policy',
    'router_path' => '',
    'link_title' => 'Privacy Policy',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-footer-menu-physical_privacy-policy:http://www.nyam.org/privacy-policy',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-menu-physical_spokespersons:http://www.nyam.org/news/spokespersons/.
  $menu_links['menu-footer-menu-physical_spokespersons:http://www.nyam.org/news/spokespersons/'] = array(
    'menu_name' => 'menu-footer-menu-physical',
    'link_path' => 'http://www.nyam.org/news/spokespersons/',
    'router_path' => '',
    'link_title' => 'Spokespersons',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-footer-menu-physical_spokespersons:http://www.nyam.org/news/spokespersons/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-menu_creative-content-license:node/1.
  $menu_links['menu-footer-menu_creative-content-license:node/1'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'node/1',
    'router_path' => 'node/%',
    'link_title' => 'Creative content license',
    'options' => array(
      'identifier' => 'menu-footer-menu_creative-content-license:node/1',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 0,
  );
  // Exported menu link: menu-footer-menu_creative-content-license:uuid/node/09648dae-14d6-46fe-82cd-cf4c0739201d.
  $menu_links['menu-footer-menu_creative-content-license:uuid/node/09648dae-14d6-46fe-82cd-cf4c0739201d'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'uuid/node/09648dae-14d6-46fe-82cd-cf4c0739201d',
    'router_path' => 'uuid',
    'link_title' => 'Creative content license',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-footer-menu_creative-content-license:uuid/node/09648dae-14d6-46fe-82cd-cf4c0739201d',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-menu_login:user/login.
  $menu_links['menu-footer-menu_login:user/login'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'user/login',
    'router_path' => 'user/login',
    'link_title' => 'Login',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-footer-menu_login:user/login',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-menu_logout:user/logout.
  $menu_links['menu-footer-menu_logout:user/logout'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'user/logout',
    'router_path' => 'user/logout',
    'link_title' => 'Logout',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-footer-menu_logout:user/logout',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-menu_make-contact:node/4.
  $menu_links['menu-footer-menu_make-contact:node/4'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'node/4',
    'router_path' => 'node/%',
    'link_title' => 'Make contact',
    'options' => array(
      'identifier' => 'menu-footer-menu_make-contact:node/4',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 0,
  );
  // Exported menu link: menu-footer-menu_make-contact:uuid/node/329a2134-140a-4447-a59f-389948bef2ba.
  $menu_links['menu-footer-menu_make-contact:uuid/node/329a2134-140a-4447-a59f-389948bef2ba'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'uuid/node/329a2134-140a-4447-a59f-389948bef2ba',
    'router_path' => 'uuid',
    'link_title' => 'Make contact',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-footer-menu_make-contact:uuid/node/329a2134-140a-4447-a59f-389948bef2ba',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-menu_policies:node/10.
  $menu_links['menu-footer-menu_policies:node/10'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'node/10',
    'router_path' => 'node/%',
    'link_title' => 'Policies',
    'options' => array(
      'identifier' => 'menu-footer-menu_policies:node/10',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 0,
  );
  // Exported menu link: menu-footer-menu_policies:uuid/node/dd9db579-7172-436d-a740-721ec9a68523.
  $menu_links['menu-footer-menu_policies:uuid/node/dd9db579-7172-436d-a740-721ec9a68523'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'uuid/node/dd9db579-7172-436d-a740-721ec9a68523',
    'router_path' => 'uuid',
    'link_title' => 'Policies',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-footer-menu_policies:uuid/node/dd9db579-7172-436d-a740-721ec9a68523',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-menu_researchers:node/2.
  $menu_links['menu-footer-menu_researchers:node/2'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'node/2',
    'router_path' => 'node/%',
    'link_title' => 'Researchers',
    'options' => array(
      'identifier' => 'menu-footer-menu_researchers:node/2',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 0,
  );
  // Exported menu link: menu-footer-menu_researchers:uuid/node/11ab3414-deb5-4985-9797-1a90ac057005.
  $menu_links['menu-footer-menu_researchers:uuid/node/11ab3414-deb5-4985-9797-1a90ac057005'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'uuid/node/11ab3414-deb5-4985-9797-1a90ac057005',
    'router_path' => 'uuid',
    'link_title' => 'Researchers',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-footer-menu_researchers:uuid/node/11ab3414-deb5-4985-9797-1a90ac057005',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-header-menu_about:uuid/node/3dfbfeaf-cb77-4ac0-b16f-145af17649b5.
  $menu_links['menu-header-menu_about:uuid/node/3dfbfeaf-cb77-4ac0-b16f-145af17649b5'] = array(
    'menu_name' => 'menu-header-menu',
    'link_path' => 'uuid/node/3dfbfeaf-cb77-4ac0-b16f-145af17649b5',
    'router_path' => 'uuid',
    'link_title' => 'About',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-header-menu_about:uuid/node/3dfbfeaf-cb77-4ac0-b16f-145af17649b5',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-header-menu_awards--grants:http://www.nyam.org/awards-grants.
  $menu_links['menu-header-menu_awards--grants:http://www.nyam.org/awards-grants'] = array(
    'menu_name' => 'menu-header-menu',
    'link_path' => 'http://www.nyam.org/awards-grants',
    'router_path' => '',
    'link_title' => 'Awards & Grants',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-header-menu_awards--grants:http://www.nyam.org/awards-grants',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: menu-header-menu_collections:islandora/object/islandora:root.
  $menu_links['menu-header-menu_collections:islandora/object/islandora:root'] = array(
    'menu_name' => 'menu-header-menu',
    'link_path' => 'islandora/object/islandora:root',
    'router_path' => 'islandora/object/%',
    'link_title' => 'Collections',
    'options' => array(
      'attributes' => array(),
      'query' => array(
        'display' => 'list',
      ),
      'identifier' => 'menu-header-menu_collections:islandora/object/islandora:root',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -39,
    'customized' => 1,
  );
  // Exported menu link: menu-header-menu_conference-center:http://www.nyam.org/conference-center/.
  $menu_links['menu-header-menu_conference-center:http://www.nyam.org/conference-center/'] = array(
    'menu_name' => 'menu-header-menu',
    'link_path' => 'http://www.nyam.org/conference-center/',
    'router_path' => '',
    'link_title' => 'CONFERENCE CENTER',
    'options' => array(
      'attributes' => array(
        'title' => 'Conference Center',
        'class' => array(
          0 => 'conference-center',
        ),
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => 'c-menu',
        'style' => '',
      ),
      'identifier' => 'menu-header-menu_conference-center:http://www.nyam.org/conference-center/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
  );
  // Exported menu link: menu-header-menu_events:http://www.nyam.org/events/.
  $menu_links['menu-header-menu_events:http://www.nyam.org/events/'] = array(
    'menu_name' => 'menu-header-menu',
    'link_path' => 'http://www.nyam.org/events/',
    'router_path' => '',
    'link_title' => 'Events',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-header-menu_events:http://www.nyam.org/events/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-header-menu_home:<front>.
  $menu_links['menu-header-menu_home:<front>'] = array(
    'menu_name' => 'menu-header-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-header-menu_home:<front>',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -40,
    'customized' => 1,
  );
  // Exported menu link: menu-header-menu_log-in:user/login.
  $menu_links['menu-header-menu_log-in:user/login'] = array(
    'menu_name' => 'menu-header-menu',
    'link_path' => 'user/login',
    'router_path' => 'user/login',
    'link_title' => 'LOG IN',
    'options' => array(
      'attributes' => array(
        'class' => array(
          0 => 'log-in',
        ),
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-header-menu_log-in:user/login',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -42,
    'customized' => 1,
  );
  // Exported menu link: menu-header-menu_log-out:user/logout.
  $menu_links['menu-header-menu_log-out:user/logout'] = array(
    'menu_name' => 'menu-header-menu',
    'link_path' => 'user/logout',
    'router_path' => 'user/logout',
    'link_title' => 'LOG OUT',
    'options' => array(
      'attributes' => array(
        'class' => array(
          0 => 'log-out',
        ),
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-header-menu_log-out:user/logout',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -43,
    'customized' => 1,
  );
  // Exported menu link: menu-header-menu_news:http://www.nyam.org/news/.
  $menu_links['menu-header-menu_news:http://www.nyam.org/news/'] = array(
    'menu_name' => 'menu-header-menu',
    'link_path' => 'http://www.nyam.org/news/',
    'router_path' => '',
    'link_title' => 'News',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-header-menu_news:http://www.nyam.org/news/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-header-menu_publications:http://www.nyam.org/publications/.
  $menu_links['menu-header-menu_publications:http://www.nyam.org/publications/'] = array(
    'menu_name' => 'menu-header-menu',
    'link_path' => 'http://www.nyam.org/publications/',
    'router_path' => '',
    'link_title' => 'Publications',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-header-menu_publications:http://www.nyam.org/publications/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: menu-header-menu_search:node/20.
  $menu_links['menu-header-menu_search:node/20'] = array(
    'menu_name' => 'menu-header-menu',
    'link_path' => 'node/20',
    'router_path' => 'node/%',
    'link_title' => 'SEARCH',
    'options' => array(
      'attributes' => array(
        'class' => array(
          0 => 'search-header',
        ),
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-header-menu_search:node/20',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -41,
    'customized' => 1,
  );
  // Exported menu link: menu-header-menu_support:http://www.nyam.org/support.
  $menu_links['menu-header-menu_support:http://www.nyam.org/support'] = array(
    'menu_name' => 'menu-header-menu',
    'link_path' => 'http://www.nyam.org/support',
    'router_path' => '',
    'link_title' => 'Support',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-header-menu_support:http://www.nyam.org/support',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
  );
  // Exported menu link: menu-quick-links_view-sample-page-one:uuid/node/349cb0ef-2bc0-412e-b830-6b669b52f193.
  $menu_links['menu-quick-links_view-sample-page-one:uuid/node/349cb0ef-2bc0-412e-b830-6b669b52f193'] = array(
    'menu_name' => 'menu-quick-links',
    'link_path' => 'uuid/node/349cb0ef-2bc0-412e-b830-6b669b52f193',
    'router_path' => 'uuid',
    'link_title' => 'View Sample Page One',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-quick-links_view-sample-page-one:uuid/node/349cb0ef-2bc0-412e-b830-6b669b52f193',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-quick-links_view-sample-page-two:uuid/node/7185680c-7425-4b08-8c22-328a569e9f51.
  $menu_links['menu-quick-links_view-sample-page-two:uuid/node/7185680c-7425-4b08-8c22-328a569e9f51'] = array(
    'menu_name' => 'menu-quick-links',
    'link_path' => 'uuid/node/7185680c-7425-4b08-8c22-328a569e9f51',
    'router_path' => 'uuid',
    'link_title' => 'View Sample Page Two',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-quick-links_view-sample-page-two:uuid/node/7185680c-7425-4b08-8c22-328a569e9f51',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-site-navigation_happenings:uuid/node/e72bb9c2-50ee-4e97-b4a4-6569c62f1136.
  $menu_links['menu-site-navigation_happenings:uuid/node/e72bb9c2-50ee-4e97-b4a4-6569c62f1136'] = array(
    'menu_name' => 'menu-site-navigation',
    'link_path' => 'uuid/node/e72bb9c2-50ee-4e97-b4a4-6569c62f1136',
    'router_path' => 'uuid',
    'link_title' => 'Happenings',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-site-navigation_happenings:uuid/node/e72bb9c2-50ee-4e97-b4a4-6569c62f1136',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-site-navigation_research-and-services:uuid/node/83ed1638-66e0-44cb-853a-624a3614f789.
  $menu_links['menu-site-navigation_research-and-services:uuid/node/83ed1638-66e0-44cb-853a-624a3614f789'] = array(
    'menu_name' => 'menu-site-navigation',
    'link_path' => 'uuid/node/83ed1638-66e0-44cb-853a-624a3614f789',
    'router_path' => 'uuid',
    'link_title' => 'Research and Services',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-site-navigation_research-and-services:uuid/node/83ed1638-66e0-44cb-853a-624a3614f789',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('About');
  t('Awards & Grants');
  t('CONFERENCE CENTER');
  t('Careers');
  t('Collections');
  t('Contact Us');
  t('Creative content license');
  t('Directions');
  t('Email Sign Up');
  t('Events');
  t('Follow Us');
  t('Happenings');
  t('Home');
  t('LOG IN');
  t('LOG OUT');
  t('Login');
  t('Logout');
  t('Make contact');
  t('News');
  t('Policies');
  t('Privacy Policy');
  t('Publications');
  t('Research and Services');
  t('Researchers');
  t('SEARCH');
  t('Spokespersons');
  t('Subscribe (RSS)');
  t('Support');
  t('View Sample Page One');
  t('View Sample Page Two');

  return $menu_links;
}
