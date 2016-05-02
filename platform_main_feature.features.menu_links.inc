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
  // Exported menu link: menu-browse-content_root-collection:islandora.
  $menu_links['menu-browse-content_root-collection:islandora'] = array(
    'menu_name' => 'menu-browse-content',
    'link_path' => 'islandora',
    'router_path' => 'islandora',
    'link_title' => 'Root Collection',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-browse-content_root-collection:islandora',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-lower-menu_-university-of-connecticut:http://uconn.edu.
  $menu_links['menu-footer-lower-menu_-university-of-connecticut:http://uconn.edu'] = array(
    'menu_name' => 'menu-footer-lower-menu',
    'link_path' => 'http://uconn.edu',
    'router_path' => '',
    'link_title' => '© University of Connecticut',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-footer-lower-menu_-university-of-connecticut:http://uconn.edu',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-lower-menu_disclaimers-privacy--copyright:http://uconn.edu/disclaimers-privacy-copyright/.
  $menu_links['menu-footer-lower-menu_disclaimers-privacy--copyright:http://uconn.edu/disclaimers-privacy-copyright/'] = array(
    'menu_name' => 'menu-footer-lower-menu',
    'link_path' => 'http://uconn.edu/disclaimers-privacy-copyright/',
    'router_path' => '',
    'link_title' => 'Disclaimers, Privacy & Copyright',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-footer-lower-menu_disclaimers-privacy--copyright:http://uconn.edu/disclaimers-privacy-copyright/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-menu_about:http://lib.uconn.edu/services/research/research-data/archiving/.
  $menu_links['menu-footer-menu_about:http://lib.uconn.edu/services/research/research-data/archiving/'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'http://lib.uconn.edu/services/research/research-data/archiving/',
    'router_path' => '',
    'link_title' => 'About',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-footer-menu_about:http://lib.uconn.edu/services/research/research-data/archiving/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-menu_feedback:mailto:researchdata@lib.uconn.edu.
  $menu_links['menu-footer-menu_feedback:mailto:researchdata@lib.uconn.edu'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'mailto:researchdata@lib.uconn.edu',
    'router_path' => '',
    'link_title' => 'Feedback',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-footer-menu_feedback:mailto:researchdata@lib.uconn.edu',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
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
  // Exported menu link: menu-footer-menu_policies:http://lib.uconn.edu/services/research/research-data/archiving/.
  $menu_links['menu-footer-menu_policies:http://lib.uconn.edu/services/research/research-data/archiving/'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'http://lib.uconn.edu/services/research/research-data/archiving/',
    'router_path' => '',
    'link_title' => 'Policies',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-footer-menu_policies:http://lib.uconn.edu/services/research/research-data/archiving/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-menu_submit:http://research.lib.uconn.edu/submit.
  $menu_links['menu-footer-menu_submit:http://research.lib.uconn.edu/submit'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'http://research.lib.uconn.edu/submit',
    'router_path' => '',
    'link_title' => 'Submit',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-footer-menu_submit:http://research.lib.uconn.edu/submit',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-header-menu_about-this-site:uuid/node/3dfbfeaf-cb77-4ac0-b16f-145af17649b5.
  $menu_links['menu-header-menu_about-this-site:uuid/node/3dfbfeaf-cb77-4ac0-b16f-145af17649b5'] = array(
    'menu_name' => 'menu-header-menu',
    'link_path' => 'uuid/node/3dfbfeaf-cb77-4ac0-b16f-145af17649b5',
    'router_path' => 'uuid',
    'link_title' => 'About this site',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
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
  // Exported menu link: menu-header-menu_browse-repository:islandora/object/islandora:root.
  $menu_links['menu-header-menu_browse-repository:islandora/object/islandora:root'] = array(
    'menu_name' => 'menu-header-menu',
    'link_path' => 'islandora/object/islandora:root',
    'router_path' => 'islandora/object/%',
    'link_title' => 'Browse repository',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'query' => array(
        'display' => 'list',
      ),
      'identifier' => 'menu-header-menu_browse-repository:islandora/object/islandora:root',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: menu-header-menu_make-contact:uuid/node/329a2134-140a-4447-a59f-389948bef2ba.
  $menu_links['menu-header-menu_make-contact:uuid/node/329a2134-140a-4447-a59f-389948bef2ba'] = array(
    'menu_name' => 'menu-header-menu',
    'link_path' => 'uuid/node/329a2134-140a-4447-a59f-389948bef2ba',
    'router_path' => 'uuid',
    'link_title' => 'Make contact',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
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
      'attributes' => array(
        'title' => '',
      ),
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
  // Exported menu link: menu-library-support_support-the-libraries:http://lib.uconn.edu/about/giving/.
  $menu_links['menu-library-support_support-the-libraries:http://lib.uconn.edu/about/giving/'] = array(
    'menu_name' => 'menu-library-support',
    'link_path' => 'http://lib.uconn.edu/about/giving/',
    'router_path' => '',
    'link_title' => 'Support the Libraries',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-library-support_support-the-libraries:http://lib.uconn.edu/about/giving/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-news_book-content-model-workshop:islandora.
  $menu_links['menu-news_book-content-model-workshop:islandora'] = array(
    'menu_name' => 'menu-news',
    'link_path' => 'islandora',
    'router_path' => 'islandora',
    'link_title' => 'Book content model workshop',
    'options' => array(
      'identifier' => 'menu-news_book-content-model-workshop:islandora',
      'attributes' => array(
        'target' => '_blank',
      ),
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

  // Translatables
  // Included for use with string extractors like potx.
  t('About');
  t('About this site');
  t('Book content model workshop');
  t('Browse repository');
  t('Disclaimers, Privacy & Copyright');
  t('Feedback');
  t('Home');
  t('Login');
  t('Logout');
  t('Make contact');
  t('My Bookmarks');
  t('Policies');
  t('Root Collection');
  t('Submit');
  t('Support the Libraries');
  t('© University of Connecticut');

  return $menu_links;
}
