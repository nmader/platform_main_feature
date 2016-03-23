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

  // Exported menu link: main-menu_about:uuid/node/3dfbfeaf-cb77-4ac0-b16f-145af17649b5.
  $menu_links['main-menu_about:uuid/node/3dfbfeaf-cb77-4ac0-b16f-145af17649b5'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'uuid/node/3dfbfeaf-cb77-4ac0-b16f-145af17649b5',
    'router_path' => 'uuid',
    'link_title' => 'About',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_about:uuid/node/3dfbfeaf-cb77-4ac0-b16f-145af17649b5',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: main-menu_browse:islandora.
  $menu_links['main-menu_browse:islandora'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'islandora',
    'router_path' => 'islandora',
    'link_title' => 'Browse',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_browse:islandora',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
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
  // Exported menu link: main-menu_my-bookmarks:islandora-bookmark.
  $menu_links['main-menu_my-bookmarks:islandora-bookmark'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'islandora-bookmark',
    'router_path' => 'islandora-bookmark',
    'link_title' => 'My Bookmarks',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_my-bookmarks:islandora-bookmark',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
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
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-menu_creative-content-license:uuid/node/09648dae-14d6-46fe-82cd-cf4c0739201d.
  $menu_links['menu-footer-menu_creative-content-license:uuid/node/09648dae-14d6-46fe-82cd-cf4c0739201d'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'uuid/node/09648dae-14d6-46fe-82cd-cf4c0739201d',
    'router_path' => 'uuid',
    'link_title' => 'Creative content license',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-footer-menu_creative-content-license:uuid/node/09648dae-14d6-46fe-82cd-cf4c0739201d',
    ),
    'module' => 'menu',
    'hidden' => 0,
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
      'attributes' => array(
        'title' => '',
      ),
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
      'attributes' => array(
        'title' => '',
      ),
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
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-menu_make-contact:uuid/node/329a2134-140a-4447-a59f-389948bef2ba.
  $menu_links['menu-footer-menu_make-contact:uuid/node/329a2134-140a-4447-a59f-389948bef2ba'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'uuid/node/329a2134-140a-4447-a59f-389948bef2ba',
    'router_path' => 'uuid',
    'link_title' => 'Make contact',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-footer-menu_make-contact:uuid/node/329a2134-140a-4447-a59f-389948bef2ba',
    ),
    'module' => 'menu',
    'hidden' => 0,
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
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-menu_policies:uuid/node/dd9db579-7172-436d-a740-721ec9a68523.
  $menu_links['menu-footer-menu_policies:uuid/node/dd9db579-7172-436d-a740-721ec9a68523'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'uuid/node/dd9db579-7172-436d-a740-721ec9a68523',
    'router_path' => 'uuid',
    'link_title' => 'Policies',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-footer-menu_policies:uuid/node/dd9db579-7172-436d-a740-721ec9a68523',
    ),
    'module' => 'menu',
    'hidden' => 0,
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
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-menu_researchers:uuid/node/11ab3414-deb5-4985-9797-1a90ac057005.
  $menu_links['menu-footer-menu_researchers:uuid/node/11ab3414-deb5-4985-9797-1a90ac057005'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'uuid/node/11ab3414-deb5-4985-9797-1a90ac057005',
    'router_path' => 'uuid',
    'link_title' => 'Researchers',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-footer-menu_researchers:uuid/node/11ab3414-deb5-4985-9797-1a90ac057005',
    ),
    'module' => 'menu',
    'hidden' => 0,
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
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-header-menu_about:uuid/node/3dfbfeaf-cb77-4ac0-b16f-145af17649b5',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-header-menu_browse-all-materials:islandora.
  $menu_links['menu-header-menu_browse-all-materials:islandora'] = array(
    'menu_name' => 'menu-header-menu',
    'link_path' => 'islandora',
    'router_path' => 'islandora',
    'link_title' => 'Browse all materials',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-header-menu_browse-all-materials:islandora',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-header-menu_browse-collections:all-collections.
  $menu_links['menu-header-menu_browse-collections:all-collections'] = array(
    'menu_name' => 'menu-header-menu',
    'link_path' => 'all-collections',
    'router_path' => 'all-collections',
    'link_title' => 'Browse Collections',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-header-menu_browse-collections:all-collections',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-header-menu_collections:islandora/object/islandora:root.
  $menu_links['menu-header-menu_collections:islandora/object/islandora:root'] = array(
    'menu_name' => 'menu-header-menu',
    'link_path' => 'islandora/object/islandora:root',
    'router_path' => 'islandora/object/%',
    'link_title' => 'Collections',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
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
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-header-menu_home:<front>',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-header-menu_login:user/login.
  $menu_links['menu-header-menu_login:user/login'] = array(
    'menu_name' => 'menu-header-menu',
    'link_path' => 'user/login',
    'router_path' => 'user/login',
    'link_title' => 'Login',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-header-menu_login:user/login',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: menu-header-menu_logout:user/logout.
  $menu_links['menu-header-menu_logout:user/logout'] = array(
    'menu_name' => 'menu-header-menu',
    'link_path' => 'user/logout',
    'router_path' => 'user/logout',
    'link_title' => 'Logout',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-header-menu_logout:user/logout',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-header-menu_tulane-digital-repository:http://library.tulane.edu/repository/.
  $menu_links['menu-header-menu_tulane-digital-repository:http://library.tulane.edu/repository/'] = array(
    'menu_name' => 'menu-header-menu',
    'link_path' => 'http://library.tulane.edu/repository/',
    'router_path' => '',
    'link_title' => 'Tulane Digital Repository',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-header-menu_tulane-digital-repository:http://library.tulane.edu/repository/',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: menu-popular-links_collections--research-news:uuid/node/cfb93405-0c0a-4367-a005-4f113c5fe4be.
  $menu_links['menu-popular-links_collections--research-news:uuid/node/cfb93405-0c0a-4367-a005-4f113c5fe4be'] = array(
    'menu_name' => 'menu-popular-links',
    'link_path' => 'uuid/node/cfb93405-0c0a-4367-a005-4f113c5fe4be',
    'router_path' => 'uuid',
    'link_title' => 'Collections & Research News',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-popular-links_collections--research-news:uuid/node/cfb93405-0c0a-4367-a005-4f113c5fe4be',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: menu-popular-links_education-programs:uuid/node/0d3a9fc8-9f4e-4e17-be81-04472f145120.
  $menu_links['menu-popular-links_education-programs:uuid/node/0d3a9fc8-9f4e-4e17-be81-04472f145120'] = array(
    'menu_name' => 'menu-popular-links',
    'link_path' => 'uuid/node/0d3a9fc8-9f4e-4e17-be81-04472f145120',
    'router_path' => 'uuid',
    'link_title' => 'Education Programs',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-popular-links_education-programs:uuid/node/0d3a9fc8-9f4e-4e17-be81-04472f145120',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
  );
  // Exported menu link: menu-popular-links_employment-opportunities:uuid/node/e454fe8a-c9f8-4559-b9e7-7cb735d6e805.
  $menu_links['menu-popular-links_employment-opportunities:uuid/node/e454fe8a-c9f8-4559-b9e7-7cb735d6e805'] = array(
    'menu_name' => 'menu-popular-links',
    'link_path' => 'uuid/node/e454fe8a-c9f8-4559-b9e7-7cb735d6e805',
    'router_path' => 'uuid',
    'link_title' => 'Employment Opportunities',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-popular-links_employment-opportunities:uuid/node/e454fe8a-c9f8-4559-b9e7-7cb735d6e805',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-popular-links_hagley-staff-list:uuid/node/df637904-3285-4590-81c2-2fea2e76b198.
  $menu_links['menu-popular-links_hagley-staff-list:uuid/node/df637904-3285-4590-81c2-2fea2e76b198'] = array(
    'menu_name' => 'menu-popular-links',
    'link_path' => 'uuid/node/df637904-3285-4590-81c2-2fea2e76b198',
    'router_path' => 'uuid',
    'link_title' => 'Hagley Staff List',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-popular-links_hagley-staff-list:uuid/node/df637904-3285-4590-81c2-2fea2e76b198',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-popular-links_library-information:uuid/node/494484e7-acce-46e8-9d4c-41eaef07f625.
  $menu_links['menu-popular-links_library-information:uuid/node/494484e7-acce-46e8-9d4c-41eaef07f625'] = array(
    'menu_name' => 'menu-popular-links',
    'link_path' => 'uuid/node/494484e7-acce-46e8-9d4c-41eaef07f625',
    'router_path' => 'uuid',
    'link_title' => 'Library Information',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-popular-links_library-information:uuid/node/494484e7-acce-46e8-9d4c-41eaef07f625',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
  );
  // Exported menu link: menu-popular-links_press-room:uuid/node/d1d8dc41-2df4-40fa-aac0-e69da084700b.
  $menu_links['menu-popular-links_press-room:uuid/node/d1d8dc41-2df4-40fa-aac0-e69da084700b'] = array(
    'menu_name' => 'menu-popular-links',
    'link_path' => 'uuid/node/d1d8dc41-2df4-40fa-aac0-e69da084700b',
    'router_path' => 'uuid',
    'link_title' => 'Press Room',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-popular-links_press-room:uuid/node/d1d8dc41-2df4-40fa-aac0-e69da084700b',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: menu-popular-links_wedding-and-meetings:uuid/node/8363b62c-d2d7-4eda-ba9b-e89e0a11f53a.
  $menu_links['menu-popular-links_wedding-and-meetings:uuid/node/8363b62c-d2d7-4eda-ba9b-e89e0a11f53a'] = array(
    'menu_name' => 'menu-popular-links',
    'link_path' => 'uuid/node/8363b62c-d2d7-4eda-ba9b-e89e0a11f53a',
    'router_path' => 'uuid',
    'link_title' => 'Wedding and Meetings',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-popular-links_wedding-and-meetings:uuid/node/8363b62c-d2d7-4eda-ba9b-e89e0a11f53a',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('About');
  t('Browse');
  t('Browse Collections');
  t('Browse all materials');
  t('Collections');
  t('Collections & Research News');
  t('Creative content license');
  t('Education Programs');
  t('Employment Opportunities');
  t('Hagley Staff List');
  t('Home');
  t('Library Information');
  t('Login');
  t('Logout');
  t('Make contact');
  t('My Bookmarks');
  t('Policies');
  t('Press Room');
  t('Researchers');
  t('Tulane Digital Repository');
  t('Wedding and Meetings');

  return $menu_links;
}
