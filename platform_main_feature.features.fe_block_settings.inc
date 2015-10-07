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
    'css_class' => '',
    'custom' => 0,
    'machine_name' => 'submit_to_collection_anonymous',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(
      'anonymous user' => 1,
    ),
    'themes' => array(
      'admindora' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'admindora',
        'weight' => 0,
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'ir7' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'ir7',
        'weight' => -18,
      ),
      'saas' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'saas',
        'weight' => -7,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['block-submit_to_collection_box'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'machine_name' => 'submit_to_collection_box',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(
      'authenticated user' => 2,
    ),
    'themes' => array(
      'admindora' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'admindora',
        'weight' => 0,
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'ir7' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'ir7',
        'weight' => -19,
      ),
      'saas' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'saas',
        'weight' => -6,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
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
      'admindora' => array(
        'region' => 'dashboard_inactive',
        'status' => 1,
        'theme' => 'admindora',
        'weight' => 0,
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'ir7' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ir7',
        'weight' => 0,
      ),
      'saas' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'saas',
        'weight' => -11,
      ),
      'seven' => array(
        'region' => 'dashboard_inactive',
        'status' => 1,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['google_analytics_reports-dashboard'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'dashboard',
    'module' => 'google_analytics_reports',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'admindora' => array(
        'region' => 'dashboard_inactive',
        'status' => 1,
        'theme' => 'admindora',
        'weight' => 0,
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'ir7' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'ir7',
        'weight' => -15,
      ),
      'saas' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'saas',
        'weight' => -27,
      ),
      'seven' => array(
        'region' => 'dashboard_inactive',
        'status' => 1,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['google_analytics_reports-path_mini'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'path_mini',
    'module' => 'google_analytics_reports',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'admindora' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'admindora',
        'weight' => 0,
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'ir7' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ir7',
        'weight' => -14,
      ),
      'saas' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'saas',
        'weight' => -27,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['homebox-custom'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'custom',
    'module' => 'homebox',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'admindora' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'admindora',
        'weight' => 0,
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'ir7' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ir7',
        'weight' => 0,
      ),
      'saas' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'saas',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
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
      'admindora' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'admindora',
        'weight' => 0,
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'ir7' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'ir7',
        'weight' => -20,
      ),
      'saas' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'saas',
        'weight' => -31,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
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
      'admindora' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'admindora',
        'weight' => 0,
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'ir7' => array(
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'ir7',
        'weight' => -9,
      ),
      'saas' => array(
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'saas',
        'weight' => -9,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
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
      'admindora' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'admindora',
        'weight' => 0,
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'ir7' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'ir7',
        'weight' => -12,
      ),
      'saas' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'saas',
        'weight' => -29,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
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
      'admindora' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'admindora',
        'weight' => 0,
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'ir7' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'ir7',
        'weight' => -19,
      ),
      'saas' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'saas',
        'weight' => -19,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['islandora_solr-current_query'] = array(
    'cache' => -1,
    'css_class' => 'block-islandora-solr-current-query',
    'custom' => 0,
    'delta' => 'current_query',
    'module' => 'islandora_solr',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'admindora' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'admindora',
        'weight' => 0,
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'ir7' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ir7',
        'weight' => -18,
      ),
      'saas' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'saas',
        'weight' => -33,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
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
      'admindora' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'admindora',
        'weight' => 0,
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'ir7' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'ir7',
        'weight' => -24,
      ),
      'saas' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'saas',
        'weight' => -35,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['islandora_solr-search_navigation'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'search_navigation',
    'module' => 'islandora_solr',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'admindora' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'admindora',
        'weight' => 0,
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'ir7' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ir7',
        'weight' => 0,
      ),
      'saas' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'saas',
        'weight' => -34,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['islandora_solr-simple'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'simple',
    'module' => 'islandora_solr',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'admindora' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'admindora',
        'weight' => 0,
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'ir7' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'ir7',
        'weight' => -22,
      ),
      'saas' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'saas',
        'weight' => -22,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
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
      'admindora' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'admindora',
        'weight' => 0,
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'ir7' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ir7',
        'weight' => -17,
      ),
      'saas' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'saas',
        'weight' => -32,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
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
      'admindora' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'admindora',
        'weight' => 0,
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'ir7' => array(
        'region' => '',
        'status' => 1,
        'theme' => 'ir7',
        'weight' => 0,
      ),
      'saas' => array(
        'region' => 'header',
        'status' => 1,
        'theme' => 'saas',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
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
      'admindora' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'admindora',
        'weight' => 0,
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'ir7' => array(
        'region' => 'footer',
        'status' => 1,
        'theme' => 'ir7',
        'weight' => -19,
      ),
      'saas' => array(
        'region' => 'bottom',
        'status' => 1,
        'theme' => 'saas',
        'weight' => -29,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
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
      'admindora' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'admindora',
        'weight' => 0,
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'ir7' => array(
        'region' => 'sub_header',
        'status' => 1,
        'theme' => 'ir7',
        'weight' => 0,
      ),
      'saas' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'saas',
        'weight' => -26,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
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
      'admindora' => array(
        'region' => 'dashboard_inactive',
        'status' => 1,
        'theme' => 'admindora',
        'weight' => 0,
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'ir7' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ir7',
        'weight' => 0,
      ),
      'saas' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'saas',
        'weight' => -10,
      ),
      'seven' => array(
        'region' => 'dashboard_main',
        'status' => 1,
        'theme' => 'seven',
        'weight' => 10,
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
      'admindora' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'admindora',
        'weight' => 0,
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'ir7' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ir7',
        'weight' => 0,
      ),
      'saas' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'saas',
        'weight' => -4,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
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
      'admindora' => array(
        'region' => 'dashboard_inactive',
        'status' => 1,
        'theme' => 'admindora',
        'weight' => 0,
      ),
      'bartik' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'bartik',
        'weight' => -1,
      ),
      'ir7' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ir7',
        'weight' => -1,
      ),
      'saas' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'saas',
        'weight' => -9,
      ),
      'seven' => array(
        'region' => 'dashboard_sidebar',
        'status' => 1,
        'theme' => 'seven',
        'weight' => -10,
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
      'admindora' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'admindora',
        'weight' => 0,
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'ir7' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ir7',
        'weight' => 0,
      ),
      'saas' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'saas',
        'weight' => -8,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
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
      'admindora' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'admindora',
        'weight' => 0,
      ),
      'bartik' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'ir7' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'ir7',
        'weight' => -21,
      ),
      'saas' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'saas',
        'weight' => -32,
      ),
      'seven' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'seven',
        'weight' => 0,
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
      'admindora' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'admindora',
        'weight' => 0,
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'ir7' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ir7',
        'weight' => 0,
      ),
      'saas' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'saas',
        'weight' => -16,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
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
      'admindora' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'admindora',
        'weight' => 0,
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'ir7' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ir7',
        'weight' => 0,
      ),
      'saas' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'saas',
        'weight' => -15,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
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
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'admindora' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'admindora',
        'weight' => 0,
      ),
      'bartik' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'ir7' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ir7',
        'weight' => 0,
      ),
      'saas' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'saas',
        'weight' => -13,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
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
      'admindora' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'admindora',
        'weight' => 10,
      ),
      'bartik' => array(
        'region' => 'footer',
        'status' => 1,
        'theme' => 'bartik',
        'weight' => 10,
      ),
      'ir7' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ir7',
        'weight' => -20,
      ),
      'saas' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'saas',
        'weight' => -12,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 10,
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
      'admindora' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'admindora',
        'weight' => 0,
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'ir7' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ir7',
        'weight' => 0,
      ),
      'saas' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'saas',
        'weight' => -2,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
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
      'admindora' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'admindora',
        'weight' => 0,
      ),
      'bartik' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'ir7' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ir7',
        'weight' => -19,
      ),
      'saas' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'saas',
        'weight' => -3,
      ),
      'seven' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'seven',
        'weight' => 10,
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
      'admindora' => array(
        'region' => 'dashboard_inactive',
        'status' => 1,
        'theme' => 'admindora',
        'weight' => 0,
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'ir7' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ir7',
        'weight' => 0,
      ),
      'saas' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'saas',
        'weight' => 6,
      ),
      'seven' => array(
        'region' => 'dashboard_sidebar',
        'status' => 1,
        'theme' => 'seven',
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
      'admindora' => array(
        'region' => 'dashboard_inactive',
        'status' => 1,
        'theme' => 'admindora',
        'weight' => 0,
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'ir7' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ir7',
        'weight' => 0,
      ),
      'saas' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'saas',
        'weight' => 7,
      ),
      'seven' => array(
        'region' => 'dashboard_inactive',
        'status' => 1,
        'theme' => 'seven',
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
      'admindora' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'admindora',
        'weight' => 0,
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'ir7' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ir7',
        'weight' => 0,
      ),
      'saas' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'saas',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
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
      'admindora' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'admindora',
        'weight' => 0,
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'ir7' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ir7',
        'weight' => 0,
      ),
      'saas' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'saas',
        'weight' => -1,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
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
      'admindora' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'admindora',
        'weight' => 0,
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'ir7' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ir7',
        'weight' => 0,
      ),
      'saas' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'saas',
        'weight' => 4,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-frontpage_solr_boxes-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'frontpage_solr_boxes-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'admindora' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'admindora',
        'weight' => 0,
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'ir7' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'ir7',
        'weight' => -16,
      ),
      'saas' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'saas',
        'weight' => -28,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-frontpage_solr_boxes-block_1'] = array(
    'cache' => -1,
    'css_class' => 'front-featured-collections',
    'custom' => 0,
    'delta' => 'frontpage_solr_boxes-block_1',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'admindora' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'admindora',
        'weight' => 0,
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'ir7' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'ir7',
        'weight' => -17,
      ),
      'saas' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'saas',
        'weight' => -30,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['views-frontpage_solr_boxes-block_3'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'frontpage_solr_boxes-block_3',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'admindora' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'admindora',
        'weight' => 0,
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'ir7' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ir7',
        'weight' => 0,
      ),
      'saas' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'saas',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-frontpage_solr_boxes-block_4'] = array(
    'cache' => -1,
    'css_class' => 'about-featured-collections',
    'custom' => 0,
    'delta' => 'frontpage_solr_boxes-block_4',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'admindora' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'admindora',
        'weight' => 0,
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'ir7' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ir7',
        'weight' => 0,
      ),
      'saas' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'saas',
        'weight' => -31,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['views-image_blocks-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'image_blocks-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'admindora' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'admindora',
        'weight' => 0,
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'ir7' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ir7',
        'weight' => -11,
      ),
      'saas' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'saas',
        'weight' => 1,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
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
      'admindora' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'admindora',
        'weight' => 0,
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'ir7' => array(
        'region' => 'footer',
        'status' => 1,
        'theme' => 'ir7',
        'weight' => -20,
      ),
      'saas' => array(
        'region' => 'footer',
        'status' => 1,
        'theme' => 'saas',
        'weight' => -32,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['views-image_blocks-block_2'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'image_blocks-block_2',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'admindora' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'admindora',
        'weight' => 0,
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'ir7' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'ir7',
        'weight' => -23,
      ),
      'saas' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'saas',
        'weight' => -25,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-image_blocks-block_4'] = array(
    'cache' => -1,
    'css_class' => 'footer-contact-info',
    'custom' => 0,
    'delta' => 'image_blocks-block_4',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'admindora' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'admindora',
        'weight' => 0,
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'ir7' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ir7',
        'weight' => 0,
      ),
      'saas' => array(
        'region' => 'footer',
        'status' => 1,
        'theme' => 'saas',
        'weight' => -30,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
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
      'admindora' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'admindora',
        'weight' => 0,
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'ir7' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ir7',
        'weight' => 0,
      ),
      'saas' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'saas',
        'weight' => 5,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-top_facet_searches-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'top_facet_searches-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'admindora' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'admindora',
        'weight' => 0,
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'ir7' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ir7',
        'weight' => -6,
      ),
      'saas' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'saas',
        'weight' => 3,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-top_site_searches-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'top_site_searches-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'admindora' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'admindora',
        'weight' => 0,
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'ir7' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'ir7',
        'weight' => -13,
      ),
      'saas' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'saas',
        'weight' => -26,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
