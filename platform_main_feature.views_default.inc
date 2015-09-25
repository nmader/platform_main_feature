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
  $view->name = 'clone_of_islandora_usage_stats_for_collections';
  $view->description = 'Usage Stats for Collections';
  $view->tag = 'default';
  $view->base_table = 'islandora_usage_stats_object_access_log';
  $view->human_name = 'Clone of Islandora Usage Stats for Collections';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Collection Usage Stats';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'pid' => 'pid',
    'id' => 'id',
  );
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No view counts found.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Relationship: Islandora Usage Stats: Collection */
  $handler->display->display_options['relationships']['id']['id'] = 'id';
  $handler->display->display_options['relationships']['id']['table'] = 'islandora_usage_stats_object_access_log';
  $handler->display->display_options['relationships']['id']['field'] = 'id';
  /* Relationship: Islandora Usage Stats: Object */
  $handler->display->display_options['relationships']['pid_id']['id'] = 'pid_id';
  $handler->display->display_options['relationships']['pid_id']['table'] = 'islandora_usage_stats_object_access_log';
  $handler->display->display_options['relationships']['pid_id']['field'] = 'pid_id';
  /* Relationship: Islandora Usage Stats: Collection Object */
  $handler->display->display_options['relationships']['collection']['id'] = 'collection';
  $handler->display->display_options['relationships']['collection']['table'] = 'islandora_usage_stats_collection_access_log';
  $handler->display->display_options['relationships']['collection']['field'] = 'collection';
  $handler->display->display_options['relationships']['collection']['relationship'] = 'id';
  /* Relationship: Islandora Usage Stats: Object Collection Access */
  $handler->display->display_options['relationships']['object_access_id']['id'] = 'object_access_id';
  $handler->display->display_options['relationships']['object_access_id']['table'] = 'islandora_usage_stats_collection_access_log';
  $handler->display->display_options['relationships']['object_access_id']['field'] = 'object_access_id';
  $handler->display->display_options['relationships']['object_access_id']['relationship'] = 'id';
  /* Field: Islandora Usage Stats: Label */
  $handler->display->display_options['fields']['label']['id'] = 'label';
  $handler->display->display_options['fields']['label']['table'] = 'islandora_usage_stats_objects';
  $handler->display->display_options['fields']['label']['field'] = 'label';
  $handler->display->display_options['fields']['label']['relationship'] = 'pid_id';
  $handler->display->display_options['fields']['label']['label'] = '';
  $handler->display->display_options['fields']['label']['exclude'] = TRUE;
  $handler->display->display_options['fields']['label']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['label']['element_label_colon'] = FALSE;
  /* Field: Islandora Usage Stats: PID */
  $handler->display->display_options['fields']['pid']['id'] = 'pid';
  $handler->display->display_options['fields']['pid']['table'] = 'islandora_usage_stats_objects';
  $handler->display->display_options['fields']['pid']['field'] = 'pid';
  $handler->display->display_options['fields']['pid']['relationship'] = 'pid_id';
  $handler->display->display_options['fields']['pid']['label'] = '';
  $handler->display->display_options['fields']['pid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['pid']['alter']['text'] = '<a href="islandora/object/[PID]" title="[label]">[label]</a>';
  $handler->display->display_options['fields']['pid']['alter']['path'] = 'islandora/object/[pid]';
  $handler->display->display_options['fields']['pid']['element_label_colon'] = FALSE;
  /* Field: COUNT(DISTINCT Islandora Usage Stats: Log ID) */
  $handler->display->display_options['fields']['id']['id'] = 'id';
  $handler->display->display_options['fields']['id']['table'] = 'islandora_usage_stats_object_access_log';
  $handler->display->display_options['fields']['id']['field'] = 'id';
  $handler->display->display_options['fields']['id']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['id']['label'] = '';
  $handler->display->display_options['fields']['id']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['id']['alter']['text'] = '<span>[id] views</span>';
  $handler->display->display_options['fields']['id']['element_label_colon'] = FALSE;
  /* Sort criterion: COUNT(DISTINCT Islandora Usage Stats: Log ID) */
  $handler->display->display_options['sorts']['object_access_id']['id'] = 'object_access_id';
  $handler->display->display_options['sorts']['object_access_id']['table'] = 'islandora_usage_stats_collection_access_log';
  $handler->display->display_options['sorts']['object_access_id']['field'] = 'object_access_id';
  $handler->display->display_options['sorts']['object_access_id']['relationship'] = 'id';
  $handler->display->display_options['sorts']['object_access_id']['group_type'] = 'count_distinct';
  $handler->display->display_options['sorts']['object_access_id']['order'] = 'DESC';
  /* Contextual filter: Islandora Usage Stats: PID */
  $handler->display->display_options['arguments']['pid']['id'] = 'pid';
  $handler->display->display_options['arguments']['pid']['table'] = 'islandora_usage_stats_objects';
  $handler->display->display_options['arguments']['pid']['field'] = 'pid';
  $handler->display->display_options['arguments']['pid']['relationship'] = 'collection';
  $handler->display->display_options['arguments']['pid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['pid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['pid']['default_argument_options']['index'] = '2';
  $handler->display->display_options['arguments']['pid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['pid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['pid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['pid']['limit'] = '0';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'usage_stats');
  $handler->display->display_options['block_description'] = 'Usage Stats for Collections';
  $translatables['clone_of_islandora_usage_stats_for_collections'] = array(
    t('Master'),
    t('Collection Usage Stats'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('No view counts found.'),
    t('Collection'),
    t('Object'),
    t('Collection Object'),
    t('Object Collection Access'),
    t('<a href="islandora/object/[PID]" title="[label]">[label]</a>'),
    t('<span>[id] views</span>'),
    t('.'),
    t(','),
    t('All'),
    t('Block'),
    t('Usage Stats for Collections'),
  );
  $export['clone_of_islandora_usage_stats_for_collections'] = $view;

  $view = new view();
  $view->name = 'footer_icon_and_info';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Footer Icon and Info';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Footer Icon and Info';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image_block']['id'] = 'field_image_block';
  $handler->display->display_options['fields']['field_image_block']['table'] = 'field_data_field_image_block';
  $handler->display->display_options['fields']['field_image_block']['field'] = 'field_image_block';
  $handler->display->display_options['fields']['field_image_block']['label'] = '';
  $handler->display->display_options['fields']['field_image_block']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_block']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_block']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
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
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Node UUID */
  $handler->display->display_options['filters']['uuid']['id'] = 'uuid';
  $handler->display->display_options['filters']['uuid']['table'] = 'node';
  $handler->display->display_options['filters']['uuid']['field'] = 'uuid';
  $handler->display->display_options['filters']['uuid']['value'] = 'e2c6f941-2917-4bda-bc9a-79b6cb36dddc';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'footer-icon-and-info';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $translatables['footer_icon_and_info'] = array(
    t('Master'),
    t('Footer Icon and Info'),
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
  $export['footer_icon_and_info'] = $view;

  $view = new view();
  $view->name = 'footer_social_media';
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
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Social Media Icon */
  $handler->display->display_options['fields']['field_social_media_icon']['id'] = 'field_social_media_icon';
  $handler->display->display_options['fields']['field_social_media_icon']['table'] = 'field_data_field_social_media_icon';
  $handler->display->display_options['fields']['field_social_media_icon']['field'] = 'field_social_media_icon';
  $handler->display->display_options['fields']['field_social_media_icon']['label'] = '';
  $handler->display->display_options['fields']['field_social_media_icon']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_social_media_icon']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_social_media_icon']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_social_media_icon']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Social Link */
  $handler->display->display_options['fields']['field_social_link']['id'] = 'field_social_link';
  $handler->display->display_options['fields']['field_social_link']['table'] = 'field_data_field_social_link';
  $handler->display->display_options['fields']['field_social_link']['field'] = 'field_social_link';
  $handler->display->display_options['fields']['field_social_link']['label'] = '';
  $handler->display->display_options['fields']['field_social_link']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_social_link']['alter']['text'] = '<a href="[field_social_link-value]" title="[title]">[field_social_media_icon]</a>';
  $handler->display->display_options['fields']['field_social_link']['element_label_colon'] = FALSE;
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
    'social_media_icon' => 'social_media_icon',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'social-media';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $translatables['footer_social_media'] = array(
    t('Master'),
    t('Social Media'),
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
    t('<a href="[field_social_link-value]" title="[title]">[field_social_media_icon]</a>'),
    t('Page'),
    t('Block'),
  );
  $export['footer_social_media'] = $view;

  $view = new view();
  $view->name = 'front_page_icons';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Front Page Icons';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Front Page Icons';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Image URL */
  $handler->display->display_options['fields']['field_image_url']['id'] = 'field_image_url';
  $handler->display->display_options['fields']['field_image_url']['table'] = 'field_data_field_image_url';
  $handler->display->display_options['fields']['field_image_url']['field'] = 'field_image_url';
  $handler->display->display_options['fields']['field_image_url']['label'] = '';
  $handler->display->display_options['fields']['field_image_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image_url']['element_label_colon'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image_block']['id'] = 'field_image_block';
  $handler->display->display_options['fields']['field_image_block']['table'] = 'field_data_field_image_block';
  $handler->display->display_options['fields']['field_image_block']['field'] = 'field_image_block';
  $handler->display->display_options['fields']['field_image_block']['label'] = '';
  $handler->display->display_options['fields']['field_image_block']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_image_block']['alter']['text'] = '<a href="[field_image_url]" title="[title]" target="_blank">
[field_image_block]
</a>';
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
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Node UUID */
  $handler->display->display_options['filters']['uuid_1']['id'] = 'uuid_1';
  $handler->display->display_options['filters']['uuid_1']['table'] = 'node';
  $handler->display->display_options['filters']['uuid_1']['field'] = 'uuid';
  $handler->display->display_options['filters']['uuid_1']['value'] = '81336753-b010-4409-90b4-422784f01c89';
  $handler->display->display_options['filters']['uuid_1']['group'] = 1;
  /* Filter criterion: Content: Node UUID */
  $handler->display->display_options['filters']['uuid']['id'] = 'uuid';
  $handler->display->display_options['filters']['uuid']['table'] = 'node';
  $handler->display->display_options['filters']['uuid']['field'] = 'uuid';
  $handler->display->display_options['filters']['uuid']['value'] = '3ba99df5-4c20-4094-af98-149f9a5a006e';
  $handler->display->display_options['filters']['uuid']['group'] = 2;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'front-page-icons';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '2';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $translatables['front_page_icons'] = array(
    t('Master'),
    t('Front Page Icons'),
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
    t('<a href="[field_image_url]" title="[title]" target="_blank">
[field_image_block]
</a>'),
    t('Page'),
    t('Block'),
  );
  $export['front_page_icons'] = $view;

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
  $handler->display->display_options['style_plugin'] = 'galleria';
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
  $handler->display->display_options['style_options']['row_class'] = 'browse-collections-row';
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
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
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
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a href="islandora/object/[PID]"><img class="featured-thumb" src="islandora/object/[PID]/datastream/TN/view" alt=""/></a>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Islandora Solr: dc.title */
  $handler->display->display_options['fields']['dc.title']['id'] = 'dc.title';
  $handler->display->display_options['fields']['dc.title']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['dc.title']['field'] = 'dc.title';
  $handler->display->display_options['fields']['dc.title']['label'] = '';
  $handler->display->display_options['fields']['dc.title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['dc.title']['link_to_object'] = 1;
  /* Field: Islandora Solr: dc.description */
  $handler->display->display_options['fields']['dc.description']['id'] = 'dc.description';
  $handler->display->display_options['fields']['dc.description']['table'] = 'islandora_solr';
  $handler->display->display_options['fields']['dc.description']['field'] = 'dc.description';
  $handler->display->display_options['fields']['dc.description']['label'] = '';
  $handler->display->display_options['fields']['dc.description']['alter']['max_length'] = '140';
  $handler->display->display_options['fields']['dc.description']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['dc.description']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['dc.description']['element_label_colon'] = FALSE;
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
  $handler->display->display_options['filters']['RELS_EXT_isMemberOfCollection_uri_mt']['value'] = 'islandora:featured_collection';

  /* Display: Recent additions */
  $handler = $view->new_display('block', 'Recent additions', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Recent additions';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'recent-additions-row';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Islandora Solr: fgs_createdDate_dt */
  $handler->display->display_options['sorts']['fgs_createdDate_dt']['id'] = 'fgs_createdDate_dt';
  $handler->display->display_options['sorts']['fgs_createdDate_dt']['table'] = 'islandora_solr';
  $handler->display->display_options['sorts']['fgs_createdDate_dt']['field'] = 'fgs_createdDate_dt';
  $handler->display->display_options['sorts']['fgs_createdDate_dt']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Islandora Solr: dc.title */
  $handler->display->display_options['filters']['dc.title']['id'] = 'dc.title';
  $handler->display->display_options['filters']['dc.title']['table'] = 'islandora_solr';
  $handler->display->display_options['filters']['dc.title']['field'] = 'dc.title';
  $handler->display->display_options['filters']['dc.title']['group'] = 1;
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
    t('<a href="islandora/object/[PID]"><img class="featured-thumb" src="islandora/object/[PID]/datastream/TN/view" alt=""/></a>'),
    t('Recent additions'),
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
  $view->name = 'slideshow_galleria';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Slideshow Galleria';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'None';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'slideshow';
  $handler->display->display_options['style_options']['slideshow_type'] = 'views_slideshow_cycle';
  $handler->display->display_options['style_options']['slideshow_skin'] = 'default';
  $handler->display->display_options['style_options']['skin_info'] = array(
    'class' => 'default',
    'name' => 'Default',
    'module' => 'views_slideshow',
    'path' => '',
    'stylesheets' => array(),
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'field_slides' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'field_slides' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['timeout'] = '5000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['speed'] = '700';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['delay'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['start_paused'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['remember_slide_days'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['items_per_slide'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['wait_for_image_load_timeout'] = '3000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartype'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartypenobg'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_galleria']['autoplay'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_galleria']['autoplay_ms'] = '3000';
  $handler->display->display_options['style_options']['views_slideshow_galleria']['carousel'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_galleria']['carousel_follow'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_galleria']['carousel_speed'] = '200';
  $handler->display->display_options['style_options']['views_slideshow_galleria']['clicknext'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_galleria']['fullscreen_crop'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_galleria']['fullscreen_double_tap'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_galleria']['fullscreen_transition'] = 'fade';
  $handler->display->display_options['style_options']['views_slideshow_galleria']['height'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_galleria']['idle_mode'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_galleria']['idle_time'] = '3000';
  $handler->display->display_options['style_options']['views_slideshow_galleria']['idle_speed'] = '200';
  $handler->display->display_options['style_options']['views_slideshow_galleria']['image_crop'] = 'width';
  $handler->display->display_options['style_options']['views_slideshow_galleria']['image_margin'] = '';
  $handler->display->display_options['style_options']['views_slideshow_galleria']['image_pan'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_galleria']['image_pan_smoothness'] = '12';
  $handler->display->display_options['style_options']['views_slideshow_galleria']['initial_transition'] = 'fade';
  $handler->display->display_options['style_options']['views_slideshow_galleria']['layer_follow'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_galleria']['lightbox'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_galleria']['lightbox_fade_speed'] = '200';
  $handler->display->display_options['style_options']['views_slideshow_galleria']['lightbox_transition_speed'] = '300';
  $handler->display->display_options['style_options']['views_slideshow_galleria']['overlay_opacity'] = '0.85';
  $handler->display->display_options['style_options']['views_slideshow_galleria']['pause_on_interaction'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_galleria']['popup_links'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_galleria']['preload'] = '2';
  $handler->display->display_options['style_options']['views_slideshow_galleria']['queue'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_galleria']['responsive'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_galleria']['show'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_galleria']['show_info'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_galleria']['show_counter'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_galleria']['show_imagenav'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_galleria']['swipe'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_galleria']['thumb_crop'] = 'width';
  $handler->display->display_options['style_options']['views_slideshow_galleria']['thumb_fit'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_galleria']['thumb_margin'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_galleria']['thumb_quality'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_galleria']['thumbnails'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_galleria']['touch_transition'] = 'fade';
  $handler->display->display_options['style_options']['views_slideshow_galleria']['transition_speed'] = '400';
  $handler->display->display_options['style_options']['views_slideshow_galleria']['advanced']['avoid_flash_of_content'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_galleria']['advanced']['debug'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_galleria']['advanced']['keep_source'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_galleria']['advanced']['strip_images'] = 1;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Slides */
  $handler->display->display_options['fields']['field_slides']['id'] = 'field_slides';
  $handler->display->display_options['fields']['field_slides']['table'] = 'field_data_field_slides';
  $handler->display->display_options['fields']['field_slides']['field'] = 'field_slides';
  $handler->display->display_options['fields']['field_slides']['label'] = '';
  $handler->display->display_options['fields']['field_slides']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slides']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_slides']['type'] = 'galleria';
  $handler->display->display_options['fields']['field_slides']['settings'] = array(
    'optionset' => 'default',
  );
  $handler->display->display_options['fields']['field_slides']['delta_offset'] = '0';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'slideshow' => 'slideshow',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';

  /* Display: Galleria Slideshow */
  $handler = $view->new_display('page', 'Galleria Slideshow', 'page');
  $handler->display->display_options['path'] = 'slideshow-galleria';

  /* Display: Slideshow Galleria */
  $handler = $view->new_display('block', 'Slideshow Galleria', 'block');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $translatables['slideshow_galleria'] = array(
    t('Master'),
    t('None'),
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
    t('Galleria Slideshow'),
    t('Slideshow Galleria'),
  );
  $export['slideshow_galleria'] = $view;

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
  /* Field: Internal Search Dimensions: ga:searchCategory */
  $handler->display->display_options['fields']['facet']['id'] = 'facet';
  $handler->display->display_options['fields']['facet']['table'] = 'google_analytics';
  $handler->display->display_options['fields']['facet']['field'] = 'searchCategory';
  $handler->display->display_options['fields']['facet']['label'] = 'Facet Terms';
  $handler->display->display_options['fields']['facet']['alter']['path'] = '[facet]';
  /* Field: Internal Search Metrics: ga:searchResultViews */
  $handler->display->display_options['fields']['pageviews']['id'] = 'searchResultViews';
  $handler->display->display_options['fields']['pageviews']['table'] = 'google_analytics';
  $handler->display->display_options['fields']['pageviews']['field'] = 'searchResultViews';
  $handler->display->display_options['fields']['pageviews']['label'] = '# of Searches';
  /* Sort criterion: Internal Search Metrics: ga:searchResultViews */
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
  /* Field: Internal Search Dimensions: ga:searchKeyword */
  $handler->display->display_options['fields']['search']['id'] = 'searchKeyword';
  $handler->display->display_options['fields']['search']['table'] = 'google_analytics';
  $handler->display->display_options['fields']['search']['field'] = 'searchKeyword';
  $handler->display->display_options['fields']['search']['label'] = 'Search Terms';
  /* Field: Internal Search Metrics: ga:searchResultViews */
  $handler->display->display_options['fields']['pageviews']['id'] = 'searchResultViews';
  $handler->display->display_options['fields']['pageviews']['table'] = 'google_analytics';
  $handler->display->display_options['fields']['pageviews']['field'] = 'searchResultViews';
  $handler->display->display_options['fields']['pageviews']['label'] = '# of Searches';
  /* Sort criterion: Internal Search Metrics: ga:searchResultViews */
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
    t('Block'),
    t('You need to configure Google Analytics to show the Top Site Searches'),
  );
  $export['top_site_searches'] = $view;

  return $export;
}
