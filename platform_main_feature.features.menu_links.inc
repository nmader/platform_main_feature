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

  // Exported menu link: main-menu_about-lcp:http://librarycompany.org/about/index.htm.
  $menu_links['main-menu_about-lcp:http://librarycompany.org/about/index.htm'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://librarycompany.org/about/index.htm',
    'router_path' => '',
    'link_title' => 'About LCP',
    'options' => array(
      'menu_attach_block' => array(
        'name' => '',
        'use_ajax' => 0,
        'no_drop' => 0,
        'dropped' => 0,
        'on_hover' => 0,
        'orientation' => 'horizontal',
        'mlid' => 671,
        'plid' => 0,
      ),
      'identifier' => 'main-menu_about-lcp:http://librarycompany.org/about/index.htm',
      'icon' => array(
        'icon' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
  );
  // Exported menu link: main-menu_advanced-search:uuid/node/e082403c-407d-45a5-9889-9effbb122e7d.
  $menu_links['main-menu_advanced-search:uuid/node/e082403c-407d-45a5-9889-9effbb122e7d'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'uuid/node/e082403c-407d-45a5-9889-9effbb122e7d',
    'router_path' => 'uuid',
    'link_title' => 'advanced search',
    'options' => array(
      'menu_attach_block' => array(
        'name' => '',
        'use_ajax' => 0,
        'no_drop' => 0,
        'dropped' => 0,
        'on_hover' => 0,
        'orientation' => 'horizontal',
        'mlid' => 729,
        'plid' => 0,
      ),
      'identifier' => 'main-menu_advanced-search:uuid/node/e082403c-407d-45a5-9889-9effbb122e7d',
      'icon' => array(
        'icon' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'attributes' => array(
        'class' => array(
          0 => 'ad-search',
        ),
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => 'ad-search',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -41,
    'customized' => 1,
  );
  // Exported menu link: main-menu_explore:islandora.
  $menu_links['main-menu_explore:islandora'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'islandora',
    'router_path' => 'islandora',
    'link_title' => 'Explore',
    'options' => array(
      'menu_attach_block' => array(
        'name' => '',
        'use_ajax' => 0,
        'no_drop' => 0,
        'dropped' => 0,
        'on_hover' => 0,
        'orientation' => 'horizontal',
        'mlid' => 665,
        'plid' => 0,
      ),
      'identifier' => 'main-menu_explore:islandora',
      'icon' => array(
        'icon' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
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
    'weight' => -49,
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
      'menu_attach_block' => array(
        'name' => '',
        'use_ajax' => 0,
        'no_drop' => 0,
        'dropped' => 0,
        'on_hover' => 0,
        'orientation' => 'horizontal',
        'mlid' => 218,
        'plid' => 0,
      ),
      'icon' => array(
        'icon' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: main-menu_lcp-home:http://www.librarycompany.org.
  $menu_links['main-menu_lcp-home:http://www.librarycompany.org'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://www.librarycompany.org',
    'router_path' => '',
    'link_title' => 'LCP Home',
    'options' => array(
      'menu_attach_block' => array(
        'name' => '',
        'use_ajax' => 0,
        'no_drop' => 0,
        'dropped' => 0,
        'on_hover' => 0,
        'orientation' => 'horizontal',
        'mlid' => 669,
        'plid' => 0,
      ),
      'identifier' => 'main-menu_lcp-home:http://www.librarycompany.org',
      'icon' => array(
        'icon' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -43,
    'customized' => 1,
  );
  // Exported menu link: main-menu_none:<block>.
  $menu_links['main-menu_none:<block>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<block>',
    'router_path' => '<block>',
    'link_title' => '<none>',
    'options' => array(
      'menu_attach_block' => array(
        'name' => 'islandora_solr|simple',
        'use_ajax' => 0,
        'no_drop' => 0,
        'dropped' => 0,
        'on_hover' => 0,
        'orientation' => 'horizontal',
        'mlid' => 703,
        'plid' => 0,
      ),
      'icon' => array(
        'icon' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'attributes' => array(
        'class' => array(
          0 => 'header-link-search',
        ),
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_none:<block>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -42,
    'customized' => 1,
  );
  // Exported menu link: main-menu_research:http://librarycompany.org/collections/.
  $menu_links['main-menu_research:http://librarycompany.org/collections/'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://librarycompany.org/collections/',
    'router_path' => '',
    'link_title' => 'Research',
    'options' => array(
      'menu_attach_block' => array(
        'name' => '',
        'use_ajax' => 0,
        'no_drop' => 0,
        'dropped' => 0,
        'on_hover' => 0,
        'orientation' => 'horizontal',
        'mlid' => 667,
        'plid' => 0,
      ),
      'identifier' => 'main-menu_research:http://librarycompany.org/collections/',
      'icon' => array(
        'icon' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: main-menu_rights-and-reproductions:http://librarycompany.org/collections/rightsrepro/.
  $menu_links['main-menu_rights-and-reproductions:http://librarycompany.org/collections/rightsrepro/'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://librarycompany.org/collections/rightsrepro/',
    'router_path' => '',
    'link_title' => 'Rights and Reproductions',
    'options' => array(
      'menu_attach_block' => array(
        'name' => '',
        'use_ajax' => 0,
        'no_drop' => 0,
        'dropped' => 0,
        'on_hover' => 0,
        'orientation' => 'horizontal',
        'mlid' => 666,
        'plid' => 0,
      ),
      'identifier' => 'main-menu_rights-and-reproductions:http://librarycompany.org/collections/rightsrepro/',
      'icon' => array(
        'icon' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: main-menu_support-the-library:https://support.librarycompany.org/.
  $menu_links['main-menu_support-the-library:https://support.librarycompany.org/'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'https://support.librarycompany.org/',
    'router_path' => '',
    'link_title' => 'Support the Library',
    'options' => array(
      'menu_attach_block' => array(
        'name' => '',
        'use_ajax' => 0,
        'no_drop' => 0,
        'dropped' => 0,
        'on_hover' => 0,
        'orientation' => 'horizontal',
        'mlid' => 670,
        'plid' => 0,
      ),
      'identifier' => 'main-menu_support-the-library:https://support.librarycompany.org/',
      'icon' => array(
        'icon' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
  );
  // Exported menu link: main-menu_visit:http://librarycompany.org/about/access.htm.
  $menu_links['main-menu_visit:http://librarycompany.org/about/access.htm'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://librarycompany.org/about/access.htm',
    'router_path' => '',
    'link_title' => 'Visit',
    'options' => array(
      'menu_attach_block' => array(
        'name' => '',
        'use_ajax' => 0,
        'no_drop' => 0,
        'dropped' => 0,
        'on_hover' => 0,
        'orientation' => 'horizontal',
        'mlid' => 668,
        'plid' => 0,
      ),
      'identifier' => 'main-menu_visit:http://librarycompany.org/about/access.htm',
      'icon' => array(
        'icon' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: menu-social-media-header_icon-dot-2:http://www.flickr.com/photos/library-company-of-philadelphia/.
  $menu_links['menu-social-media-header_icon-dot-2:http://www.flickr.com/photos/library-company-of-philadelphia/'] = array(
    'menu_name' => 'menu-social-media-header',
    'link_path' => 'http://www.flickr.com/photos/library-company-of-philadelphia/',
    'router_path' => '',
    'link_title' => 'icon-dot-2',
    'options' => array(
      'menu_attach_block' => array(
        'name' => '',
        'use_ajax' => 0,
        'no_drop' => 0,
        'dropped' => 0,
        'on_hover' => 0,
        'orientation' => 'horizontal',
        'mlid' => 692,
        'plid' => 0,
      ),
      'identifier' => 'menu-social-media-header_icon-dot-2:http://www.flickr.com/photos/library-company-of-philadelphia/',
      'icon' => array(
        'icon' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-social-media-header_icon-facebook:http://www.facebook.com/pages/The-Library-Company-of-Philadelphia/74593339617?ref=mf#.
  $menu_links['menu-social-media-header_icon-facebook:http://www.facebook.com/pages/The-Library-Company-of-Philadelphia/74593339617?ref=mf#'] = array(
    'menu_name' => 'menu-social-media-header',
    'link_path' => 'http://www.facebook.com/pages/The-Library-Company-of-Philadelphia/74593339617?ref=mf#',
    'router_path' => '',
    'link_title' => 'icon-facebook',
    'options' => array(
      'menu_attach_block' => array(
        'name' => '',
        'use_ajax' => 0,
        'no_drop' => 0,
        'dropped' => 0,
        'on_hover' => 0,
        'orientation' => 'horizontal',
        'mlid' => 690,
        'plid' => 0,
      ),
      'identifier' => 'menu-social-media-header_icon-facebook:http://www.facebook.com/pages/The-Library-Company-of-Philadelphia/74593339617?ref=mf#',
      'icon' => array(
        'icon' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-social-media-header_icon-tumbler:http://librarycompany.tumblr.com/.
  $menu_links['menu-social-media-header_icon-tumbler:http://librarycompany.tumblr.com/'] = array(
    'menu_name' => 'menu-social-media-header',
    'link_path' => 'http://librarycompany.tumblr.com/',
    'router_path' => '',
    'link_title' => 'icon-tumbler',
    'options' => array(
      'menu_attach_block' => array(
        'name' => '',
        'use_ajax' => 0,
        'no_drop' => 0,
        'dropped' => 0,
        'on_hover' => 0,
        'orientation' => 'horizontal',
        'mlid' => 694,
        'plid' => 0,
      ),
      'identifier' => 'menu-social-media-header_icon-tumbler:http://librarycompany.tumblr.com/',
      'icon' => array(
        'icon' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: menu-social-media-header_icon-twitter:http://www.twitter.com/librarycompany.
  $menu_links['menu-social-media-header_icon-twitter:http://www.twitter.com/librarycompany'] = array(
    'menu_name' => 'menu-social-media-header',
    'link_path' => 'http://www.twitter.com/librarycompany',
    'router_path' => '',
    'link_title' => 'icon-twitter',
    'options' => array(
      'menu_attach_block' => array(
        'name' => '',
        'use_ajax' => 0,
        'no_drop' => 0,
        'dropped' => 0,
        'on_hover' => 0,
        'orientation' => 'horizontal',
        'mlid' => 691,
        'plid' => 0,
      ),
      'identifier' => 'menu-social-media-header_icon-twitter:http://www.twitter.com/librarycompany',
      'icon' => array(
        'icon' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-social-media-header_icon-youtube:http://www.youtube.com/user/LibraryCompany/feed.
  $menu_links['menu-social-media-header_icon-youtube:http://www.youtube.com/user/LibraryCompany/feed'] = array(
    'menu_name' => 'menu-social-media-header',
    'link_path' => 'http://www.youtube.com/user/LibraryCompany/feed',
    'router_path' => '',
    'link_title' => 'icon-youtube',
    'options' => array(
      'menu_attach_block' => array(
        'name' => '',
        'use_ajax' => 0,
        'no_drop' => 0,
        'dropped' => 0,
        'on_hover' => 0,
        'orientation' => 'horizontal',
        'mlid' => 693,
        'plid' => 0,
      ),
      'identifier' => 'menu-social-media-header_icon-youtube:http://www.youtube.com/user/LibraryCompany/feed',
      'icon' => array(
        'icon' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: menu-social-media-header_none:<block>.
  $menu_links['menu-social-media-header_none:<block>'] = array(
    'menu_name' => 'menu-social-media-header',
    'link_path' => '<block>',
    'router_path' => '<block>',
    'link_title' => '<none>',
    'options' => array(
      'menu_attach_block' => array(
        'name' => 'islandora_solr|simple',
        'use_ajax' => 0,
        'no_drop' => 0,
        'dropped' => 0,
        'on_hover' => 0,
        'orientation' => 'horizontal',
        'mlid' => 704,
        'plid' => 0,
      ),
      'icon' => array(
        'icon' => '',
        'position' => 'title_before',
        'title_wrapper_element' => 'span',
        'title_wrapper_class' => 'title',
        'breadcrumb' => 0,
        'title_wrapper' => 0,
      ),
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-social-media-header_none:<block>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: user-menu_log-in:user/login.
  $menu_links['user-menu_log-in:user/login'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user/login',
    'router_path' => 'user/login',
    'link_title' => 'Log in',
    'options' => array(
      'identifier' => 'user-menu_log-in:user/login',
    ),
    'module' => 'system',
    'hidden' => -1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'user-menu_my-account:user',
  );
  // Exported menu link: user-menu_log-out:user/logout.
  $menu_links['user-menu_log-out:user/logout'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user/logout',
    'router_path' => 'user/logout',
    'link_title' => 'Log out',
    'options' => array(
      'identifier' => 'user-menu_log-out:user/logout',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 10,
    'customized' => 0,
  );
  // Exported menu link: user-menu_user-account:user.
  $menu_links['user-menu_user-account:user'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user',
    'router_path' => 'user',
    'link_title' => 'User account',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'user-menu_user-account:user',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -10,
    'customized' => 0,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('<none>');
  t('About LCP');
  t('Explore');
  t('Home');
  t('LCP Home');
  t('Log in');
  t('Log out');
  t('Research');
  t('Rights and Reproductions');
  t('Support the Library');
  t('User account');
  t('Visit');
  t('advanced search');
  t('icon-dot-2');
  t('icon-facebook');
  t('icon-tumbler');
  t('icon-twitter');
  t('icon-youtube');

  return $menu_links;
}
