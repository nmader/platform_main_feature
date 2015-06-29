<?php
/**
 * @file
 * platform_main_feature.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function platform_main_feature_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function platform_main_feature_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_islandora_solr_fields_features_default_fields().
 */
function platform_main_feature_islandora_solr_fields_features_default_fields() {
  return array(
  0 => array(
    'solr_field' => 'fgs_createdDate_dt',
    'field_type' => 'facet_fields',
    'weight' => 0,
    'solr_field_settings' => array(
      'label' => 'Date Created',
      'range_facet_select' => 1,
      'range_facet_start' => 'NOW/YEAR-20YEARS',
      'range_facet_end' => 'NOW',
      'range_facet_gap' => '+1YEAR',
      'date_facet_format' => 'Y',
      'range_facet_slider_enabled' => 1,
      'range_facet_slider_color' => '#edc240',
      'date_filter_datepicker_enabled' => 1,
      'date_filter_datepicker_range' => '-100:+3',
      'range_facet_variable_gap' => NULL,
      'pid_object_label' => NULL,
      'permissions' => array(
        1 => 1,
        2 => 2,
        3 => 3,
      ),
    ),
  ),
  1 => array(
    'solr_field' => 'fedora_datastream_latest_DC_LABEL_mt',
    'field_type' => 'sort_fields',
    'weight' => 0,
    'solr_field_settings' => array(
      'label' => 'DC Label',
      'permissions' => FALSE,
    ),
  ),
  2 => array(
    'solr_field' => 'dc.date',
    'field_type' => 'facet_fields',
    'weight' => 1,
    'solr_field_settings' => array(
      'label' => 'DC Date',
      'pid_object_label' => NULL,
      'permissions' => array(
        1 => 1,
        2 => 2,
        3 => 3,
      ),
    ),
  ),
  3 => array(
    'solr_field' => 'fgs_createdDate_dt',
    'field_type' => 'sort_fields',
    'weight' => 1,
    'solr_field_settings' => array(
      'label' => 'Date Created',
      'permissions' => FALSE,
    ),
  ),
  4 => array(
    'solr_field' => 'dc.date',
    'field_type' => 'sort_fields',
    'weight' => 2,
    'solr_field_settings' => array(
      'label' => 'DC Date',
      'permissions' => FALSE,
    ),
  ),
  5 => array(
    'solr_field' => 'fedora_datastream_latest_DC_LABEL_mt',
    'field_type' => 'facet_fields',
    'weight' => 2,
    'solr_field_settings' => array(
      'label' => 'DC Label',
      'pid_object_label' => NULL,
      'permissions' => array(
        1 => 1,
        2 => 2,
        3 => 3,
      ),
    ),
  ),
  6 => array(
    'solr_field' => 'RELS_EXT_isMemberOfCollection_uri_mt',
    'field_type' => 'facet_fields',
    'weight' => 3,
    'solr_field_settings' => array(
      'label' => 'Is Member of Collection',
      'pid_object_label' => NULL,
      'permissions' => array(
        1 => 1,
        2 => 2,
        3 => 3,
      ),
    ),
  ),
);
}

/**
 * Implements hook_node_info().
 */
function platform_main_feature_node_info() {
  $items = array(
    'front_page' => array(
      'name' => t('Front Page'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
