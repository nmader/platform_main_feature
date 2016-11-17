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
  // Exported menu link: menu-copyright-menu_copyright-2016-moffitt-cancer-center:<front>.
  $menu_links['menu-copyright-menu_copyright-2016-moffitt-cancer-center:<front>'] = array(
    'menu_name' => 'menu-copyright-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => '©Copyright 2016 Moffitt Cancer Center',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-copyright-menu_copyright-2016-moffitt-cancer-center:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-menu_donor-privacy:https://moffitt.org/give-back/donor-privacy/.
  $menu_links['menu-footer-menu_donor-privacy:https://moffitt.org/give-back/donor-privacy/'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'https://moffitt.org/give-back/donor-privacy/',
    'router_path' => '',
    'link_title' => 'Donor Privacy',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-footer-menu_donor-privacy:https://moffitt.org/give-back/donor-privacy/',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-menu_legal-statements--policies:https://moffitt.org/legal-statements-and-policies/.
  $menu_links['menu-footer-menu_legal-statements--policies:https://moffitt.org/legal-statements-and-policies/'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'https://moffitt.org/legal-statements-and-policies/',
    'router_path' => '',
    'link_title' => 'Legal Statements & Policies',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-footer-menu_legal-statements--policies:https://moffitt.org/legal-statements-and-policies/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-menu_site-map:https://moffitt.org/sitemap/.
  $menu_links['menu-footer-menu_site-map:https://moffitt.org/sitemap/'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'https://moffitt.org/sitemap/',
    'router_path' => '',
    'link_title' => 'Site Map',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-footer-menu_site-map:https://moffitt.org/sitemap/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-menu_unsubscribe:https://moffitt.org/eforms/unsusbscribeform/.
  $menu_links['menu-footer-menu_unsubscribe:https://moffitt.org/eforms/unsusbscribeform/'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'https://moffitt.org/eforms/unsusbscribeform/',
    'router_path' => '',
    'link_title' => 'Unsubscribe',
    'options' => array(
      'identifier' => 'menu-footer-menu_unsubscribe:https://moffitt.org/eforms/unsusbscribeform/',
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
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
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-header-menu_collections:islandora.
  $menu_links['menu-header-menu_collections:islandora'] = array(
    'menu_name' => 'menu-header-menu',
    'link_path' => 'islandora',
    'router_path' => 'islandora',
    'link_title' => 'Collections',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-header-menu_collections:islandora',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
  );
  // Exported menu link: menu-header-menu_contact-us:mailto:library@moffitt.org.
  $menu_links['menu-header-menu_contact-us:mailto:library@moffitt.org'] = array(
    'menu_name' => 'menu-header-menu',
    'link_path' => 'mailto:library@moffitt.org',
    'router_path' => '',
    'link_title' => 'Contact Us',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'query' => array(
        'display' => 'list',
      ),
      'identifier' => 'menu-header-menu_contact-us:mailto:library@moffitt.org',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-header-menu_donate-materials-:islandora.
  $menu_links['menu-header-menu_donate-materials-:islandora'] = array(
    'menu_name' => 'menu-header-menu',
    'link_path' => 'islandora',
    'router_path' => 'islandora',
    'link_title' => 'Donate Materials ',
    'options' => array(
      'attributes' => array(
        'title' => '(link to form forthcoming)',
      ),
      'identifier' => 'menu-header-menu_donate-materials-:islandora',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
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
    'hidden' => 0,
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
    'weight' => -44,
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
    'weight' => -43,
    'customized' => 1,
  );
  // Exported menu link: menu-header-menu_moffitt-cancer-center:https://moffitt.org/.
  $menu_links['menu-header-menu_moffitt-cancer-center:https://moffitt.org/'] = array(
    'menu_name' => 'menu-header-menu',
    'link_path' => 'https://moffitt.org/',
    'router_path' => '',
    'link_title' => 'Moffitt Cancer Center',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-header-menu_moffitt-cancer-center:https://moffitt.org/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: menu-quick-links_view-sample-page-one:uuid/node/349cb0ef-2bc0-412e-b830-6b669b52f193.
  $menu_links['menu-quick-links_view-sample-page-one:uuid/node/349cb0ef-2bc0-412e-b830-6b669b52f193'] = array(
    'menu_name' => 'menu-quick-links',
    'link_path' => 'uuid/node/349cb0ef-2bc0-412e-b830-6b669b52f193',
    'router_path' => 'uuid',
    'link_title' => 'View Sample Page One',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
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
      'attributes' => array(
        'title' => '',
      ),
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

  // Translatables
  // Included for use with string extractors like potx.
  t('About');
  t('Collections');
  t('Contact Us');
  t('Donate Materials ');
  t('Donor Privacy');
  t('Home');
  t('Legal Statements & Policies');
  t('Login');
  t('Logout');
  t('Moffitt Cancer Center');
  t('Site Map');
  t('Unsubscribe');
  t('View Sample Page One');
  t('View Sample Page Two');
  t('©Copyright 2016 Moffitt Cancer Center');

  return $menu_links;
}
