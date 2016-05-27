<?php
/**
 * @file
 * platform_main_feature.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function platform_main_feature_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['block-submit_to_collection_anonymous'] = array(
    'cache' => -1,
    'css_class' => 'submit-collection-anon',
    'custom' => 0,
    'machine_name' => 'submit_to_collection_anonymous',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(
      'anonymous user' => 1,
    ),
    'themes' => array(
      'ir7' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'ir7',
        'weight' => -18,
      ),
      'ir7_saas' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'ir7_saas',
        'weight' => -26,
      ),
      'zen' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'zen',
        'weight' => -18,
      ),
    ),
    'title' => '<none>',
    'visibility' => 1,
  );

  $export['block-submit_to_collection_box'] = array(
    'cache' => -1,
    'css_class' => 'submit-collection',
    'custom' => 0,
    'machine_name' => 'submit_to_collection_box',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(
      'authenticated user' => 2,
    ),
    'themes' => array(
      'ir7' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'ir7',
        'weight' => -19,
      ),
      'ir7_saas' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'ir7_saas',
        'weight' => -27,
      ),
      'zen' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'zen',
        'weight' => -19,
      ),
    ),
    'title' => '<none>',
    'visibility' => 1,
  );

  $export['comment-recent'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'recent',
    'module' => 'comment',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'ir7' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ir7',
        'weight' => 0,
      ),
      'ir7_saas' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ir7_saas',
        'weight' => 0,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['islandora_bookmark-islandora_bookmark'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'islandora_bookmark',
    'module' => 'islandora_bookmark',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'ir7' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'ir7',
        'weight' => -20,
      ),
      'ir7_saas' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'ir7_saas',
        'weight' => -28,
      ),
      'zen' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'zen',
        'weight' => -20,
      ),
    ),
    'title' => 'Bookmark',
    'visibility' => 0,
  );

  $export['islandora_compound_object-compound_navigation'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'compound_navigation',
    'module' => 'islandora_compound_object',
    'node_types' => array(),
    'pages' => 'islandora/object/*',
    'roles' => array(),
    'themes' => array(
      'ir7' => array(
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'ir7',
        'weight' => -9,
      ),
      'ir7_saas' => array(
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'ir7_saas',
        'weight' => -32,
      ),
      'zen' => array(
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'zen',
        'weight' => -9,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['islandora_solr-advanced'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'advanced',
    'module' => 'islandora_solr',
    'node_types' => array(),
    'pages' => 'advanced-search',
    'roles' => array(),
    'themes' => array(
      'ir7' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'ir7',
        'weight' => -12,
      ),
      'ir7_saas' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'ir7_saas',
        'weight' => -24,
      ),
      'zen' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'zen',
        'weight' => -12,
      ),
    ),
    'title' => '<none>',
    'visibility' => 1,
  );

  $export['islandora_solr-basic_facets'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'basic_facets',
    'module' => 'islandora_solr',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'ir7' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'ir7',
        'weight' => -19,
      ),
      'ir7_saas' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'ir7_saas',
        'weight' => -33,
      ),
      'zen' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'zen',
        'weight' => -19,
      ),
    ),
    'title' => 'Facets',
    'visibility' => 0,
  );

  $export['islandora_solr-current_query'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'current_query',
    'module' => 'islandora_solr',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'ir7' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ir7',
        'weight' => -18,
      ),
      'ir7_saas' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ir7_saas',
        'weight' => -18,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => -18,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['islandora_solr-display_switch'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'display_switch',
    'module' => 'islandora_solr',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'ir7' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'ir7',
        'weight' => -24,
      ),
      'ir7_saas' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'ir7_saas',
        'weight' => -33,
      ),
      'zen' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'zen',
        'weight' => -24,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['islandora_solr-simple'] = array(
    'cache' => -1,
    'css_class' => 'front-search',
    'custom' => 0,
    'delta' => 'simple',
    'module' => 'islandora_solr',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'ir7' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'ir7',
        'weight' => -22,
      ),
      'ir7_saas' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'ir7_saas',
        'weight' => -30,
      ),
      'zen' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'zen',
        'weight' => -22,
      ),
    ),
    'title' => '<none>',
    'visibility' => 1,
  );

  $export['islandora_solr-sort'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'sort',
    'module' => 'islandora_solr',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'ir7' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ir7',
        'weight' => -17,
      ),
      'ir7_saas' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ir7_saas',
        'weight' => -17,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => -17,
      ),
    ),
    'title' => 'Sort',
    'visibility' => 0,
  );

  $export['menu-features'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'features',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'ir7' => array(
        'region' => '',
        'status' => 1,
        'theme' => 'ir7',
        'weight' => 0,
      ),
      'ir7_saas' => array(
        'region' => 'header',
        'status' => 1,
        'theme' => 'ir7_saas',
        'weight' => -31,
      ),
      'zen' => array(
        'region' => 'header',
        'status' => 1,
        'theme' => 'zen',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['menu-menu-footer-menu'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'menu-footer-menu',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'ir7' => array(
        'region' => 'footer',
        'status' => 1,
        'theme' => 'ir7',
        'weight' => -19,
      ),
      'ir7_saas' => array(
        'region' => 'footer',
        'status' => 1,
        'theme' => 'ir7_saas',
        'weight' => -19,
      ),
      'zen' => array(
        'region' => 'footer',
        'status' => 1,
        'theme' => 'zen',
        'weight' => -19,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['menu-menu-header-menu'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'menu-header-menu',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'ir7' => array(
        'region' => 'sub_header',
        'status' => 1,
        'theme' => 'ir7',
        'weight' => 0,
      ),
      'ir7_saas' => array(
        'region' => 'header',
        'status' => 1,
        'theme' => 'ir7_saas',
        'weight' => -32,
      ),
      'zen' => array(
        'region' => 'header',
        'status' => 1,
        'theme' => 'zen',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['node-recent'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'recent',
    'module' => 'node',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'ir7' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ir7',
        'weight' => 0,
      ),
      'ir7_saas' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ir7_saas',
        'weight' => 0,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['node-syndicate'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'syndicate',
    'module' => 'node',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'ir7' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ir7',
        'weight' => 0,
      ),
      'ir7_saas' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ir7_saas',
        'weight' => 0,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['search-form'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'form',
    'module' => 'search',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'ir7' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ir7',
        'weight' => -1,
      ),
      'ir7_saas' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ir7_saas',
        'weight' => -1,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => -1,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['shortcut-shortcuts'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'shortcuts',
    'module' => 'shortcut',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'ir7' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ir7',
        'weight' => 0,
      ),
      'ir7_saas' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ir7_saas',
        'weight' => 0,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-help'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'help',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'ir7' => array(
        'region' => 'help',
        'status' => 1,
        'theme' => 'ir7',
        'weight' => 0,
      ),
      'ir7_saas' => array(
        'region' => 'help',
        'status' => 1,
        'theme' => 'ir7_saas',
        'weight' => 0,
      ),
      'zen' => array(
        'region' => 'help',
        'status' => 1,
        'theme' => 'zen',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-main'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'main',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'ir7' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'ir7',
        'weight' => -21,
      ),
      'ir7_saas' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'ir7_saas',
        'weight' => -29,
      ),
      'zen' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'zen',
        'weight' => -21,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-main-menu'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'main-menu',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'ir7' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ir7',
        'weight' => 0,
      ),
      'ir7_saas' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ir7_saas',
        'weight' => 0,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-management'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'management',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'ir7' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ir7',
        'weight' => 0,
      ),
      'ir7_saas' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ir7_saas',
        'weight' => 0,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-navigation'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'navigation',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'ir7' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ir7',
        'weight' => 0,
      ),
      'ir7_saas' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ir7_saas',
        'weight' => 0,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-powered-by'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'powered-by',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'ir7' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ir7',
        'weight' => -20,
      ),
      'ir7_saas' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ir7_saas',
        'weight' => -20,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => -20,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-user-menu'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'user-menu',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'ir7' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ir7',
        'weight' => 0,
      ),
      'ir7_saas' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ir7_saas',
        'weight' => 0,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['user-login'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'login',
    'module' => 'user',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'ir7' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ir7',
        'weight' => -19,
      ),
      'ir7_saas' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ir7_saas',
        'weight' => -19,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => -19,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['user-new'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'new',
    'module' => 'user',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'ir7' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ir7',
        'weight' => 0,
      ),
      'ir7_saas' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ir7_saas',
        'weight' => 0,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['user-online'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'online',
    'module' => 'user',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'ir7' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ir7',
        'weight' => 0,
      ),
      'ir7_saas' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ir7_saas',
        'weight' => 0,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-0e421ddcad5e4ddbe2f4e87f52252332'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => '0e421ddcad5e4ddbe2f4e87f52252332',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'ir7' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ir7',
        'weight' => 0,
      ),
      'ir7_saas' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ir7_saas',
        'weight' => 0,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-30151412eb73ff9de45ec4209bd0898d'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => '30151412eb73ff9de45ec4209bd0898d',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'ir7' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ir7',
        'weight' => 0,
      ),
      'ir7_saas' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ir7_saas',
        'weight' => 0,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-7518164537523ba73652c9a5fd647fe6'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => '7518164537523ba73652c9a5fd647fe6',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'ir7' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ir7',
        'weight' => 0,
      ),
      'ir7_saas' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ir7_saas',
        'weight' => 0,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-front_page_slideshow-block'] = array(
    'cache' => -1,
    'css_class' => 'front-slider',
    'custom' => 0,
    'delta' => 'front_page_slideshow-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'ir7' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ir7',
        'weight' => 0,
      ),
      'ir7_saas' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'ir7_saas',
        'weight' => -32,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 1,
  );

  $export['views-frontpage_solr_boxes-block_1'] = array(
    'cache' => -1,
    'css_class' => 'front-bottom featured-collections',
    'custom' => 0,
    'delta' => 'frontpage_solr_boxes-block_1',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'ir7' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'ir7',
        'weight' => -17,
      ),
      'ir7_saas' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'ir7_saas',
        'weight' => -25,
      ),
      'zen' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'zen',
        'weight' => -17,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['views-image_blocks-block'] = array(
    'cache' => -1,
    'css_class' => 'image-block-front',
    'custom' => 0,
    'delta' => 'image_blocks-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'ir7' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ir7',
        'weight' => -11,
      ),
      'ir7_saas' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ir7_saas',
        'weight' => -11,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => -11,
      ),
    ),
    'title' => '<none>',
    'visibility' => 1,
  );

  $export['views-image_blocks-block_1'] = array(
    'cache' => -1,
    'css_class' => 'footer-logo',
    'custom' => 0,
    'delta' => 'image_blocks-block_1',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'ir7' => array(
        'region' => 'footer',
        'status' => 1,
        'theme' => 'ir7',
        'weight' => -20,
      ),
      'ir7_saas' => array(
        'region' => 'footer',
        'status' => 1,
        'theme' => 'ir7_saas',
        'weight' => -20,
      ),
      'zen' => array(
        'region' => 'footer',
        'status' => 1,
        'theme' => 'zen',
        'weight' => -20,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['views-image_blocks-block_2'] = array(
    'cache' => -1,
    'css_class' => 'welcome',
    'custom' => 0,
    'delta' => 'image_blocks-block_2',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'ir7' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'ir7',
        'weight' => -23,
      ),
      'ir7_saas' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'ir7_saas',
        'weight' => -31,
      ),
      'zen' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'zen',
        'weight' => -23,
      ),
    ),
    'title' => '<none>',
    'visibility' => 1,
  );

  $export['views-object_visitors_by_month-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'object_visitors_by_month-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'ir7' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ir7',
        'weight' => 0,
      ),
      'ir7_saas' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ir7_saas',
        'weight' => 0,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['widgets-s_addthis-share'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 's_addthis-share',
    'module' => 'widgets',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'ir7' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ir7',
        'weight' => 0,
      ),
      'ir7_saas' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ir7_saas',
        'weight' => 0,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['widgets-s_facebook-like-box'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 's_facebook-like-box',
    'module' => 'widgets',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'ir7' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ir7',
        'weight' => 0,
      ),
      'ir7_saas' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ir7_saas',
        'weight' => 0,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['widgets-s_socialmedia_profile-buttons'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 's_socialmedia_profile-buttons',
    'module' => 'widgets',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'ir7' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ir7',
        'weight' => 0,
      ),
      'ir7_saas' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ir7_saas',
        'weight' => 0,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['widgets-s_socialmedia_profile-default'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 's_socialmedia_profile-default',
    'module' => 'widgets',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'ir7' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ir7',
        'weight' => 0,
      ),
      'ir7_saas' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ir7_saas',
        'weight' => 0,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['widgets-s_socialmedia_profile-urls'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 's_socialmedia_profile-urls',
    'module' => 'widgets',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'ir7' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ir7',
        'weight' => 0,
      ),
      'ir7_saas' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ir7_saas',
        'weight' => 0,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['widgets-s_socialmedia_share-default'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 's_socialmedia_share-default',
    'module' => 'widgets',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'ir7' => array(
        'region' => 'footer',
        'status' => 1,
        'theme' => 'ir7',
        'weight' => 0,
      ),
      'ir7_saas' => array(
        'region' => 'footer',
        'status' => 1,
        'theme' => 'ir7_saas',
        'weight' => 0,
      ),
      'zen' => array(
        'region' => 'footer',
        'status' => 1,
        'theme' => 'zen',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['widgets-s_twitter-profile-widget'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 's_twitter-profile-widget',
    'module' => 'widgets',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'ir7' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ir7',
        'weight' => 0,
      ),
      'ir7_saas' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ir7_saas',
        'weight' => 0,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
