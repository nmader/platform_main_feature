<?php
/**
 * @file
 * platform_main_feature.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function platform_main_feature_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'archive_collection';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Archive Collection';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Node UUID */
  $handler->display->display_options['filters']['uuid']['id'] = 'uuid';
  $handler->display->display_options['filters']['uuid']['table'] = 'node';
  $handler->display->display_options['filters']['uuid']['field'] = 'uuid';
  $handler->display->display_options['filters']['uuid']['value'] = '2779b428-cadf-4541-ba56-9521ba501e41';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['archive_collection'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Block'),
  );
  $export['archive_collection'] = $view;

  $view = new view();
  $view->name = 'buy';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'islandora_solr';
  $view->human_name = 'Buy';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Buy';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Islandora Solr: PID */
  $handler->display->display_options['fields']['PID']['id'] = 'PID';
  $handler->display->display_options['fields']['PID']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['PID']['field'] = 'PID';
  $handler->display->display_options['fields']['PID']['label'] = '';
  $handler->display->display_options['fields']['PID']['exclude'] = TRUE;
  $handler->display->display_options['fields']['PID']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['PID']['link_to_object'] = 0;
  /* Field: Islandora Solr: dc.title */
  $handler->display->display_options['fields']['dc.title']['id'] = 'dc.title';
  $handler->display->display_options['fields']['dc.title']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['dc.title']['field'] = 'dc.title';
  $handler->display->display_options['fields']['dc.title']['label'] = '';
  $handler->display->display_options['fields']['dc.title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['dc.title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['dc.title']['link_to_object'] = 0;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="buy-print-wrapper">
  <a title="[dc.title]" href="http://shop.baseballhall.org/" target="_blank">Buy This Print</a>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Contextual filter: Islandora Solr: PID */
  $handler->display->display_options['arguments']['PID']['id'] = 'PID';
  $handler->display->display_options['arguments']['PID']['table'] = 'islandora_solr';
  $handler->display->display_options['arguments']['PID']['field'] = 'PID';
  $handler->display->display_options['arguments']['PID']['default_action'] = 'default';
  $handler->display->display_options['arguments']['PID']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['PID']['default_argument_options']['index'] = '2';
  $handler->display->display_options['arguments']['PID']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['PID']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['PID']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
  /* Filter criterion: Islandora Solr: RELS_EXT_hasModel_uri_mt */
  $handler->display->display_options['filters']['RELS_EXT_hasModel_uri_mt']['id'] = 'RELS_EXT_hasModel_uri_mt';
  $handler->display->display_options['filters']['RELS_EXT_hasModel_uri_mt']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['RELS_EXT_hasModel_uri_mt']['field'] = 'RELS_EXT_hasModel_uri_mt';
  $handler->display->display_options['filters']['RELS_EXT_hasModel_uri_mt']['value'] = 'islandora:sp_basic_image';
  $handler->display->display_options['filters']['RELS_EXT_hasModel_uri_mt']['group'] = 1;
  /* Filter criterion: Islandora Solr: RELS_EXT_hasModel_uri_mt */
  $handler->display->display_options['filters']['RELS_EXT_hasModel_uri_mt_1']['id'] = 'RELS_EXT_hasModel_uri_mt_1';
  $handler->display->display_options['filters']['RELS_EXT_hasModel_uri_mt_1']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['RELS_EXT_hasModel_uri_mt_1']['field'] = 'RELS_EXT_hasModel_uri_mt';
  $handler->display->display_options['filters']['RELS_EXT_hasModel_uri_mt_1']['value'] = 'islandora:sp_large_image_cmodel';
  $handler->display->display_options['filters']['RELS_EXT_hasModel_uri_mt_1']['group'] = 2;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['buy'] = array(
    t('Master'),
    t('Buy'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('<div class="buy-print-wrapper">
  <a title="[dc.title]" href="http://shop.baseballhall.org/" target="_blank">Buy This Print</a>
</div>'),
    t('All'),
    t('Block'),
  );
  $export['buy'] = $view;

  $view = new view();
  $view->name = 'collection_contents';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'islandora_solr';
  $view->human_name = 'Collection Contents';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Collection Contents';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Islandora Solr: dc.title */
  $handler->display->display_options['fields']['dc.title']['id'] = 'dc.title';
  $handler->display->display_options['fields']['dc.title']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['dc.title']['field'] = 'dc.title';
  $handler->display->display_options['fields']['dc.title']['label'] = '';
  $handler->display->display_options['fields']['dc.title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['dc.title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['dc.title']['link_to_object'] = 0;
  /* Field: Islandora Solr: PID */
  $handler->display->display_options['fields']['PID']['id'] = 'PID';
  $handler->display->display_options['fields']['PID']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['PID']['field'] = 'PID';
  $handler->display->display_options['fields']['PID']['label'] = '';
  $handler->display->display_options['fields']['PID']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['PID']['alter']['text'] = '<a href="/islandora/object/[PID]">[dc.title]</a>';
  $handler->display->display_options['fields']['PID']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['PID']['link_to_object'] = 0;
  /* Contextual filter: Islandora Solr: RELS_EXT_isMemberOfCollection_uri_mt */
  $handler->display->display_options['arguments']['RELS_EXT_isMemberOfCollection_uri_mt']['id'] = 'RELS_EXT_isMemberOfCollection_uri_mt';
  $handler->display->display_options['arguments']['RELS_EXT_isMemberOfCollection_uri_mt']['table'] = 'islandora_solr';
  $handler->display->display_options['arguments']['RELS_EXT_isMemberOfCollection_uri_mt']['field'] = 'RELS_EXT_isMemberOfCollection_uri_mt';
  $handler->display->display_options['arguments']['RELS_EXT_isMemberOfCollection_uri_mt']['default_action'] = 'default';
  $handler->display->display_options['arguments']['RELS_EXT_isMemberOfCollection_uri_mt']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['RELS_EXT_isMemberOfCollection_uri_mt']['default_argument_options']['index'] = '2';
  $handler->display->display_options['arguments']['RELS_EXT_isMemberOfCollection_uri_mt']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['RELS_EXT_isMemberOfCollection_uri_mt']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['RELS_EXT_isMemberOfCollection_uri_mt']['summary_options']['items_per_page'] = '25';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['collection_contents'] = array(
    t('Master'),
    t('Collection Contents'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('<a href="/islandora/object/[PID]">[dc.title]</a>'),
    t('All'),
    t('Block'),
  );
  $export['collection_contents'] = $view;

  $view = new view();
  $view->name = 'collection_summary';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Collection Summary';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Node UUID */
  $handler->display->display_options['filters']['uuid']['id'] = 'uuid';
  $handler->display->display_options['filters']['uuid']['table'] = 'node';
  $handler->display->display_options['filters']['uuid']['field'] = 'uuid';
  $handler->display->display_options['filters']['uuid']['value'] = '2779b428-cadf-4541-ba56-9521ba501e41';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['collection_summary'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Block'),
  );
  $export['collection_summary'] = $view;

  $view = new view();
  $view->name = 'content_alert';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'islandora_solr';
  $view->human_name = 'Content Alert';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Content Alert';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Islandora Solr: dc.title */
  $handler->display->display_options['fields']['dc.title']['id'] = 'dc.title';
  $handler->display->display_options['fields']['dc.title']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['dc.title']['field'] = 'dc.title';
  $handler->display->display_options['fields']['dc.title']['label'] = '';
  $handler->display->display_options['fields']['dc.title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['dc.title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['dc.title']['link_to_object'] = 0;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="content-warning-wrapper">
  <p title="[dc.title]">Warning: This record may contain content unsuitable for minors</p>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Contextual filter: Islandora Solr: PID */
  $handler->display->display_options['arguments']['PID']['id'] = 'PID';
  $handler->display->display_options['arguments']['PID']['table'] = 'islandora_solr';
  $handler->display->display_options['arguments']['PID']['field'] = 'PID';
  $handler->display->display_options['arguments']['PID']['default_action'] = 'default';
  $handler->display->display_options['arguments']['PID']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['PID']['default_argument_options']['index'] = '2';
  $handler->display->display_options['arguments']['PID']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['PID']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['PID']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Islandora Solr: mods_targetAudience_mt */
  $handler->display->display_options['filters']['mods_targetAudience_mt']['id'] = 'mods_targetAudience_mt';
  $handler->display->display_options['filters']['mods_targetAudience_mt']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['mods_targetAudience_mt']['field'] = 'mods_targetAudience_mt';
  $handler->display->display_options['filters']['mods_targetAudience_mt']['value'] = 'Adult';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['content_alert'] = array(
    t('Master'),
    t('Content Alert'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('<div class="content-warning-wrapper">
  <p title="[dc.title]">Warning: This record may contain content unsuitable for minors</p>
</div>'),
    t('All'),
    t('Block'),
  );
  $export['content_alert'] = $view;

  $view = new view();
  $view->name = 'date_last_modified';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'islandora_solr';
  $view->human_name = 'Date Last Modified';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Date Last Modified';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Islandora Solr: fgs_lastModifiedDate_dt */
  $handler->display->display_options['fields']['fgs_lastModifiedDate_dt']['id'] = 'fgs_lastModifiedDate_dt';
  $handler->display->display_options['fields']['fgs_lastModifiedDate_dt']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['fgs_lastModifiedDate_dt']['field'] = 'fgs_lastModifiedDate_dt';
  $handler->display->display_options['fields']['fgs_lastModifiedDate_dt']['label'] = 'Last Modified Date';
  $handler->display->display_options['fields']['fgs_lastModifiedDate_dt']['link_to_object'] = 0;
  $handler->display->display_options['fields']['fgs_lastModifiedDate_dt']['date_format'] = 'long';
  /* Contextual filter: Islandora Solr: PID */
  $handler->display->display_options['arguments']['PID']['id'] = 'PID';
  $handler->display->display_options['arguments']['PID']['table'] = 'islandora_solr';
  $handler->display->display_options['arguments']['PID']['field'] = 'PID';
  $handler->display->display_options['arguments']['PID']['default_action'] = 'default';
  $handler->display->display_options['arguments']['PID']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['PID']['default_argument_options']['index'] = '2';
  $handler->display->display_options['arguments']['PID']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['PID']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['PID']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Islandora Solr: RELS_EXT_hasModel_uri_mt */
  $handler->display->display_options['filters']['RELS_EXT_hasModel_uri_mt']['id'] = 'RELS_EXT_hasModel_uri_mt';
  $handler->display->display_options['filters']['RELS_EXT_hasModel_uri_mt']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['RELS_EXT_hasModel_uri_mt']['field'] = 'RELS_EXT_hasModel_uri_mt';
  $handler->display->display_options['filters']['RELS_EXT_hasModel_uri_mt']['operator'] = '!=';
  $handler->display->display_options['filters']['RELS_EXT_hasModel_uri_mt']['value'] = 'islandora:collectionCModel';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['date_last_modified'] = array(
    t('Master'),
    t('Date Last Modified'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Last Modified Date'),
    t('All'),
    t('Block'),
  );
  $export['date_last_modified'] = $view;

  $view = new view();
  $view->name = 'discover';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'islandora_solr';
  $view->human_name = 'Discover';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Discover';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Islandora Solr: PID */
  $handler->display->display_options['fields']['PID']['id'] = 'PID';
  $handler->display->display_options['fields']['PID']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['PID']['field'] = 'PID';
  $handler->display->display_options['fields']['PID']['label'] = '';
  $handler->display->display_options['fields']['PID']['exclude'] = TRUE;
  $handler->display->display_options['fields']['PID']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['PID']['link_to_object'] = 0;
  /* Field: Islandora Solr: dc.title */
  $handler->display->display_options['fields']['dc.title']['id'] = 'dc.title';
  $handler->display->display_options['fields']['dc.title']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['dc.title']['field'] = 'dc.title';
  $handler->display->display_options['fields']['dc.title']['label'] = '';
  $handler->display->display_options['fields']['dc.title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['dc.title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['dc.title']['link_to_object'] = 0;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['dc.description']['id'] = 'dc.description';
  $handler->display->display_options['fields']['dc.description']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['dc.description']['field'] = 'dc.description';
  $handler->display->display_options['fields']['dc.description']['label'] = '';
  $handler->display->display_options['fields']['dc.description']['exclude'] = TRUE;
  $handler->display->display_options['fields']['dc.description']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="discover-wrapper">
  <div class="span-title"><span>Discover</span></div>
  <div class="discover-link-wrapper"><h3><a title="[dc.description]" href="/islandora/object/[PID]">[dc.title]</a></h3></div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Filter criterion: Islandora Solr: RELS_EXT_isMemberOfCollection_uri_mt */
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['id'] = 'RELS_EXT_isMemberOfCollection_uri_mt';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['field'] = 'RELS_EXT_isMemberOfCollection_uri_mt';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['value'] = 'islandora:root';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'discover';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $translatables['discover'] = array(
    t('Master'),
    t('Discover'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('<div class="discover-wrapper">
  <div class="span-title"><span>Discover</span></div>
  <div class="discover-link-wrapper"><h3><a title="[dc.description]" href="/islandora/object/[PID]">[dc.title]</a></h3></div>
</div>'),
    t('Page'),
    t('Block'),
  );
  $export['discover'] = $view;

  $view = new view();
  $view->name = 'exsection_status';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'islandora_solr';
  $view->human_name = 'Exsection Status';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Exsection Status';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Islandora Solr: fgs_createdDate_dt */
  $handler->display->display_options['fields']['fgs_createdDate_dt']['id'] = 'fgs_createdDate_dt';
  $handler->display->display_options['fields']['fgs_createdDate_dt']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['fgs_createdDate_dt']['field'] = 'fgs_createdDate_dt';
  $handler->display->display_options['fields']['fgs_createdDate_dt']['label'] = 'Accession Status';
  $handler->display->display_options['fields']['fgs_createdDate_dt']['link_to_object'] = 0;
  $handler->display->display_options['fields']['fgs_createdDate_dt']['date_format'] = 'short';
  /* Contextual filter: Islandora Solr: PID */
  $handler->display->display_options['arguments']['PID']['id'] = 'PID';
  $handler->display->display_options['arguments']['PID']['table'] = 'islandora_solr';
  $handler->display->display_options['arguments']['PID']['field'] = 'PID';
  $handler->display->display_options['arguments']['PID']['default_action'] = 'default';
  $handler->display->display_options['arguments']['PID']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['PID']['default_argument_options']['index'] = '2';
  $handler->display->display_options['arguments']['PID']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['PID']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['PID']['summary_options']['items_per_page'] = '25';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['enabled'] = FALSE;
  $translatables['exsection_status'] = array(
    t('Master'),
    t('Exsection Status'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Accession Status'),
    t('All'),
    t('Block'),
  );
  $export['exsection_status'] = $view;

  $view = new view();
  $view->name = 'find_us';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Find Us';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Find Us';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Node UUID */
  $handler->display->display_options['filters']['uuid']['id'] = 'uuid';
  $handler->display->display_options['filters']['uuid']['table'] = 'node';
  $handler->display->display_options['filters']['uuid']['field'] = 'uuid';
  $handler->display->display_options['filters']['uuid']['value'] = '832a09be-da5f-4b4a-9f90-f87379badec1';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['find_us'] = array(
    t('Master'),
    t('Find Us'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Block'),
  );
  $export['find_us'] = $view;

  $view = new view();
  $view->name = 'from_the_collection';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'islandora_solr';
  $view->human_name = 'From the collection';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'From the collection';
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'Discover More';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '2';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Islandora Solr: PID */
  $handler->display->display_options['fields']['PID']['id'] = 'PID';
  $handler->display->display_options['fields']['PID']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['PID']['field'] = 'PID';
  $handler->display->display_options['fields']['PID']['label'] = '';
  $handler->display->display_options['fields']['PID']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['PID']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['PID']['link_to_object'] = 0;
  /* Field: Islandora Solr: dc.title */
  $handler->display->display_options['fields']['dc.title']['id'] = 'dc.title';
  $handler->display->display_options['fields']['dc.title']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['dc.title']['field'] = 'dc.title';
  $handler->display->display_options['fields']['dc.title']['label'] = '';
  $handler->display->display_options['fields']['dc.title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['dc.title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['dc.title']['link_to_object'] = 1;
  /* Filter criterion: Islandora Solr: RELS_EXT_isMemberOfCollection_uri_mt */
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['id'] = 'RELS_EXT_isMemberOfCollection_uri_mt';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['field'] = 'RELS_EXT_isMemberOfCollection_uri_mt';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['value'] = 'islandora:sample_collection';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'from-the-collection';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $translatables['from_the_collection'] = array(
    t('Master'),
    t('From the collection'),
    t('Discover More'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Page'),
    t('more'),
    t('Block'),
  );
  $export['from_the_collection'] = $view;

  $view = new view();
  $view->name = 'front_page_alt_hero';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'islandora_solr';
  $view->human_name = 'Front Page ALT Hero';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Front Page ALT Hero';
  $handler->display->display_options['css_class'] = 'view-front-page-image';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '2';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Islandora Solr: dc.title */
  $handler->display->display_options['fields']['dc.title']['id'] = 'dc.title';
  $handler->display->display_options['fields']['dc.title']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['dc.title']['field'] = 'dc.title';
  $handler->display->display_options['fields']['dc.title']['label'] = '';
  $handler->display->display_options['fields']['dc.title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['dc.title']['link_to_object'] = 1;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['dc.description']['id'] = 'dc.description';
  $handler->display->display_options['fields']['dc.description']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['dc.description']['field'] = 'dc.description';
  $handler->display->display_options['fields']['dc.description']['label'] = '';
  $handler->display->display_options['fields']['dc.description']['element_label_colon'] = FALSE;
  /* Field: Islandora Solr: PID */
  $handler->display->display_options['fields']['PID']['id'] = 'PID';
  $handler->display->display_options['fields']['PID']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['PID']['field'] = 'PID';
  $handler->display->display_options['fields']['PID']['label'] = '';
  $handler->display->display_options['fields']['PID']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['PID']['link_to_object'] = 0;
  /* Filter criterion: Islandora Solr: RELS_EXT_isMemberOfCollection_uri_mt */
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['id'] = 'RELS_EXT_isMemberOfCollection_uri_mt';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['field'] = 'RELS_EXT_isMemberOfCollection_uri_mt';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['value'] = 'islandora:sp_basic_image_collection';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'front-page-alt-hero';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '2';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $translatables['front_page_alt_hero'] = array(
    t('Master'),
    t('Front Page ALT Hero'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Page'),
    t('Block'),
  );
  $export['front_page_alt_hero'] = $view;

  $view = new view();
  $view->name = 'front_page_collection_contents';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'islandora_solr';
  $view->human_name = 'Front Page Collection Contents';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Collection Contents';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Islandora Solr: dc.title */
  $handler->display->display_options['fields']['dc.title']['id'] = 'dc.title';
  $handler->display->display_options['fields']['dc.title']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['dc.title']['field'] = 'dc.title';
  $handler->display->display_options['fields']['dc.title']['label'] = '';
  $handler->display->display_options['fields']['dc.title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['dc.title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['dc.title']['link_to_object'] = 0;
  /* Field: Islandora Solr: PID */
  $handler->display->display_options['fields']['PID']['id'] = 'PID';
  $handler->display->display_options['fields']['PID']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['PID']['field'] = 'PID';
  $handler->display->display_options['fields']['PID']['label'] = '';
  $handler->display->display_options['fields']['PID']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['PID']['alter']['text'] = '<a href="/islandora/object/[PID]">[dc.title]</a>';
  $handler->display->display_options['fields']['PID']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['PID']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['PID']['link_to_object'] = 0;
  /* Filter criterion: Islandora Solr: RELS_EXT_isMemberOfCollection_uri_mt */
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['id'] = 'RELS_EXT_isMemberOfCollection_uri_mt';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['field'] = 'RELS_EXT_isMemberOfCollection_uri_mt';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['value'] = 'islandora:root';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['front_page_collection_contents'] = array(
    t('Master'),
    t('Collection Contents'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('<a href="/islandora/object/[PID]">[dc.title]</a>'),
    t('Block'),
  );
  $export['front_page_collection_contents'] = $view;

  $view = new view();
  $view->name = 'front_page_main_hero';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'islandora_solr';
  $view->human_name = 'Front Page Main Hero';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Front Page Main Hero';
  $handler->display->display_options['css_class'] = 'view-front-page-image';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Islandora Solr: dc.title */
  $handler->display->display_options['fields']['dc.title']['id'] = 'dc.title';
  $handler->display->display_options['fields']['dc.title']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['dc.title']['field'] = 'dc.title';
  $handler->display->display_options['fields']['dc.title']['label'] = '';
  $handler->display->display_options['fields']['dc.title']['alter']['max_length'] = '45';
  $handler->display->display_options['fields']['dc.title']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['dc.title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['dc.title']['link_to_object'] = 1;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['dc.description']['id'] = 'dc.description';
  $handler->display->display_options['fields']['dc.description']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['dc.description']['field'] = 'dc.description';
  $handler->display->display_options['fields']['dc.description']['label'] = '';
  $handler->display->display_options['fields']['dc.description']['element_label_colon'] = FALSE;
  /* Field: Islandora Solr: PID */
  $handler->display->display_options['fields']['PID']['id'] = 'PID';
  $handler->display->display_options['fields']['PID']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['PID']['field'] = 'PID';
  $handler->display->display_options['fields']['PID']['label'] = '';
  $handler->display->display_options['fields']['PID']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['PID']['link_to_object'] = 0;
  /* Filter criterion: Islandora Solr: RELS_EXT_isMemberOfCollection_uri_mt */
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['id'] = 'RELS_EXT_isMemberOfCollection_uri_mt';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['field'] = 'RELS_EXT_isMemberOfCollection_uri_mt';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['value'] = 'islandora:sp_basic_image_collection';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'front-page-main-hero';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $translatables['front_page_main_hero'] = array(
    t('Master'),
    t('Front Page Main Hero'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Page'),
    t('Block'),
  );
  $export['front_page_main_hero'] = $view;

  $view = new view();
  $view->name = 'frontpage_solr_boxes';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'islandora_solr';
  $view->human_name = 'Frontpage Solr boxes';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Frontpage Solr boxes';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Islandora Solr: dc.title */
  $handler->display->display_options['fields']['dc.title']['id'] = 'dc.title';
  $handler->display->display_options['fields']['dc.title']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['dc.title']['field'] = 'dc.title';
  $handler->display->display_options['fields']['dc.title']['label'] = '';
  $handler->display->display_options['fields']['dc.title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['dc.title']['link_to_object'] = 1;
  /* Filter criterion: Islandora Solr: dc.title */
  $handler->display->display_options['filters']['dc.title']['id'] = 'dc.title';
  $handler->display->display_options['filters']['dc.title']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['dc.title']['field'] = 'dc.title';
  $handler->display->display_options['filters']['dc.title']['group'] = 1;

  /* Display: Browse Collections */
  $handler = $view->new_display('block', 'Browse Collections', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Browse Collections';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '11';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'dc.title' => 'dc.title',
    'counter' => 'counter',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Islandora Solr: dc.title */
  $handler->display->display_options['fields']['dc.title']['id'] = 'dc.title';
  $handler->display->display_options['fields']['dc.title']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['dc.title']['field'] = 'dc.title';
  $handler->display->display_options['fields']['dc.title']['label'] = '';
  $handler->display->display_options['fields']['dc.title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['dc.title']['link_to_object'] = 1;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Islandora Solr: dc.title */
  $handler->display->display_options['filters']['dc.title']['id'] = 'dc.title';
  $handler->display->display_options['filters']['dc.title']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['dc.title']['field'] = 'dc.title';
  $handler->display->display_options['filters']['dc.title']['group'] = 1;
  /* Filter criterion: Islandora Solr: RELS_EXT_isMemberOfCollection_uri_mt */
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['id'] = 'RELS_EXT_isMemberOfCollection_uri_mt';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['field'] = 'RELS_EXT_isMemberOfCollection_uri_mt';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['value'] = 'islandora:root';

  /* Display: Featured Collections */
  $handler = $view->new_display('block', 'Featured Collections', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Featured Collections';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'featured-collections-view';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['row_class'] = 'featured-collections-row';
  $handler->display->display_options['style_options']['columns'] = '2';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'Featured Collections';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'There are no featured collections.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Islandora Solr: PID */
  $handler->display->display_options['fields']['PID']['id'] = 'PID';
  $handler->display->display_options['fields']['PID']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['PID']['field'] = 'PID';
  $handler->display->display_options['fields']['PID']['label'] = '';
  $handler->display->display_options['fields']['PID']['exclude'] = TRUE;
  $handler->display->display_options['fields']['PID']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['PID']['link_to_object'] = 0;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a class="featured-thumb-img" href="islandora/object/[PID]"><img class="featured-thumb" src="islandora/object/[PID]/datastream/TN/view" alt=""/></a>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_wrapper_class'] = 'featured-thumb';
  /* Field: Islandora Solr: dc.title */
  $handler->display->display_options['fields']['dc.title']['id'] = 'dc.title';
  $handler->display->display_options['fields']['dc.title']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['dc.title']['field'] = 'dc.title';
  $handler->display->display_options['fields']['dc.title']['label'] = '';
  $handler->display->display_options['fields']['dc.title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['dc.title']['element_wrapper_class'] = 'featured-title';
  $handler->display->display_options['fields']['dc.title']['link_to_object'] = 1;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['dc.description']['id'] = 'dc.description';
  $handler->display->display_options['fields']['dc.description']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['dc.description']['field'] = 'dc.description';
  $handler->display->display_options['fields']['dc.description']['label'] = '';
  $handler->display->display_options['fields']['dc.description']['alter']['max_length'] = '140';
  $handler->display->display_options['fields']['dc.description']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['dc.description']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['dc.description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['dc.description']['element_wrapper_class'] = 'featured-description';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Islandora Solr: dc.title */
  $handler->display->display_options['filters']['dc.title']['id'] = 'dc.title';
  $handler->display->display_options['filters']['dc.title']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['dc.title']['field'] = 'dc.title';
  $handler->display->display_options['filters']['dc.title']['group'] = 1;
  /* Filter criterion: Broken/missing handler */
  $handler->display->display_options['filters']['rels.isMemberOfCollection']['id'] = 'rels.isMemberOfCollection';
  $handler->display->display_options['filters']['rels.isMemberOfCollection']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['rels.isMemberOfCollection']['field'] = 'rels.isMemberOfCollection';
  $handler->display->display_options['filters']['rels.isMemberOfCollection']['value'] = 'islandora:266';
  /* Filter criterion: Islandora Solr: RELS_EXT_isMemberOfCollection_uri_mt */
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['id'] = 'RELS_EXT_isMemberOfCollection_uri_mt';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['field'] = 'RELS_EXT_isMemberOfCollection_uri_mt';
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['value'] = 'islandora:featured_collection';
  $translatables['frontpage_solr_boxes'] = array(
    t('Master'),
    t('Frontpage Solr boxes'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Browse Collections'),
    t('Featured Collections'),
    t('There are no featured collections.'),
    t('<a class="featured-thumb-img" href="islandora/object/[PID]"><img class="featured-thumb" src="islandora/object/[PID]/datastream/TN/view" alt=""/></a>'),
  );
  $export['frontpage_solr_boxes'] = $view;

  $view = new view();
  $view->name = 'image_blocks';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Image blocks';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Image blocks';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image_block']['id'] = 'field_image_block';
  $handler->display->display_options['fields']['field_image_block']['table'] = 'field_data_field_image_block';
  $handler->display->display_options['fields']['field_image_block']['field'] = 'field_image_block';
  $handler->display->display_options['fields']['field_image_block']['label'] = '';
  $handler->display->display_options['fields']['field_image_block']['element_type'] = '0';
  $handler->display->display_options['fields']['field_image_block']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_block']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_image_block']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_image_block']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_block']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_image_block']['field_api_classes'] = TRUE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'image_block' => 'image_block',
  );
  /* Filter criterion: Content: Nid */
  $handler->display->display_options['filters']['nid']['id'] = 'nid';
  $handler->display->display_options['filters']['nid']['table'] = 'node';
  $handler->display->display_options['filters']['nid']['field'] = 'nid';

  /* Display: Image Block 1 */
  $handler = $view->new_display('block', 'Image Block 1', 'block');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image_block']['id'] = 'field_image_block';
  $handler->display->display_options['fields']['field_image_block']['table'] = 'field_data_field_image_block';
  $handler->display->display_options['fields']['field_image_block']['field'] = 'field_image_block';
  $handler->display->display_options['fields']['field_image_block']['label'] = '';
  $handler->display->display_options['fields']['field_image_block']['element_type'] = '0';
  $handler->display->display_options['fields']['field_image_block']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_block']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_image_block']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_image_block']['empty'] = '<img src="sites/all/modules/platform_main_feature/images/award_winning.png"/>';
  $handler->display->display_options['fields']['field_image_block']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_block']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_image_block']['field_api_classes'] = TRUE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'image_block' => 'image_block',
  );
  /* Filter criterion: Content: Node UUID */
  $handler->display->display_options['filters']['uuid']['id'] = 'uuid';
  $handler->display->display_options['filters']['uuid']['table'] = 'node';
  $handler->display->display_options['filters']['uuid']['field'] = 'uuid';
  $handler->display->display_options['filters']['uuid']['value'] = '15310bdf-5e1b-408b-8a7b-19ae5569eabd';

  /* Display: Footer logo */
  $handler = $view->new_display('block', 'Footer logo', 'block_1');
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image_block']['id'] = 'field_image_block';
  $handler->display->display_options['fields']['field_image_block']['table'] = 'field_data_field_image_block';
  $handler->display->display_options['fields']['field_image_block']['field'] = 'field_image_block';
  $handler->display->display_options['fields']['field_image_block']['label'] = '';
  $handler->display->display_options['fields']['field_image_block']['element_type'] = '0';
  $handler->display->display_options['fields']['field_image_block']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_block']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_image_block']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_image_block']['empty'] = '<img src="/sites/all/modules/platform_main_feature/images/dgi-footer-logo.png"/>';
  $handler->display->display_options['fields']['field_image_block']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_block']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_image_block']['field_api_classes'] = TRUE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'image_block' => 'image_block',
  );
  /* Filter criterion: Content: Node UUID */
  $handler->display->display_options['filters']['uuid']['id'] = 'uuid';
  $handler->display->display_options['filters']['uuid']['table'] = 'node';
  $handler->display->display_options['filters']['uuid']['field'] = 'uuid';
  $handler->display->display_options['filters']['uuid']['value'] = '847549c5-2502-4938-8fbb-4ea35e2f4815';

  /* Display: Welcome Message */
  $handler = $view->new_display('block', 'Welcome Message', 'block_2');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'image_block' => 'image_block',
  );
  /* Filter criterion: Content: Node UUID */
  $handler->display->display_options['filters']['uuid']['id'] = 'uuid';
  $handler->display->display_options['filters']['uuid']['table'] = 'node';
  $handler->display->display_options['filters']['uuid']['field'] = 'uuid';
  $handler->display->display_options['filters']['uuid']['value'] = '9c8f491e-d901-4fc8-9b5d-75490185bdd6';
  $translatables['image_blocks'] = array(
    t('Master'),
    t('Image blocks'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Image Block 1'),
    t('<img src="sites/all/modules/platform_main_feature/images/award_winning.png"/>'),
    t('Footer logo'),
    t('<img src="/sites/all/modules/platform_main_feature/images/dgi-footer-logo.png"/>'),
    t('Welcome Message'),
  );
  $export['image_blocks'] = $view;

  $view = new view();
  $view->name = 'object_page_image';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'islandora_solr';
  $view->human_name = 'Object Page Image';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* No results behavior: Entity: Rendered entity */
  $handler->display->display_options['empty']['entity']['id'] = 'entity';
  $handler->display->display_options['empty']['entity']['table'] = 'entity__global';
  $handler->display->display_options['empty']['entity']['field'] = 'entity';
  $handler->display->display_options['empty']['entity']['empty'] = TRUE;
  $handler->display->display_options['empty']['entity']['entity_type'] = 'islandora_object';
  $handler->display->display_options['empty']['entity']['entity_id'] = 'islandora:root';
  $handler->display->display_options['empty']['entity']['view_mode'] = 'default';
  $handler->display->display_options['empty']['entity']['bypass_access'] = 0;
  /* Field: Islandora Solr: PID */
  $handler->display->display_options['fields']['PID']['id'] = 'PID';
  $handler->display->display_options['fields']['PID']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['PID']['field'] = 'PID';
  $handler->display->display_options['fields']['PID']['label'] = '';
  $handler->display->display_options['fields']['PID']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['PID']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['PID']['link_to_object'] = 0;
  /* Contextual filter: Islandora Solr: PID */
  $handler->display->display_options['arguments']['PID']['id'] = 'PID';
  $handler->display->display_options['arguments']['PID']['table'] = 'islandora_solr';
  $handler->display->display_options['arguments']['PID']['field'] = 'PID';
  $handler->display->display_options['arguments']['PID']['default_action'] = 'default';
  $handler->display->display_options['arguments']['PID']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['PID']['default_argument_options']['index'] = '2';
  $handler->display->display_options['arguments']['PID']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['PID']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['PID']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['PID']['validate']['type'] = 'php';
  $handler->display->display_options['arguments']['PID']['validate_options']['code'] = 'return TRUE;';
  $handler->display->display_options['arguments']['PID']['validate']['fail'] = 'ignore';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['object_page_image'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('All'),
    t('Block'),
  );
  $export['object_page_image'] = $view;

  $view = new view();
  $view->name = 'object_subtitle';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'islandora_solr';
  $view->human_name = 'Object SubTitle';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Islandora Solr: mods_titleInfo_subTitle_ms */
  $handler->display->display_options['fields']['mods_titleInfo_subTitle_ms']['id'] = 'mods_titleInfo_subTitle_ms';
  $handler->display->display_options['fields']['mods_titleInfo_subTitle_ms']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['mods_titleInfo_subTitle_ms']['field'] = 'mods_titleInfo_subTitle_ms';
  $handler->display->display_options['fields']['mods_titleInfo_subTitle_ms']['label'] = '';
  $handler->display->display_options['fields']['mods_titleInfo_subTitle_ms']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['mods_titleInfo_subTitle_ms']['element_label_colon'] = FALSE;
  /* Contextual filter: Islandora Solr: PID */
  $handler->display->display_options['arguments']['PID']['id'] = 'PID';
  $handler->display->display_options['arguments']['PID']['table'] = 'islandora_solr';
  $handler->display->display_options['arguments']['PID']['field'] = 'PID';
  $handler->display->display_options['arguments']['PID']['default_action'] = 'default';
  $handler->display->display_options['arguments']['PID']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['PID']['default_argument_options']['index'] = '2';
  $handler->display->display_options['arguments']['PID']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['PID']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['PID']['summary_options']['items_per_page'] = '25';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['object_subtitle'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('All'),
    t('Block'),
  );
  $export['object_subtitle'] = $view;

  $view = new view();
  $view->name = 'plaque_view';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'islandora_solr';
  $view->human_name = 'Plaque View';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Plaque View';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Islandora Solr: PID */
  $handler->display->display_options['fields']['PID']['id'] = 'PID';
  $handler->display->display_options['fields']['PID']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['PID']['field'] = 'PID';
  $handler->display->display_options['fields']['PID']['label'] = '';
  $handler->display->display_options['fields']['PID']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['PID']['link_to_object'] = 0;
  /* Contextual filter: Islandora Solr: PID */
  $handler->display->display_options['arguments']['PID']['id'] = 'PID';
  $handler->display->display_options['arguments']['PID']['table'] = 'islandora_solr';
  $handler->display->display_options['arguments']['PID']['field'] = 'PID';
  $handler->display->display_options['arguments']['PID']['default_action'] = 'default';
  $handler->display->display_options['arguments']['PID']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['PID']['default_argument_options']['index'] = '2';
  $handler->display->display_options['arguments']['PID']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['PID']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['PID']['summary_options']['items_per_page'] = '25';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'plaque-view';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $translatables['plaque_view'] = array(
    t('Master'),
    t('Plaque View'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('All'),
    t('Page'),
    t('Block'),
  );
  $export['plaque_view'] = $view;

  $view = new view();
  $view->name = 'platform_front_page';
  $view->description = 'Emulates the default Drupal front page; you may set the default home page path to this view to make it your front page.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Platform Front page';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  /* Sort criterion: Content: Sticky */
  $handler->display->display_options['sorts']['sticky']['id'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['table'] = 'node';
  $handler->display->display_options['sorts']['sticky']['field'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['order'] = 'DESC';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Promoted to front page */
  $handler->display->display_options['filters']['promote']['id'] = 'promote';
  $handler->display->display_options['filters']['promote']['table'] = 'node';
  $handler->display->display_options['filters']['promote']['field'] = 'promote';
  $handler->display->display_options['filters']['promote']['value'] = '1';
  $handler->display->display_options['filters']['promote']['group'] = 0;
  $handler->display->display_options['filters']['promote']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'front';
  $translatables['platform_front_page'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Page'),
  );
  $export['platform_front_page'] = $view;

  $view = new view();
  $view->name = 'serial_holdings_report';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'islandora_solr';
  $view->human_name = 'Serial Holdings Report';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Serial Holdings Report';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Islandora Solr: marc_holding_callNumber_ms */
  $handler->display->display_options['fields']['marc_holding_callNumber_ms']['id'] = 'marc_holding_callNumber_ms';
  $handler->display->display_options['fields']['marc_holding_callNumber_ms']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['marc_holding_callNumber_ms']['field'] = 'marc_holding_callNumber_ms';
  $handler->display->display_options['fields']['marc_holding_callNumber_ms']['label'] = 'Call Number';
  $handler->display->display_options['fields']['marc_holding_callNumber_ms']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['marc_holding_callNumber_ms']['alter']['path'] = '/islandora/search/mods_identifier_lccallnumber_mt%3A[marc_holding_callNumber_ms]';
  $handler->display->display_options['fields']['marc_holding_callNumber_ms']['link_to_object'] = 0;
  /* Field: Islandora Solr: marc_holding_location_ms */
  $handler->display->display_options['fields']['marc_holding_location_ms']['id'] = 'marc_holding_location_ms';
  $handler->display->display_options['fields']['marc_holding_location_ms']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['marc_holding_location_ms']['field'] = 'marc_holding_location_ms';
  $handler->display->display_options['fields']['marc_holding_location_ms']['label'] = 'Location';
  $handler->display->display_options['fields']['marc_holding_location_ms']['link_to_object'] = 0;
  /* Field: Islandora Solr: marc_holding_libraryHas_ms */
  $handler->display->display_options['fields']['marc_holding_libraryHas_ms']['id'] = 'marc_holding_libraryHas_ms';
  $handler->display->display_options['fields']['marc_holding_libraryHas_ms']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['marc_holding_libraryHas_ms']['field'] = 'marc_holding_libraryHas_ms';
  $handler->display->display_options['fields']['marc_holding_libraryHas_ms']['label'] = 'Library Has';
  $handler->display->display_options['fields']['marc_holding_libraryHas_ms']['link_to_object'] = 0;
  /* Contextual filter: Islandora Solr: RELS_EXT_isConstituentOf_uri_ms */
  $handler->display->display_options['arguments']['RELS_EXT_isConstituentOf_pid_ms']['id'] = 'RELS_EXT_isConstituentOf_uri_ms';
  $handler->display->display_options['arguments']['RELS_EXT_isConstituentOf_pid_ms']['table'] = 'islandora_solr';
  $handler->display->display_options['arguments']['RELS_EXT_isConstituentOf_pid_ms']['field'] = 'RELS_EXT_isConstituentOf_uri_ms';
  $handler->display->display_options['arguments']['RELS_EXT_isConstituentOf_pid_ms']['default_action'] = 'default';
  $handler->display->display_options['arguments']['RELS_EXT_isConstituentOf_pid_ms']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['RELS_EXT_isConstituentOf_pid_ms']['default_argument_options']['code'] = '$object = menu_get_object(\'islandora_object\', 2);
  return "info:fedora/{$object->id}";';
  $handler->display->display_options['arguments']['RELS_EXT_isConstituentOf_pid_ms']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['RELS_EXT_isConstituentOf_pid_ms']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['RELS_EXT_isConstituentOf_pid_ms']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Islandora Solr: RELS_EXT_hasModel_uri_ms */
  $handler->display->display_options['filters']['RELS_EXT_hasModel_uri_ms']['id'] = 'RELS_EXT_hasModel_uri_ms';
  $handler->display->display_options['filters']['RELS_EXT_hasModel_uri_ms']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['RELS_EXT_hasModel_uri_ms']['field'] = 'RELS_EXT_hasModel_uri_ms';
  $handler->display->display_options['filters']['RELS_EXT_hasModel_uri_ms']['value'] = 'info:fedora/bhof:holdingsCModel';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['serial_holdings_report'] = array(
    t('Master'),
    t('Serial Holdings Report'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Call Number'),
    t('Location'),
    t('Library Has'),
    t('All'),
    t('Block'),
  );
  $export['serial_holdings_report'] = $view;

  $view = new view();
  $view->name = 'social_media';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Social Media';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Social Media';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '6';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '6';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Social Link */
  $handler->display->display_options['fields']['field_social_link']['id'] = 'field_social_link';
  $handler->display->display_options['fields']['field_social_link']['table'] = 'field_data_field_social_link';
  $handler->display->display_options['fields']['field_social_link']['field'] = 'field_social_link';
  $handler->display->display_options['fields']['field_social_link']['label'] = '';
  $handler->display->display_options['fields']['field_social_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_social_link']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_social_link']['element_label_colon'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image_block']['id'] = 'field_image_block';
  $handler->display->display_options['fields']['field_image_block']['table'] = 'field_data_field_image_block';
  $handler->display->display_options['fields']['field_image_block']['field'] = 'field_image_block';
  $handler->display->display_options['fields']['field_image_block']['label'] = '';
  $handler->display->display_options['fields']['field_image_block']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_image_block']['alter']['text'] = '<a href="[field_social_link]" title="[title]">[field_image_block]</a>';
  $handler->display->display_options['fields']['field_image_block']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_block']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_block']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
    3 => 'AND',
    4 => 'AND',
    5 => 'AND',
    6 => 'AND',
  );
  /* Filter criterion: Content: Node UUID */
  $handler->display->display_options['filters']['uuid']['id'] = 'uuid';
  $handler->display->display_options['filters']['uuid']['table'] = 'node';
  $handler->display->display_options['filters']['uuid']['field'] = 'uuid';
  $handler->display->display_options['filters']['uuid']['value'] = 'a935cfaa-31c7-42cd-b9b9-9f56e4469b1a';
  $handler->display->display_options['filters']['uuid']['group'] = 1;
  /* Filter criterion: Content: Node UUID */
  $handler->display->display_options['filters']['uuid_5']['id'] = 'uuid_5';
  $handler->display->display_options['filters']['uuid_5']['table'] = 'node';
  $handler->display->display_options['filters']['uuid_5']['field'] = 'uuid';
  $handler->display->display_options['filters']['uuid_5']['value'] = 'a0899508-4e1b-40dc-b28b-9540e0cd5e19';
  $handler->display->display_options['filters']['uuid_5']['group'] = 2;
  /* Filter criterion: Content: Node UUID */
  $handler->display->display_options['filters']['uuid_4']['id'] = 'uuid_4';
  $handler->display->display_options['filters']['uuid_4']['table'] = 'node';
  $handler->display->display_options['filters']['uuid_4']['field'] = 'uuid';
  $handler->display->display_options['filters']['uuid_4']['value'] = '21a94714-3c1f-4706-b1b2-b9e2dc4d665c';
  $handler->display->display_options['filters']['uuid_4']['group'] = 3;
  /* Filter criterion: Content: Node UUID */
  $handler->display->display_options['filters']['uuid_3']['id'] = 'uuid_3';
  $handler->display->display_options['filters']['uuid_3']['table'] = 'node';
  $handler->display->display_options['filters']['uuid_3']['field'] = 'uuid';
  $handler->display->display_options['filters']['uuid_3']['value'] = '7b1cdb8c-4217-4133-8e59-7aac1f1ad620';
  $handler->display->display_options['filters']['uuid_3']['group'] = 4;
  /* Filter criterion: Content: Node UUID */
  $handler->display->display_options['filters']['uuid_2']['id'] = 'uuid_2';
  $handler->display->display_options['filters']['uuid_2']['table'] = 'node';
  $handler->display->display_options['filters']['uuid_2']['field'] = 'uuid';
  $handler->display->display_options['filters']['uuid_2']['value'] = '276c44a0-b77b-484e-b9eb-6c4c51cb5400';
  $handler->display->display_options['filters']['uuid_2']['group'] = 5;
  /* Filter criterion: Content: Node UUID */
  $handler->display->display_options['filters']['uuid_1']['id'] = 'uuid_1';
  $handler->display->display_options['filters']['uuid_1']['table'] = 'node';
  $handler->display->display_options['filters']['uuid_1']['field'] = 'uuid';
  $handler->display->display_options['filters']['uuid_1']['value'] = '56fca61f-b803-4901-9d41-ecd3ff03e76f';
  $handler->display->display_options['filters']['uuid_1']['group'] = 6;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['social_media'] = array(
    t('Master'),
    t('Social Media'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('<a href="[field_social_link]" title="[title]">[field_image_block]</a>'),
    t('Block'),
  );
  $export['social_media'] = $view;

  $view = new view();
  $view->name = 'thumb_details';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'islandora_solr';
  $view->human_name = 'Thumb Details';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Thumb Details';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Islandora Solr: fgs_createdDate_dt */
  $handler->display->display_options['fields']['fgs_createdDate_dt']['id'] = 'fgs_createdDate_dt';
  $handler->display->display_options['fields']['fgs_createdDate_dt']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['fgs_createdDate_dt']['field'] = 'fgs_createdDate_dt';
  $handler->display->display_options['fields']['fgs_createdDate_dt']['label'] = 'Inducted';
  $handler->display->display_options['fields']['fgs_createdDate_dt']['link_to_object'] = 0;
  $handler->display->display_options['fields']['fgs_createdDate_dt']['date_format'] = 'short';
  /* Field: Islandora Solr: dc.type */
  $handler->display->display_options['fields']['dc.type']['id'] = 'dc.type';
  $handler->display->display_options['fields']['dc.type']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['dc.type']['field'] = 'dc.type';
  $handler->display->display_options['fields']['dc.type']['label'] = 'Position';
  /* Contextual filter: Islandora Solr: PID */
  $handler->display->display_options['arguments']['PID']['id'] = 'PID';
  $handler->display->display_options['arguments']['PID']['table'] = 'islandora_solr';
  $handler->display->display_options['arguments']['PID']['field'] = 'PID';
  $handler->display->display_options['arguments']['PID']['default_action'] = 'default';
  $handler->display->display_options['arguments']['PID']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['PID']['default_argument_options']['index'] = '2';
  $handler->display->display_options['arguments']['PID']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['PID']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['PID']['summary_options']['items_per_page'] = '25';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['enabled'] = FALSE;
  $translatables['thumb_details'] = array(
    t('Master'),
    t('Thumb Details'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Inducted'),
    t('Position'),
    t('All'),
    t('Block'),
  );
  $export['thumb_details'] = $view;

  $view = new view();
  $view->name = 'top_facet_searches';
  $view->description = 'Google Analytics integration, top facet searches';
  $view->tag = 'islandora';
  $view->base_table = 'google_analytics';
  $view->human_name = 'Top Facet Searches';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Top Facet Searches';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'searchCategory' => 'searchCategory',
    'searchResultViews' => 'searchResultViews',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'searchCategory' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'searchResultViews' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Internal search dimensions: Site Search Category */
  $handler->display->display_options['fields']['facet']['id'] = 'facet';
  $handler->display->display_options['fields']['facet']['table'] = 'google_analytics';
  $handler->display->display_options['fields']['facet']['field'] = 'searchCategory';
  $handler->display->display_options['fields']['facet']['label'] = 'Facet Terms';
  $handler->display->display_options['fields']['facet']['alter']['path'] = '[facet]';
  /* Field: Internal search metrics: Results Pageviews */
  $handler->display->display_options['fields']['pageviews']['id'] = 'searchResultViews';
  $handler->display->display_options['fields']['pageviews']['table'] = 'google_analytics';
  $handler->display->display_options['fields']['pageviews']['field'] = 'searchResultViews';
  $handler->display->display_options['fields']['pageviews']['label'] = '# of Searches';
  /* Sort criterion: Internal search metrics: Results Pageviews */
  $handler->display->display_options['sorts']['searchResultViews']['id'] = 'searchResultViews';
  $handler->display->display_options['sorts']['searchResultViews']['table'] = 'google_analytics';
  $handler->display->display_options['sorts']['searchResultViews']['field'] = 'searchResultViews';
  $handler->display->display_options['sorts']['searchResultViews']['order'] = 'DESC';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $translatables['top_facet_searches'] = array(
    t('Master'),
    t('Top Facet Searches'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Facet Terms'),
    t('# of Searches'),
    t('.'),
    t(','),
    t('Block'),
  );
  $export['top_facet_searches'] = $view;

  $view = new view();
  $view->name = 'top_site_searches';
  $view->description = 'Google Analytics integration, top site searches';
  $view->tag = 'islandora';
  $view->base_table = 'google_analytics';
  $view->human_name = 'Top Site Searches';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Top Site Searches';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '14';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'searchKeyword' => 'searchKeyword',
    'searchResultViews' => 'searchResultViews',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'searchKeyword' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'searchResultViews' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Internal search dimensions: Search Term */
  $handler->display->display_options['fields']['search']['id'] = 'searchKeyword';
  $handler->display->display_options['fields']['search']['table'] = 'google_analytics';
  $handler->display->display_options['fields']['search']['field'] = 'searchKeyword';
  $handler->display->display_options['fields']['search']['label'] = 'Search Terms';
  /* Field: Internal search metrics: Results Pageviews */
  $handler->display->display_options['fields']['pageviews']['id'] = 'searchResultViews';
  $handler->display->display_options['fields']['pageviews']['table'] = 'google_analytics';
  $handler->display->display_options['fields']['pageviews']['field'] = 'searchResultViews';
  $handler->display->display_options['fields']['pageviews']['label'] = '# of Searches';
  /* Sort criterion: Internal search metrics: Results Pageviews */
  $handler->display->display_options['sorts']['searchResultViews']['id'] = 'searchResultViews';
  $handler->display->display_options['sorts']['searchResultViews']['table'] = 'google_analytics';
  $handler->display->display_options['sorts']['searchResultViews']['field'] = 'searchResultViews';
  $handler->display->display_options['sorts']['searchResultViews']['order'] = 'DESC';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'Top Site Searches';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'You need to configure Google Analytics to show the Top Site Searches';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $translatables['top_site_searches'] = array(
    t('Master'),
    t('Top Site Searches'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Search Terms'),
    t('# of Searches'),
    t('.'),
    t(','),
    t('Block'),
    t('You need to configure Google Analytics to show the Top Site Searches'),
  );
  $export['top_site_searches'] = $view;

  $view = new view();
  $view->name = 'useful_information';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Useful Information';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Useful Information';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
    3 => 'AND',
  );
  /* Filter criterion: Content: Node UUID */
  $handler->display->display_options['filters']['uuid_1']['id'] = 'uuid_1';
  $handler->display->display_options['filters']['uuid_1']['table'] = 'node';
  $handler->display->display_options['filters']['uuid_1']['field'] = 'uuid';
  $handler->display->display_options['filters']['uuid_1']['value'] = 'c4f960eb-e02b-4b17-9ef3-ab0e5931ac0f';
  $handler->display->display_options['filters']['uuid_1']['group'] = 1;
  /* Filter criterion: Content: Node UUID */
  $handler->display->display_options['filters']['uuid_2']['id'] = 'uuid_2';
  $handler->display->display_options['filters']['uuid_2']['table'] = 'node';
  $handler->display->display_options['filters']['uuid_2']['field'] = 'uuid';
  $handler->display->display_options['filters']['uuid_2']['value'] = 'c4650527-19cf-4581-ace5-8e4ae97c8127';
  $handler->display->display_options['filters']['uuid_2']['group'] = 2;
  /* Filter criterion: Content: Node UUID */
  $handler->display->display_options['filters']['uuid']['id'] = 'uuid';
  $handler->display->display_options['filters']['uuid']['table'] = 'node';
  $handler->display->display_options['filters']['uuid']['field'] = 'uuid';
  $handler->display->display_options['filters']['uuid']['value'] = 'b7cc4c2c-c893-49bf-ac42-eae4751f922e';
  $handler->display->display_options['filters']['uuid']['group'] = 3;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'useful-information';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $translatables['useful_information'] = array(
    t('Master'),
    t('Useful Information'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Page'),
    t('Block'),
  );
  $export['useful_information'] = $view;

  return $export;
}
