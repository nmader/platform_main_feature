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

  $export['blockify-blockify-page-title'] = array(
    'cache' => 4,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'blockify-page-title',
    'icon' => 'a:2:{s:4:"icon";s:0:"";s:8:"position";s:12:"title_before";}',
    'module' => 'blockify',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'lcp' => array(
        'region' => 'context',
        'status' => 1,
        'theme' => 'lcp',
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

  $export['comment-recent'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'recent',
    'icon' => NULL,
    'module' => 'comment',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'lcp' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'lcp',
        'weight' => -9,
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

  $export['dgi_ondemand-dgi_ondemand_in_collection'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'dgi_ondemand_in_collection',
    'icon' => NULL,
    'module' => 'dgi_ondemand',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'lcp' => array(
        'region' => 'sub_content',
        'status' => 1,
        'theme' => 'lcp',
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

  $export['dgi_ondemand-dgi_ondemand_metadata_markup'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'dgi_ondemand_metadata_markup',
    'icon' => NULL,
    'module' => 'dgi_ondemand',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'lcp' => array(
        'region' => 'sub_content',
        'status' => 1,
        'theme' => 'lcp',
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

  $export['islandora_basic_collection-collection_listing'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'collection_listing',
    'icon' => NULL,
    'module' => 'islandora_basic_collection',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'lcp' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'lcp',
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

  $export['islandora_bookmark-islandora_bookmark'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'islandora_bookmark',
    'icon' => 'a:2:{s:4:"icon";s:0:"";s:8:"position";s:12:"title_before";}',
    'module' => 'islandora_bookmark',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'lcp' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'lcp',
        'weight' => -35,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => 'Bookmark',
    'visibility' => 0,
  );

  $export['islandora_bookmark-islandora_bookmark_list_info'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'islandora_bookmark_list_info',
    'icon' => NULL,
    'module' => 'islandora_bookmark',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'lcp' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'lcp',
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

  $export['islandora_bookmark_solr-islandora_bookmark_solr'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'islandora_bookmark_solr',
    'icon' => 'a:2:{s:4:"icon";s:0:"";s:8:"position";s:12:"title_before";}',
    'module' => 'islandora_bookmark_solr',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'lcp' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'lcp',
        'weight' => -34,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => 'Bookmark Query',
    'visibility' => 0,
  );

  $export['islandora_collection_search-islandora_collection_search'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'islandora_collection_search',
    'icon' => 'a:2:{s:4:"icon";s:0:"";s:8:"position";s:12:"title_before";}',
    'module' => 'islandora_collection_search',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'lcp' => array(
        'region' => 'context',
        'status' => 1,
        'theme' => 'lcp',
        'weight' => -31,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => 'Search',
    'visibility' => 0,
  );

  $export['islandora_compound_object-compound_navigation'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'compound_navigation',
    'icon' => NULL,
    'module' => 'islandora_compound_object',
    'node_types' => array(),
    'pages' => 'islandora/object/*',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'lcp' => array(
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'lcp',
        'weight' => -36,
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
    'icon' => 'a:2:{s:4:"icon";s:0:"";s:8:"position";s:12:"title_before";}',
    'module' => 'islandora_solr',
    'node_types' => array(),
    'pages' => 'advanced-search',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'lcp' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'lcp',
        'weight' => -36,
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

  $export['islandora_solr-basic_facets'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'basic_facets',
    'icon' => 'a:2:{s:4:"icon";s:0:"";s:8:"position";s:12:"title_before";}',
    'module' => 'islandora_solr',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'lcp' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'lcp',
        'weight' => -33,
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

  $export['islandora_solr-current_query'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'current_query',
    'icon' => NULL,
    'module' => 'islandora_solr',
    'node_types' => array(),
    'pages' => 'islandora/search
islandora/search/*',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'lcp' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'lcp',
        'weight' => -17,
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

  $export['islandora_solr-display_switch'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'display_switch',
    'icon' => 'a:2:{s:4:"icon";s:0:"";s:8:"position";s:12:"title_before";}',
    'module' => 'islandora_solr',
    'node_types' => array(),
    'pages' => 'islandora/search
islandora/search/*',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'lcp' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'lcp',
        'weight' => -19,
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

  $export['islandora_solr-explore'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'explore',
    'icon' => NULL,
    'module' => 'islandora_solr',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'lcp' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'lcp',
        'weight' => -18,
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
    'icon' => 'a:2:{s:4:"icon";s:0:"";s:8:"position";s:12:"title_before";}',
    'module' => 'islandora_solr',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'lcp' => array(
        'region' => 'context',
        'status' => 1,
        'theme' => 'lcp',
        'weight' => -35,
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
    'icon' => 'a:2:{s:4:"icon";s:0:"";s:8:"position";s:12:"title_before";}',
    'module' => 'islandora_solr',
    'node_types' => array(),
    'pages' => 'islandora/search
islandora/search/*',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'lcp' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'lcp',
        'weight' => -16,
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

  $export['islandora_solr-sort'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'sort',
    'icon' => 'a:2:{s:4:"icon";s:0:"";s:8:"position";s:12:"title_before";}',
    'module' => 'islandora_solr',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'lcp' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'lcp',
        'weight' => -36,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => 'Sort',
    'visibility' => 0,
  );

  $export['islandora_solr_facet_pages-islandora-solr-facet-pages'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'islandora-solr-facet-pages',
    'icon' => NULL,
    'module' => 'islandora_solr_facet_pages',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'lcp' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'lcp',
        'weight' => -20,
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

  $export['lcpdora-lcpdora_cloth_search'] = array(
    'cache' => 8,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'lcpdora_cloth_search',
    'icon' => 'a:2:{s:4:"icon";s:0:"";s:8:"position";s:12:"title_before";}',
    'module' => 'lcpdora',
    'node_types' => array(),
    'pages' => 'advanced-search',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'lcp' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'lcp',
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
    'visibility' => 1,
  );

  $export['menu-features'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'features',
    'icon' => NULL,
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'lcp' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'lcp',
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

  $export['menu-menu-social-media-header'] = array(
    'cache' => -1,
    'css_class' => 'social-media-header',
    'custom' => 0,
    'delta' => 'menu-social-media-header',
    'icon' => 'a:2:{s:4:"icon";s:0:"";s:8:"position";s:12:"title_before";}',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'lcp' => array(
        'region' => 'header',
        'status' => 1,
        'theme' => 'lcp',
        'weight' => 0,
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

  $export['node-recent'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'recent',
    'icon' => NULL,
    'module' => 'node',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'lcp' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'lcp',
        'weight' => -8,
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
    'icon' => NULL,
    'module' => 'node',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'lcp' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'lcp',
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

  $export['search-form'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'form',
    'icon' => NULL,
    'module' => 'search',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'bartik',
        'weight' => -1,
      ),
      'lcp' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'lcp',
        'weight' => -7,
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

  $export['service_links-service_links'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'service_links',
    'icon' => NULL,
    'module' => 'service_links',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'lcp' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'lcp',
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

  $export['service_links-service_links_not_node'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'service_links_not_node',
    'icon' => NULL,
    'module' => 'service_links',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'lcp' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'lcp',
        'weight' => -5,
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

  $export['shortcut-shortcuts'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'shortcuts',
    'icon' => NULL,
    'module' => 'shortcut',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'lcp' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'lcp',
        'weight' => -3,
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

  $export['simplified_social_share-open_sharing'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'open_sharing',
    'icon' => 'a:2:{s:4:"icon";s:0:"";s:8:"position";s:12:"title_before";}',
    'module' => 'simplified_social_share',
    'node_types' => array(),
    'pages' => 'islandora/search*
islandora/search/*
<front>',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'lcp' => array(
        'region' => 'context',
        'status' => 1,
        'theme' => 'lcp',
        'weight' => -34,
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

  $export['system-help'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'help',
    'icon' => NULL,
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => 'help',
        'status' => 1,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'lcp' => array(
        'region' => 'help',
        'status' => 1,
        'theme' => 'lcp',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => 'help',
        'status' => 1,
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
    'icon' => NULL,
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'lcp' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'lcp',
        'weight' => -34,
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
    'icon' => NULL,
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'lcp' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'lcp',
        'weight' => -14,
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
    'icon' => NULL,
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'lcp' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'lcp',
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

  $export['system-navigation'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'navigation',
    'icon' => 'a:2:{s:4:"icon";s:0:"";s:8:"position";s:12:"title_before";}',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'lcp' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'lcp',
        'weight' => -11,
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
    'icon' => NULL,
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => 'footer',
        'status' => 1,
        'theme' => 'bartik',
        'weight' => 10,
      ),
      'lcp' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'lcp',
        'weight' => -10,
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
    'icon' => NULL,
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'lcp' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'lcp',
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

  $export['user-login'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'login',
    'icon' => NULL,
    'module' => 'user',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'lcp' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'lcp',
        'weight' => 0,
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
    'icon' => NULL,
    'module' => 'user',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'lcp' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'lcp',
        'weight' => 9,
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
    'icon' => NULL,
    'module' => 'user',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'lcp' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'lcp',
        'weight' => 10,
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
    'icon' => NULL,
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'lcp' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'lcp',
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

  $export['views-30151412eb73ff9de45ec4209bd0898d'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => '30151412eb73ff9de45ec4209bd0898d',
    'icon' => NULL,
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'lcp' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'lcp',
        'weight' => 2,
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
    'icon' => NULL,
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'lcp' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'lcp',
        'weight' => 7,
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

  $export['views-footer_copyright-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'footer_copyright-block',
    'icon' => NULL,
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'lcp' => array(
        'region' => 'bottom',
        'status' => 1,
        'theme' => 'lcp',
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

  $export['views-front_page_collections-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'front_page_collections-block',
    'icon' => 'a:2:{s:4:"icon";s:0:"";s:8:"position";s:12:"title_before";}',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'lcp' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'lcp',
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
    'visibility' => 1,
  );

  $export['views-front_page_slideshow-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'front_page_slideshow-block',
    'icon' => 'a:2:{s:4:"icon";s:0:"";s:8:"position";s:12:"title_before";}',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'lcp' => array(
        'region' => 'hero',
        'status' => 1,
        'theme' => 'lcp',
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
    'visibility' => 1,
  );

  $export['views-object_more_info-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'object_more_info-block',
    'icon' => 'a:2:{s:4:"icon";s:0:"";s:8:"position";s:12:"title_before";}',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'islandora/search
islandora/search*',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'lcp' => array(
        'region' => 'context',
        'status' => 1,
        'theme' => 'lcp',
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

  $export['views-object_visitors_by_month-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'object_visitors_by_month-block',
    'icon' => NULL,
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'lcp' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'lcp',
        'weight' => 8,
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
