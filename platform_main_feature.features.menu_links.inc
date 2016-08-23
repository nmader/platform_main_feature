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

  // Exported menu link: main-menu_browse:browse-collections.
  $menu_links['main-menu_browse:browse-collections'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'browse-collections',
    'router_path' => 'browse-collections',
    'link_title' => 'Browse',
    'options' => array(
      'identifier' => 'main-menu_browse:browse-collections',
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: main-menu_contact:uuid/node/329a2134-140a-4447-a59f-389948bef2ba.
  $menu_links['main-menu_contact:uuid/node/329a2134-140a-4447-a59f-389948bef2ba'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'uuid/node/329a2134-140a-4447-a59f-389948bef2ba',
    'router_path' => 'uuid',
    'link_title' => 'Contact',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_contact:uuid/node/329a2134-140a-4447-a59f-389948bef2ba',
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
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
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
  // Exported menu link: main-menu_submit:uuid/node/51a4afa1-dfe6-4568-a494-2b6bd3bf2732.
  $menu_links['main-menu_submit:uuid/node/51a4afa1-dfe6-4568-a494-2b6bd3bf2732'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'uuid/node/51a4afa1-dfe6-4568-a494-2b6bd3bf2732',
    'router_path' => 'uuid',
    'link_title' => 'Submit',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_submit:uuid/node/51a4afa1-dfe6-4568-a494-2b6bd3bf2732',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-browse-by-type_see-all-types:browse/browse-type.
  $menu_links['menu-browse-by-type_see-all-types:browse/browse-type'] = array(
    'menu_name' => 'menu-browse-by-type',
    'link_path' => 'browse/browse-type',
    'router_path' => 'browse',
    'link_title' => 'See All Types',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-browse-by-type_see-all-types:browse/browse-type',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-browse-by-type_theses-and-dissertations:browse-by/mixed material.
  $menu_links['menu-browse-by-type_theses-and-dissertations:browse-by/mixed material'] = array(
    'menu_name' => 'menu-browse-by-type',
    'link_path' => 'browse-by/mixed material',
    'router_path' => 'browse-by',
    'link_title' => 'Theses and Dissertations',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-browse-by-type_theses-and-dissertations:browse-by/mixed material',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-contact-menu_5500-campanile-drive-san-diego-california-9282-8050:<front>.
  $menu_links['menu-contact-menu_5500-campanile-drive-san-diego-california-9282-8050:<front>'] = array(
    'menu_name' => 'menu-contact-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => '5500 Campanile Drive San Diego, California 9282-8050',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => 'address',
        'style' => '',
      ),
      'identifier' => 'menu-contact-menu_5500-campanile-drive-san-diego-california-9282-8050:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: menu-contact-menu_6195946728:tel:+6195946728.
  $menu_links['menu-contact-menu_6195946728:tel:+6195946728'] = array(
    'menu_name' => 'menu-contact-menu',
    'link_path' => 'tel:+6195946728',
    'router_path' => '',
    'link_title' => '619.594.6728',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => 'phone',
        'style' => '',
      ),
      'identifier' => 'menu-contact-menu_6195946728:tel:+6195946728',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-contact-menu_chat-with-a-librarian:<front>.
  $menu_links['menu-contact-menu_chat-with-a-librarian:<front>'] = array(
    'menu_name' => 'menu-contact-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Chat with a Librarian',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => 'chat-with-lib',
        'style' => '',
      ),
      'identifier' => 'menu-contact-menu_chat-with-a-librarian:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-contact-menu_erefmailsdsuedu:mailto:eref@mail.sdsu.edu.
  $menu_links['menu-contact-menu_erefmailsdsuedu:mailto:eref@mail.sdsu.edu'] = array(
    'menu_name' => 'menu-contact-menu',
    'link_path' => 'mailto:eref@mail.sdsu.edu',
    'router_path' => '',
    'link_title' => 'eref@mail.sdsu.edu',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => 'email-sdsu',
        'style' => '',
      ),
      'identifier' => 'menu-contact-menu_erefmailsdsuedu:mailto:eref@mail.sdsu.edu',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-department_arts-and-letters:browse-by/still image.
  $menu_links['menu-department_arts-and-letters:browse-by/still image'] = array(
    'menu_name' => 'menu-department',
    'link_path' => 'browse-by/still image',
    'router_path' => 'browse-by',
    'link_title' => 'Arts and Letters',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-department_arts-and-letters:browse-by/still image',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-featured-collections_course-catalogs:http://discoverygarden-vsphere-saas.local/featured-object-collection/islandora:root.
  $menu_links['menu-featured-collections_course-catalogs:http://discoverygarden-vsphere-saas.local/featured-object-collection/islandora:root'] = array(
    'menu_name' => 'menu-featured-collections',
    'link_path' => 'http://discoverygarden-vsphere-saas.local/featured-object-collection/islandora:root',
    'router_path' => '',
    'link_title' => 'Course Catalogs',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-featured-collections_course-catalogs:http://discoverygarden-vsphere-saas.local/featured-object-collection/islandora:root',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-menu_browse-by-department:browse/browse-all-departments.
  $menu_links['menu-footer-menu_browse-by-department:browse/browse-all-departments'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'browse/browse-all-departments',
    'router_path' => 'browse',
    'link_title' => 'Browse by Department',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => 'browse-dept',
        'style' => '',
      ),
      'identifier' => 'menu-footer-menu_browse-by-department:browse/browse-all-departments',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-menu_browse-by-type:browse/browse-type.
  $menu_links['menu-footer-menu_browse-by-type:browse/browse-type'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'browse/browse-type',
    'router_path' => 'browse',
    'link_title' => 'Browse by Type',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => 'browse-type',
        'style' => '',
      ),
      'identifier' => 'menu-footer-menu_browse-by-type:browse/browse-type',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
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
  // Exported menu link: menu-footer-menu_featured-collections:browse-collections.
  $menu_links['menu-footer-menu_featured-collections:browse-collections'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'browse-collections',
    'router_path' => 'browse-collections',
    'link_title' => 'Featured Collections',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => 'browse-featured',
        'style' => '',
      ),
      'identifier' => 'menu-footer-menu_featured-collections:browse-collections',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
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
    'hidden' => 1,
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
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
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
  // Exported menu link: menu-header-menu_about-this-site:node/5.
  $menu_links['menu-header-menu_about-this-site:node/5'] = array(
    'menu_name' => 'menu-header-menu',
    'link_path' => 'node/5',
    'router_path' => 'node/%',
    'link_title' => 'About this site',
    'options' => array(
      'identifier' => 'menu-header-menu_about-this-site:node/5',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: menu-header-menu_about-this-site:uuid/node/3dfbfeaf-cb77-4ac0-b16f-145af17649b5.
  $menu_links['menu-header-menu_about-this-site:uuid/node/3dfbfeaf-cb77-4ac0-b16f-145af17649b5'] = array(
    'menu_name' => 'menu-header-menu',
    'link_path' => 'uuid/node/3dfbfeaf-cb77-4ac0-b16f-145af17649b5',
    'router_path' => 'uuid',
    'link_title' => 'About this site',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-header-menu_about-this-site:uuid/node/3dfbfeaf-cb77-4ac0-b16f-145af17649b5',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-header-menu_browse-repository:islandora.
  $menu_links['menu-header-menu_browse-repository:islandora'] = array(
    'menu_name' => 'menu-header-menu',
    'link_path' => 'islandora',
    'router_path' => 'islandora',
    'link_title' => 'Browse Repository',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-header-menu_browse-repository:islandora',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-header-menu_make-contact:uuid/node/329a2134-140a-4447-a59f-389948bef2ba.
  $menu_links['menu-header-menu_make-contact:uuid/node/329a2134-140a-4447-a59f-389948bef2ba'] = array(
    'menu_name' => 'menu-header-menu',
    'link_path' => 'uuid/node/329a2134-140a-4447-a59f-389948bef2ba',
    'router_path' => 'uuid',
    'link_title' => 'Make contact',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-header-menu_make-contact:uuid/node/329a2134-140a-4447-a59f-389948bef2ba',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-header-menu_my-bookmarks:islandora-bookmark.
  $menu_links['menu-header-menu_my-bookmarks:islandora-bookmark'] = array(
    'menu_name' => 'menu-header-menu',
    'link_path' => 'islandora-bookmark',
    'router_path' => 'islandora-bookmark',
    'link_title' => 'My Bookmarks',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-header-menu_my-bookmarks:islandora-bookmark',
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
  t('5500 Campanile Drive San Diego, California 9282-8050');
  t('619.594.6728');
  t('About this site');
  t('Arts and Letters');
  t('Browse');
  t('Browse Repository');
  t('Browse by Department');
  t('Browse by Type');
  t('Chat with a Librarian');
  t('Contact');
  t('Course Catalogs');
  t('Creative content license');
  t('Featured Collections');
  t('Home');
  t('Login');
  t('Logout');
  t('Make contact');
  t('My Bookmarks');
  t('Policies');
  t('Researchers');
  t('See All Types');
  t('Submit');
  t('Theses and Dissertations');
  t('eref@mail.sdsu.edu');

  return $menu_links;
}
