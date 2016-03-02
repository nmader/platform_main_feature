<?php
/**
 * @file
 * platform_main_feature.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function platform_main_feature_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|bhof_basic_page|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'bhof_basic_page';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'classes' => array(),
    'wrappers' => array(
      'header' => 'div',
      'left' => 'div',
      'right' => 'div',
      'footer' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
    'regions' => array(
      'ds_content' => array(
        0 => 'field_bhof_subtitle',
        1 => 'body',
        2 => 'field_page_image',
        3 => 'field_page_image_description',
      ),
    ),
    'fields' => array(
      'field_bhof_subtitle' => 'ds_content',
      'body' => 'ds_content',
      'field_page_image' => 'ds_content',
      'field_page_image_description' => 'ds_content',
    ),
  );
  $export['node|bhof_basic_page|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|bhof_basic_page|form';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'bhof_basic_page';
  $ds_layout->view_mode = 'form';
  $ds_layout->layout = 'ds_2col_stacked';
  $ds_layout->settings = array(
    'regions' => array(
      'header' => array(
        0 => 'title',
      ),
      'left' => array(
        1 => 'field_bhof_subtitle',
        2 => 'body',
      ),
      'right' => array(
        3 => 'field_page_image',
        4 => 'field_page_image_description',
      ),
      'hidden' => array(
        5 => '_add_existing_field',
      ),
    ),
    'fields' => array(
      'title' => 'header',
      'field_bhof_subtitle' => 'left',
      'body' => 'left',
      'field_page_image' => 'right',
      'field_page_image_description' => 'right',
      '_add_existing_field' => 'hidden',
    ),
    'classes' => array(),
    'wrappers' => array(
      'header' => 'div',
      'left' => 'div',
      'right' => 'div',
      'footer' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => 0,
  );
  $export['node|bhof_basic_page|form'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|page|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'page';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_2col_stacked_large_left';
  $ds_layout->settings = array(
    'classes' => array(),
    'wrappers' => array(
      'header' => 'div',
      'left' => 'div',
      'right' => 'div',
      'footer' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => 0,
    'regions' => array(
      'header' => array(
        0 => 'field_sub_title',
      ),
      'left' => array(
        0 => 'body',
      ),
      'right' => array(
        0 => 'field_basic_page_image',
      ),
    ),
    'fields' => array(
      'field_sub_title' => 'header',
      'body' => 'left',
      'field_basic_page_image' => 'right',
    ),
  );
  $export['node|page|default'] = $ds_layout;

  return $export;
}
