<?php
/**
 * @file
 * platform_main_feature.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function platform_main_feature_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'pm_existing_pages_root_collection__panel_context_c4f3b6fa-3311-4e3a-be92-9e5194ad86c2';
  $handler->task = 'pm_existing_pages';
  $handler->subtask = 'root_collection';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Collections',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => 'islandora-panel-collection',
    'css' => '.page-upper-content .page-title {
  display: none;
}',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'islandora/object/islandora:root',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 1,
          1 => 'main-row',
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'banner',
        ),
        'parent' => 'main',
        'class' => 'banner--region',
        'hide_empty' => 0,
      ),
      'banner' => array(
        'type' => 'region',
        'title' => 'Banner',
        'width' => 100,
        'width_type' => '%',
        'parent' => '1',
        'class' => 'banner--region--inner',
        'hide_empty' => 0,
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'banner' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Big Cypress Collection';
  $display->uuid = 'fcf273db-f463-4579-83c1-04278c789512';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'pm_existing_pages_root_collection__panel_context_c4f3b6fa-3311-4e3a-be92-9e5194ad86c2';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-2ae74121-18dc-4a80-8de9-2cb840fb04fc';
  $pane->panel = 'banner';
  $pane->type = 'block';
  $pane->subtype = 'views-collection_banner-block';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '<none>',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '2ae74121-18dc-4a80-8de9-2cb840fb04fc';
  $display->content['new-2ae74121-18dc-4a80-8de9-2cb840fb04fc'] = $pane;
  $display->panels['banner'][0] = 'new-2ae74121-18dc-4a80-8de9-2cb840fb04fc';
  $pane = new stdClass();
  $pane->pid = 'new-f7c57bb3-aa42-4b6c-86fa-64df721726f3';
  $pane->panel = 'banner';
  $pane->type = 'block';
  $pane->subtype = 'blockify-blockify-page-title';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'f7c57bb3-aa42-4b6c-86fa-64df721726f3';
  $display->content['new-f7c57bb3-aa42-4b6c-86fa-64df721726f3'] = $pane;
  $display->panels['banner'][1] = 'new-f7c57bb3-aa42-4b6c-86fa-64df721726f3';
  $pane = new stdClass();
  $pane->pid = 'new-ec3f979b-da48-47ab-9d11-830dc223ec68';
  $pane->panel = 'banner';
  $pane->type = 'block';
  $pane->subtype = 'views-511963659673faff6186901340b8eb66';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '<none>',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'ec3f979b-da48-47ab-9d11-830dc223ec68';
  $display->content['new-ec3f979b-da48-47ab-9d11-830dc223ec68'] = $pane;
  $display->panels['banner'][2] = 'new-ec3f979b-da48-47ab-9d11-830dc223ec68';
  $pane = new stdClass();
  $pane->pid = 'new-3d3be375-552e-4dca-9d75-60e9ddc7edd2';
  $pane->panel = 'banner';
  $pane->type = 'block';
  $pane->subtype = 'islandora_collection_search-islandora_collection_search';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '<none>',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '3d3be375-552e-4dca-9d75-60e9ddc7edd2';
  $display->content['new-3d3be375-552e-4dca-9d75-60e9ddc7edd2'] = $pane;
  $display->panels['banner'][3] = 'new-3d3be375-552e-4dca-9d75-60e9ddc7edd2';
  $pane = new stdClass();
  $pane->pid = 'new-3a0b6ea7-9a73-498e-ae41-0b75a4970226';
  $pane->panel = 'center';
  $pane->type = 'pm_existing_pages';
  $pane->subtype = 'pm_existing_pages';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    0 => 'task_id',
    'task_id' => 'root_collection',
    'override_title' => 1,
    'override_title_text' => '<none>',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '3a0b6ea7-9a73-498e-ae41-0b75a4970226';
  $display->content['new-3a0b6ea7-9a73-498e-ae41-0b75a4970226'] = $pane;
  $display->panels['center'][0] = 'new-3a0b6ea7-9a73-498e-ae41-0b75a4970226';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-3a0b6ea7-9a73-498e-ae41-0b75a4970226';
  $handler->conf['display'] = $display;
  $export['pm_existing_pages_root_collection__panel_context_c4f3b6fa-3311-4e3a-be92-9e5194ad86c2'] = $handler;

  return $export;
}
