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
    'solr_field' => 'fgs_label_s',
    'field_type' => 'sort_fields',
    'weight' => -10,
    'solr_field_settings' => array(
      'label' => 'Title',
      'permissions' => array(
        1 => 1,
        2 => 2,
        3 => 3,
        4 => 4,
      ),
    ),
  ),
  1 => array(
    'solr_field' => 'mods_originInfo_dateIssued_dt',
    'field_type' => 'facet_fields',
    'weight' => -10,
    'solr_field_settings' => array(
      'label' => 'Publication Year',
      'range_facet_select' => 1,
      'range_facet_variable_gap' => 1,
      'range_facet_start' => 'NOW/YEAR-20YEARS',
      'range_facet_end' => 'NOW',
      'range_facet_gap' => '+1YEAR',
      'date_facet_format' => 'Y',
      'range_facet_slider_enabled' => 1,
      'range_facet_slider_color' => '#5d5d5d',
      'date_filter_datepicker_enabled' => 1,
      'date_filter_datepicker_range' => '-100:+3',
      'pid_object_label' => NULL,
      'permissions' => array(
        1 => 1,
        2 => 2,
        3 => 3,
        4 => 4,
      ),
    ),
  ),
  2 => array(
    'solr_field' => 'fgs_createdDate_dt',
    'field_type' => 'sort_fields',
    'weight' => -9,
    'solr_field_settings' => array(
      'label' => 'Date Created',
      'permissions' => array(
        1 => 1,
        2 => 2,
        3 => 3,
        4 => 4,
      ),
    ),
  ),
  3 => array(
    'solr_field' => 'mods_subject_topic_s',
    'field_type' => 'facet_fields',
    'weight' => -8,
    'solr_field_settings' => array(
      'label' => 'Keywords',
      'pid_object_label' => NULL,
      'permissions' => array(
        1 => 1,
        2 => 2,
        3 => 3,
        4 => 4,
      ),
    ),
  ),
  4 => array(
    'solr_field' => 'dc.title',
    'field_type' => 'search_fields',
    'weight' => 0,
    'solr_field_settings' => array(
      'label' => 'Title',
      'permissions' => array(
        1 => 1,
        2 => 2,
        3 => 3,
        4 => 4,
      ),
    ),
  ),
  5 => array(
    'solr_field' => 'dc.description',
    'field_type' => 'search_fields',
    'weight' => 1,
    'solr_field_settings' => array(
      'label' => 'Description',
      'permissions' => array(
        1 => 1,
        2 => 2,
        3 => 3,
        4 => 4,
      ),
    ),
  ),
  6 => array(
    'solr_field' => 'mods_genre_ms',
    'field_type' => 'facet_fields',
    'weight' => 2,
    'solr_field_settings' => array(
      'label' => 'Publication Type',
      'pid_object_label' => NULL,
      'permissions' => array(
        1 => 1,
        2 => 2,
        3 => 3,
        4 => 4,
      ),
    ),
  ),
  7 => array(
    'solr_field' => 'mods_name_personal_author_mt',
    'field_type' => 'search_fields',
    'weight' => 2,
    'solr_field_settings' => array(
      'label' => 'Author Name',
      'permissions' => array(
        1 => 1,
        2 => 2,
        3 => 3,
        4 => 4,
      ),
    ),
  ),
  8 => array(
    'solr_field' => 'mods_originInfo_dateIssued_dt',
    'field_type' => 'sort_fields',
    'weight' => 2,
    'solr_field_settings' => array(
      'label' => 'Publication Year',
      'permissions' => array(
        1 => 1,
        2 => 2,
        3 => 3,
        4 => 4,
      ),
    ),
  ),
  9 => array(
    'solr_field' => 'mods_name_personal_affiliation_ms',
    'field_type' => 'facet_fields',
    'weight' => 3,
    'solr_field_settings' => array(
      'label' => 'Organizational Unit',
      'pid_object_label' => NULL,
      'permissions' => array(
        1 => 1,
        2 => 2,
        3 => 3,
        4 => 4,
      ),
    ),
  ),
  10 => array(
    'solr_field' => 'mods_name_personal_author_authority_marcrelator_nameIdentifier_authorId_ms',
    'field_type' => 'search_fields',
    'weight' => 3,
    'solr_field_settings' => array(
      'label' => 'Eawag Author',
      'permissions' => array(
        1 => 1,
        2 => 2,
        3 => 3,
        4 => 4,
      ),
    ),
  ),
  11 => array(
    'solr_field' => 'catch_all_MODS_mt',
    'field_type' => 'search_fields',
    'weight' => 4,
    'solr_field_settings' => array(
      'label' => 'Anywhere',
      'permissions' => array(
        1 => 1,
        2 => 2,
        3 => 3,
        4 => 4,
      ),
    ),
  ),
  12 => array(
    'solr_field' => 'mods_note_publication status_ms',
    'field_type' => 'facet_fields',
    'weight' => 4,
    'solr_field_settings' => array(
      'label' => 'Publication Status',
      'pid_object_label' => NULL,
      'permissions' => array(
        1 => 1,
        2 => 2,
        3 => 3,
        4 => 4,
      ),
    ),
  ),
  13 => array(
    'solr_field' => 'lib4ri_fulltext_mt',
    'field_type' => 'search_fields',
    'weight' => 5,
    'solr_field_settings' => array(
      'label' => 'Full Text',
      'permissions' => array(
        1 => 1,
        2 => 2,
        3 => 3,
        4 => 4,
      ),
    ),
  ),
  14 => array(
    'solr_field' => 'mods_note_peer review_ms',
    'field_type' => 'facet_fields',
    'weight' => 5,
    'solr_field_settings' => array(
      'label' => 'Peer Reviewed',
      'pid_object_label' => NULL,
      'permissions' => array(
        1 => 1,
        2 => 2,
        3 => 3,
        4 => 4,
      ),
    ),
  ),
  15 => array(
    'solr_field' => 'lib4ri_publisher_mt',
    'field_type' => 'search_fields',
    'weight' => 6,
    'solr_field_settings' => array(
      'label' => 'Publisher',
      'permissions' => array(
        1 => 1,
        2 => 2,
        3 => 3,
        4 => 4,
      ),
    ),
  ),
  16 => array(
    'solr_field' => 'mods_name_personal_author_authority_marcrelator_nameIdentifier_authorId_ms',
    'field_type' => 'facet_fields',
    'weight' => 6,
    'solr_field_settings' => array(
      'label' => 'Author',
      'pid_object_label' => NULL,
      'permissions' => FALSE,
    ),
  ),
  17 => array(
    'solr_field' => 'RELS_EXT_fullText_literal_ms',
    'field_type' => 'facet_fields',
    'weight' => 7,
    'solr_field_settings' => array(
      'label' => 'Full Text',
      'pid_object_label' => NULL,
      'permissions' => array(
        1 => 1,
        2 => 2,
        3 => 3,
        4 => 4,
      ),
    ),
  ),
);
}
