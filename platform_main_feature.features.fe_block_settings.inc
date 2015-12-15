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
      'libfourri_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'libfourri_theme',
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
      'libfourri_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'libfourri_theme',
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
      'libfourri_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'libfourri_theme',
        'weight' => 0,
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
      'libfourri_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'libfourri_theme',
        'weight' => -20,
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
      'libfourri_theme' => array(
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'libfourri_theme',
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
      'ir7' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'ir7',
        'weight' => -12,
      ),
      'libfourri_theme' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'libfourri_theme',
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
    'visibility' => 1,
  );

  $export['islandora_solr-basic_facets'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'basic_facets',
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
      'ir7' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'ir7',
        'weight' => -19,
      ),
      'libfourri_theme' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'libfourri_theme',
        'weight' => -37,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => 'Filter By',
    'visibility' => 1,
  );

  $export['islandora_solr-current_query'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'current_query',
    'module' => 'islandora_solr',
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
      'ir7' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ir7',
        'weight' => -18,
      ),
      'libfourri_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'libfourri_theme',
        'weight' => -37,
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

  $export['islandora_solr-current_query_facet_name'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'current_query_facet_name',
    'module' => 'islandora_solr',
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
      'ir7' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ir7',
        'weight' => 0,
      ),
      'libfourri_theme' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'libfourri_theme',
        'weight' => -36,
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
      'libfourri_theme' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'libfourri_theme',
        'weight' => -39,
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
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
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
      'libfourri_theme' => array(
        'region' => 'welcome',
        'status' => 1,
        'theme' => 'libfourri_theme',
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
      'libfourri_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'libfourri_theme',
        'weight' => -32,
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

  $export['lib4ridora-lib4ridora_full_text'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'lib4ridora_full_text',
    'module' => 'lib4ridora',
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
      'ir7' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ir7',
        'weight' => 0,
      ),
      'libfourri_theme' => array(
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'libfourri_theme',
        'weight' => -39,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => 'Fulltext:',
    'visibility' => 0,
  );

  $export['lib4ridora-lib4ridora_organizational_units'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'lib4ridora_organizational_units',
    'module' => 'lib4ridora',
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
      'ir7' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ir7',
        'weight' => 0,
      ),
      'libfourri_theme' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'libfourri_theme',
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

  $export['lib4ridora-lib4ridora_recent_additions'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'lib4ridora_recent_additions',
    'module' => 'lib4ridora',
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
      'ir7' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ir7',
        'weight' => 0,
      ),
      'libfourri_theme' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'libfourri_theme',
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
    'visibility' => 1,
  );

  $export['lib4ridora-lib4ridora_related_research'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'lib4ridora_related_research',
    'module' => 'lib4ridora',
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
      'ir7' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ir7',
        'weight' => 0,
      ),
      'libfourri_theme' => array(
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'libfourri_theme',
        'weight' => -38,
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
      'libfourri_theme' => array(
        'region' => 'header',
        'status' => 1,
        'theme' => 'libfourri_theme',
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
      'libfourri_theme' => array(
        'region' => 'footer',
        'status' => 1,
        'theme' => 'libfourri_theme',
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
      'libfourri_theme' => array(
        'region' => 'header',
        'status' => 1,
        'theme' => 'libfourri_theme',
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
      'ir7' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ir7',
        'weight' => 0,
      ),
      'libfourri_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'libfourri_theme',
        'weight' => 0,
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
      'libfourri_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'libfourri_theme',
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
      'libfourri_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'libfourri_theme',
        'weight' => -1,
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
      'libfourri_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'libfourri_theme',
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
      'bartik' => array(
        'region' => 'help',
        'status' => 1,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'ir7' => array(
        'region' => 'help',
        'status' => 1,
        'theme' => 'ir7',
        'weight' => 0,
      ),
      'libfourri_theme' => array(
        'region' => 'help',
        'status' => 1,
        'theme' => 'libfourri_theme',
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
      'ir7' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'ir7',
        'weight' => -21,
      ),
      'libfourri_theme' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'libfourri_theme',
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
      'ir7' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ir7',
        'weight' => 0,
      ),
      'libfourri_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'libfourri_theme',
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
      'libfourri_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'libfourri_theme',
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
      'libfourri_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'libfourri_theme',
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
      'libfourri_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'libfourri_theme',
        'weight' => -20,
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
      'libfourri_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'libfourri_theme',
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
      'libfourri_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'libfourri_theme',
        'weight' => -19,
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
      'libfourri_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'libfourri_theme',
        'weight' => 0,
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
      'libfourri_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'libfourri_theme',
        'weight' => 0,
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

  $export['views-footer_logo-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'footer_logo-block',
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
      'ir7' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ir7',
        'weight' => 0,
      ),
      'libfourri_theme' => array(
        'region' => 'footer',
        'status' => 1,
        'theme' => 'libfourri_theme',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => 'Service Provided By',
    'visibility' => 0,
  );

  $export['views-frontpage_solr_boxes-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'frontpage_solr_boxes-block',
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
      'ir7' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'ir7',
        'weight' => -16,
      ),
      'libfourri_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'libfourri_theme',
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
    'visibility' => 1,
  );

  $export['views-frontpage_solr_boxes-block_1'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'frontpage_solr_boxes-block_1',
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
      'ir7' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'ir7',
        'weight' => -17,
      ),
      'libfourri_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'libfourri_theme',
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
      'libfourri_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'libfourri_theme',
        'weight' => -11,
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
      'libfourri_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'libfourri_theme',
        'weight' => -20,
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
    'css_class' => 'welcome',
    'custom' => 0,
    'delta' => 'image_blocks-block_2',
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
      'ir7' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'ir7',
        'weight' => -23,
      ),
      'libfourri_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'libfourri_theme',
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
      'libfourri_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'libfourri_theme',
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

  $export['views-organizational-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'organizational-block',
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
      'ir7' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ir7',
        'weight' => 0,
      ),
      'libfourri_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'libfourri_theme',
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
    'visibility' => 1,
  );

  $export['views-publication_links-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'publication_links-block',
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
      'ir7' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ir7',
        'weight' => 0,
      ),
      'libfourri_theme' => array(
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'libfourri_theme',
        'weight' => -37,
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

  $export['views-recent_additions-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'recent_additions-block',
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
      'ir7' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ir7',
        'weight' => 0,
      ),
      'libfourri_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'libfourri_theme',
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

  $export['views-top_facet_searches-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'top_facet_searches-block',
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
      'ir7' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ir7',
        'weight' => -6,
      ),
      'libfourri_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'libfourri_theme',
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
    'visibility' => 1,
  );

  $export['views-top_site_searches-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'top_site_searches-block',
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
      'ir7' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'ir7',
        'weight' => -13,
      ),
      'libfourri_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'libfourri_theme',
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
    'visibility' => 1,
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
      'libfourri_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'libfourri_theme',
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
      'libfourri_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'libfourri_theme',
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
      'libfourri_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'libfourri_theme',
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
      'libfourri_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'libfourri_theme',
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
      'libfourri_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'libfourri_theme',
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
        'weight' => 0,
      ),
      'libfourri_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'libfourri_theme',
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
      'libfourri_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'libfourri_theme',
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

  return $export;
}
