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
        'weight' => 5,
      ),
      'saas' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'saas',
        'weight' => -7,
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
        'weight' => 6,
      ),
      'saas' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'saas',
        'weight' => -6,
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
        'weight' => -34,
      ),
      'saas' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'saas',
        'weight' => -11,
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
        'weight' => -23,
      ),
      'saas' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'saas',
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
        'weight' => -22,
      ),
      'saas' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'saas',
        'weight' => -31,
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
        'weight' => -17,
      ),
      'saas' => array(
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'saas',
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
      'admindora' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'admindora',
        'weight' => -14,
      ),
      'saas' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'saas',
        'weight' => -31,
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
        'weight' => -11,
      ),
      'saas' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'saas',
        'weight' => -19,
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
        'weight' => -10,
      ),
      'saas' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'saas',
        'weight' => -33,
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
        'weight' => -13,
      ),
      'saas' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'saas',
        'weight' => -37,
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
        'weight' => -9,
      ),
      'saas' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'saas',
        'weight' => -36,
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
        'weight' => -8,
      ),
      'saas' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'saas',
        'weight' => -22,
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
        'weight' => -7,
      ),
      'saas' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'saas',
        'weight' => -32,
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
        'weight' => -26,
      ),
      'saas' => array(
        'region' => 'header',
        'status' => 1,
        'theme' => 'saas',
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
        'weight' => -25,
      ),
      'saas' => array(
        'region' => 'bottom',
        'status' => 1,
        'theme' => 'saas',
        'weight' => -29,
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
        'weight' => -24,
      ),
      'saas' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'saas',
        'weight' => -26,
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
        'weight' => -33,
      ),
      'saas' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'saas',
        'weight' => -10,
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
        'weight' => 8,
      ),
      'saas' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'saas',
        'weight' => -4,
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
        'weight' => -32,
      ),
      'saas' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'saas',
        'weight' => -9,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['service_links-service_links'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'service_links',
    'module' => 'service_links',
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
      'saas' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'saas',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['service_links-service_links_not_node'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'service_links_not_node',
    'module' => 'service_links',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'admindora' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'admindora',
        'weight' => 1,
      ),
      'saas' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'saas',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['sharethis-sharethis_block'] = array(
    'cache' => 4,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'sharethis_block',
    'module' => 'sharethis',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'admindora' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'admindora',
        'weight' => 3,
      ),
      'saas' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'saas',
        'weight' => 0,
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
        'weight' => 4,
      ),
      'saas' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'saas',
        'weight' => -8,
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
      'saas' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'saas',
        'weight' => -35,
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
        'weight' => -5,
      ),
      'saas' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'saas',
        'weight' => -16,
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
        'weight' => -4,
      ),
      'saas' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'saas',
        'weight' => -15,
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
        'weight' => -2,
      ),
      'saas' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'saas',
        'weight' => -13,
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
        'weight' => -1,
      ),
      'saas' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'saas',
        'weight' => -12,
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
        'weight' => 10,
      ),
      'saas' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'saas',
        'weight' => -2,
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
        'weight' => 9,
      ),
      'saas' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'saas',
        'weight' => -3,
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
        'weight' => -31,
      ),
      'saas' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'saas',
        'weight' => 6,
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
        'weight' => -30,
      ),
      'saas' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'saas',
        'weight' => 7,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-front_geo_view-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'front_geo_view-block',
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
      'saas' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'saas',
        'weight' => -32,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['views-front_page_collections-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'front_page_collections-block',
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
      'saas' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'saas',
        'weight' => -33,
      ),
    ),
    'title' => '<none>',
    'visibility' => 1,
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
        'weight' => 12,
      ),
      'saas' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'saas',
        'weight' => -28,
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
        'weight' => 13,
      ),
      'saas' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'saas',
        'weight' => -34,
      ),
    ),
    'title' => '<none>',
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
        'weight' => 15,
      ),
      'saas' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'saas',
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
        'weight' => 14,
      ),
      'saas' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'saas',
        'weight' => -32,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['views-frontpage_solr_boxes-block_5'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'frontpage_solr_boxes-block_5',
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
      'saas' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'saas',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
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
        'weight' => 18,
      ),
      'saas' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'saas',
        'weight' => 1,
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
        'weight' => 17,
      ),
      'saas' => array(
        'region' => 'footer',
        'status' => 1,
        'theme' => 'saas',
        'weight' => -32,
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
        'weight' => 20,
      ),
      'saas' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'saas',
        'weight' => -25,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-image_blocks-block_3'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'image_blocks-block_3',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'admindora' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'admindora',
        'weight' => 19,
      ),
      'saas' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'saas',
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
        'weight' => 16,
      ),
      'saas' => array(
        'region' => 'footer',
        'status' => 1,
        'theme' => 'saas',
        'weight' => -30,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['views-list_details-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'list_details-block',
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
      'saas' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'saas',
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
        'weight' => 22,
      ),
      'saas' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'saas',
        'weight' => 3,
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
        'weight' => 23,
      ),
      'saas' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'saas',
        'weight' => -26,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
