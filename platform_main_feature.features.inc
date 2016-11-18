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
    'solr_field' => 'score',
    'field_type' => 'sort_fields',
    'weight' => -10,
    'solr_field_settings' => array(
      'label' => 'Relevance',
      'permissions' => FALSE,
    ),
  ),
  1 => array(
    'solr_field' => 'fgs_createdDate_dt',
    'field_type' => 'facet_fields',
    'weight' => -10,
    'solr_field_settings' => array(
      'label' => 'Created Date',
      'range_facet_start' => 'NOW/YEAR-20YEARS',
      'range_facet_end' => 'NOW',
      'range_facet_gap' => '+1YEAR',
      'date_facet_format' => 'Y',
      'range_facet_slider_color' => '#edc240',
      'date_filter_datepicker_range' => '-100:+3',
      'range_facet_select' => NULL,
      'range_facet_variable_gap' => NULL,
      'range_facet_slider_enabled' => NULL,
      'date_filter_datepicker_enabled' => NULL,
      'pid_object_label' => NULL,
      'permissions' => array(
        1 => 1,
        2 => 2,
        3 => 3,
      ),
    ),
  ),
  2 => array(
    'solr_field' => 'lcp_mods_search_title_mt',
    'field_type' => 'search_fields',
    'weight' => -10,
    'solr_field_settings' => array(
      'label' => 'Title',
      'permissions' => array(
        1 => 1,
        2 => 2,
        3 => 3,
      ),
    ),
  ),
  3 => array(
    'solr_field' => 'lcp_mods_display_title_ms',
    'field_type' => 'result_fields',
    'weight' => -10,
    'solr_field_settings' => array(
      'label' => 'Title',
      'snippet' => NULL,
      'date_format' => '',
      'truncation_type' => 'separate_value_option',
      'maximum_length' => 0,
      'add_ellipsis' => FALSE,
      'wordsafe' => FALSE,
      'wordsafe_length' => 1,
      'permissions' => array(
        1 => 1,
        2 => 2,
        3 => 3,
      ),
      'link_to_object' => FALSE,
      'link_to_search' => FALSE,
    ),
  ),
  4 => array(
    'solr_field' => 'lcp_mods_sort_creator_ss',
    'field_type' => 'sort_fields',
    'weight' => -9,
    'solr_field_settings' => array(
      'label' => 'Creator',
      'permissions' => array(
        1 => 1,
        2 => 2,
        3 => 3,
      ),
    ),
  ),
  5 => array(
    'solr_field' => 'lcp_mods_display_creator_ms',
    'field_type' => 'result_fields',
    'weight' => -9,
    'solr_field_settings' => array(
      'label' => 'Creator',
      'snippet' => NULL,
      'date_format' => '',
      'truncation_type' => 'separate_value_option',
      'maximum_length' => 0,
      'add_ellipsis' => FALSE,
      'wordsafe' => FALSE,
      'wordsafe_length' => 1,
      'permissions' => array(
        1 => 1,
        2 => 2,
        3 => 3,
      ),
      'link_to_object' => FALSE,
      'link_to_search' => FALSE,
    ),
  ),
  6 => array(
    'solr_field' => 'RELS_EXT_isMemberOfCollection_uri_ms',
    'field_type' => 'facet_fields',
    'weight' => -9,
    'solr_field_settings' => array(
      'label' => 'Collection',
      'pid_object_label' => 1,
      'permissions' => array(
        1 => 1,
        2 => 2,
        3 => 3,
      ),
    ),
  ),
  7 => array(
    'solr_field' => 'lcp_mods_search_creator_or_contributor_name_mt',
    'field_type' => 'search_fields',
    'weight' => -9,
    'solr_field_settings' => array(
      'label' => 'Creator or Contributor',
      'permissions' => array(
        1 => 1,
        2 => 2,
        3 => 3,
      ),
    ),
  ),
  8 => array(
    'solr_field' => 'lcp_mods_sort_title_ss',
    'field_type' => 'sort_fields',
    'weight' => -8,
    'solr_field_settings' => array(
      'label' => 'Title',
      'permissions' => array(
        1 => 1,
        2 => 2,
        3 => 3,
      ),
    ),
  ),
  9 => array(
    'solr_field' => 'lcp_mods_facet_date_mdt',
    'field_type' => 'facet_fields',
    'weight' => -8,
    'solr_field_settings' => array(
      'label' => 'Date',
      'range_facet_start' => 'NOW/YEAR-20YEARS',
      'range_facet_end' => 'NOW',
      'range_facet_gap' => '+1YEAR',
      'date_facet_format' => 'Y',
      'range_facet_slider_color' => '#edc240',
      'date_filter_datepicker_range' => '-100:+3',
      'range_facet_select' => NULL,
      'range_facet_variable_gap' => NULL,
      'range_facet_slider_enabled' => NULL,
      'date_filter_datepicker_enabled' => NULL,
      'pid_object_label' => NULL,
      'permissions' => array(
        1 => 1,
        2 => 2,
        3 => 3,
      ),
    ),
  ),
  10 => array(
    'solr_field' => 'lcp_mods_display_date_ms',
    'field_type' => 'result_fields',
    'weight' => -8,
    'solr_field_settings' => array(
      'label' => 'Date',
      'snippet' => NULL,
      'date_format' => '',
      'truncation_type' => 'separate_value_option',
      'maximum_length' => 0,
      'add_ellipsis' => FALSE,
      'wordsafe' => FALSE,
      'wordsafe_length' => 1,
      'permissions' => array(
        1 => 1,
        2 => 2,
        3 => 3,
      ),
      'link_to_object' => FALSE,
      'link_to_search' => FALSE,
    ),
  ),
  11 => array(
    'solr_field' => 'lcp_mods_search_associated_name_mt',
    'field_type' => 'search_fields',
    'weight' => -8,
    'solr_field_settings' => array(
      'label' => 'Associated Name',
      'permissions' => array(
        1 => 1,
        2 => 2,
        3 => 3,
      ),
    ),
  ),
  12 => array(
    'solr_field' => 'lcp_mods_sort_date_dt',
    'field_type' => 'sort_fields',
    'weight' => -7,
    'solr_field_settings' => array(
      'label' => 'Date',
      'permissions' => array(
        1 => 1,
        2 => 2,
        3 => 3,
      ),
    ),
  ),
  13 => array(
    'solr_field' => 'lcp_mods_search_date_mt',
    'field_type' => 'search_fields',
    'weight' => -7,
    'solr_field_settings' => array(
      'label' => 'Date',
      'permissions' => array(
        1 => 1,
        2 => 2,
        3 => 3,
      ),
    ),
  ),
  14 => array(
    'solr_field' => 'lcp_mods_facet_creator_or_contributor_name_ms',
    'field_type' => 'facet_fields',
    'weight' => -7,
    'solr_field_settings' => array(
      'label' => 'Creator or Contributor',
      'pid_object_label' => NULL,
      'permissions' => array(
        1 => 1,
        2 => 2,
        3 => 3,
      ),
    ),
  ),
  15 => array(
    'solr_field' => 'lcp_mods_search_subject_mt',
    'field_type' => 'search_fields',
    'weight' => -6,
    'solr_field_settings' => array(
      'label' => 'Subject',
      'permissions' => array(
        1 => 1,
        2 => 2,
        3 => 3,
      ),
    ),
  ),
  16 => array(
    'solr_field' => 'lcp_mods_display_location_ms',
    'field_type' => 'result_fields',
    'weight' => -6,
    'solr_field_settings' => array(
      'label' => 'Location',
      'snippet' => NULL,
      'date_format' => '',
      'truncation_type' => 'separate_value_option',
      'maximum_length' => 0,
      'add_ellipsis' => FALSE,
      'wordsafe' => FALSE,
      'wordsafe_length' => 1,
      'permissions' => array(
        1 => 1,
        2 => 2,
        3 => 3,
      ),
      'link_to_object' => FALSE,
      'link_to_search' => FALSE,
    ),
  ),
  17 => array(
    'solr_field' => 'lcp_mods_facet_subject_heading_geographic_ms',
    'field_type' => 'facet_fields',
    'weight' => -6,
    'solr_field_settings' => array(
      'label' => 'Subject Heading – Geographic',
      'pid_object_label' => NULL,
      'permissions' => array(
        1 => 1,
        2 => 2,
        3 => 3,
      ),
    ),
  ),
  18 => array(
    'solr_field' => 'lcp_mods_search_genre_mt',
    'field_type' => 'search_fields',
    'weight' => -5,
    'solr_field_settings' => array(
      'label' => 'Genre',
      'permissions' => array(
        1 => 1,
        2 => 2,
        3 => 3,
      ),
    ),
  ),
  19 => array(
    'solr_field' => 'lcp_mods_facet_subject_heading_name_ms',
    'field_type' => 'facet_fields',
    'weight' => -5,
    'solr_field_settings' => array(
      'label' => 'Subject Heading – Name',
      'pid_object_label' => NULL,
      'permissions' => array(
        1 => 1,
        2 => 2,
        3 => 3,
      ),
    ),
  ),
  20 => array(
    'solr_field' => 'lcp_mods_search_genre_ms',
    'field_type' => 'facet_fields',
    'weight' => -4,
    'solr_field_settings' => array(
      'label' => 'Subject Heading – Genre',
      'pid_object_label' => NULL,
      'permissions' => array(
        1 => 1,
        2 => 2,
        3 => 3,
      ),
    ),
  ),
  21 => array(
    'solr_field' => 'lcp_mods_search_format_mt',
    'field_type' => 'search_fields',
    'weight' => -4,
    'solr_field_settings' => array(
      'label' => 'Format',
      'permissions' => array(
        1 => 1,
        2 => 2,
        3 => 3,
      ),
    ),
  ),
  22 => array(
    'solr_field' => 'lcp_mods_search_location_mt',
    'field_type' => 'search_fields',
    'weight' => -3,
    'solr_field_settings' => array(
      'label' => 'Location',
      'permissions' => array(
        1 => 1,
        2 => 2,
        3 => 3,
      ),
    ),
  ),
  23 => array(
    'solr_field' => 'lcp_mods_facet_subject_heading_topic_ms',
    'field_type' => 'facet_fields',
    'weight' => -3,
    'solr_field_settings' => array(
      'label' => 'Subject Heading – Topic',
      'pid_object_label' => NULL,
      'permissions' => array(
        1 => 1,
        2 => 2,
        3 => 3,
      ),
    ),
  ),
  24 => array(
    'solr_field' => 'lcp_mods_facet_associated_name_ms',
    'field_type' => 'facet_fields',
    'weight' => -2,
    'solr_field_settings' => array(
      'label' => 'Associated Names',
      'pid_object_label' => NULL,
      'permissions' => array(
        1 => 1,
        2 => 2,
        3 => 3,
      ),
    ),
  ),
  25 => array(
    'solr_field' => 'lcp_mods_search_accession_number_mt',
    'field_type' => 'search_fields',
    'weight' => -2,
    'solr_field_settings' => array(
      'label' => 'Accession Number',
      'permissions' => array(
        1 => 1,
        2 => 2,
        3 => 3,
      ),
    ),
  ),
  26 => array(
    'solr_field' => 'lcp_mods_search_other_identifier_mt',
    'field_type' => 'search_fields',
    'weight' => -1,
    'solr_field_settings' => array(
      'label' => 'Other Identifier',
      'permissions' => array(
        1 => 1,
        2 => 2,
        3 => 3,
      ),
    ),
  ),
  27 => array(
    'solr_field' => 'RELS_EXT_isMemberOfCollection_uri_mt',
    'field_type' => 'search_fields',
    'weight' => 10,
    'solr_field_settings' => array(
      'label' => 'Collection',
      'permissions' => array(
        1 => 1,
        2 => 2,
        3 => 3,
      ),
    ),
  ),
  28 => array(
    'solr_field' => 'cbs_full_text',
    'field_type' => 'search_fields',
    'weight' => 11,
    'solr_field_settings' => array(
      'label' => 'General Search',
      'permissions' => array(
        1 => 1,
        2 => 2,
        3 => 3,
      ),
    ),
  ),
);
}
