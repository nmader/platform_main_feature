<?php
/**
 * @file
 * sdsu_metadata_and_solr_config.features.inc
 */

/**
 * Implements hook_islandora_solr_fields_features_default_fields().
 */
function sdsu_metadata_and_solr_config_islandora_solr_fields_features_default_fields() {
  return array(
  0 => array(
    'solr_field' => 'dc.description',
    'field_type' => 'result_fields',
    'weight' => 0,
    'solr_field_settings' => array(
      'label' => '<none>',
      'snippet' => NULL,
      'date_format' => '',
      'truncation_type' => 'whole_field_option',
      'maximum_length' => 250,
      'add_ellipsis' => 1,
      'wordsafe' => 1,
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
  1 => array(
    'solr_field' => 'fgs_createdDate_dt',
    'field_type' => 'sort_fields',
    'weight' => 0,
    'solr_field_settings' => array(
      'label' => 'Year',
      'permissions' => array(
        1 => 1,
        2 => 2,
        3 => 3,
      ),
    ),
  ),
  2 => array(
    'solr_field' => 'fgs_createdDate_dt',
    'field_type' => 'facet_fields',
    'weight' => 0,
    'solr_field_settings' => array(
      'label' => '',
      'range_facet_select' => 1,
      'range_facet_variable_gap' => 1,
      'range_facet_start' => 'NOW/YEAR-20YEARS',
      'range_facet_end' => 'NOW',
      'range_facet_gap' => '+1YEAR',
      'date_facet_format' => 'Y',
      'range_facet_slider_enabled' => 1,
      'range_facet_slider_color' => '#edc240',
      'date_filter_datepicker_enabled' => 1,
      'date_filter_datepicker_range' => '-100:+3',
      'pid_object_label' => NULL,
      'permissions' => array(
        1 => 1,
        2 => 2,
        3 => 3,
      ),
    ),
  ),
  3 => array(
    'solr_field' => 'qdc_contributor_mt',
    'field_type' => 'search_fields',
    'weight' => 0,
    'solr_field_settings' => array(
      'label' => 'Contributor',
      'permissions' => array(
        1 => 1,
        2 => 2,
        3 => 3,
      ),
    ),
  ),
  4 => array(
    'solr_field' => 'dc.type',
    'field_type' => 'sort_fields',
    'weight' => 1,
    'solr_field_settings' => array(
      'label' => 'Material Type',
      'permissions' => array(
        1 => 1,
        2 => 2,
        3 => 3,
      ),
    ),
  ),
  5 => array(
    'solr_field' => 'dc.publisher',
    'field_type' => 'result_fields',
    'weight' => 1,
    'solr_field_settings' => array(
      'label' => '<none>',
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
    'solr_field' => 'qdc_creator_mt',
    'field_type' => 'search_fields',
    'weight' => 1,
    'solr_field_settings' => array(
      'label' => 'Author',
      'permissions' => array(
        1 => 1,
        2 => 2,
        3 => 3,
      ),
    ),
  ),
  7 => array(
    'solr_field' => 'qdc_title_ms',
    'field_type' => 'result_fields',
    'weight' => 3,
    'solr_field_settings' => array(
      'label' => '<none>',
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
  8 => array(
    'solr_field' => 'qdc_title_mt',
    'field_type' => 'search_fields',
    'weight' => 3,
    'solr_field_settings' => array(),
  ),
  9 => array(
    'solr_field' => 'qdc_creator_ms',
    'field_type' => 'result_fields',
    'weight' => 4,
    'solr_field_settings' => array(
      'label' => '<none>',
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
  10 => array(
    'solr_field' => 'qdc_dateAccepted_ms',
    'field_type' => 'result_fields',
    'weight' => 4,
    'solr_field_settings' => array(
      'label' => '<none>',
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
);
}

/**
 * Implements hook_islandora_solr_metadata_configurations_default_fields().
 */
function sdsu_metadata_and_solr_config_islandora_solr_metadata_configurations_default_fields() {
 return array(
  'Test' => array(
    'fields' => array(
      'qdc_title_ms' => array(
        'solr_field' => 'qdc_title_ms',
        'data' => 'a:4:{s:13:"display_label";s:5:"Title";s:9:"hyperlink";i:0;s:15:"uri_replacement";s:0:"";s:10:"truncation";a:5:{s:15:"truncation_type";s:21:"separate_value_option";s:10:"max_length";s:1:"0";s:9:"word_safe";i:0;s:8:"ellipsis";i:0;s:19:"min_wordsafe_length";s:1:"1";}}',
        'weight' => 2,
        'display_label' => 'Title',
        'hyperlink' => 0,
        'uri_replacement' => '',
        'truncation' => array(
          'truncation_type' => 'separate_value_option',
          'max_length' => 0,
          'word_safe' => 0,
          'ellipsis' => 0,
          'min_wordsafe_length' => 1,
        ),
      ),
      'qdc_creator_mt' => array(
        'solr_field' => 'qdc_creator_mt',
        'data' => 'a:4:{s:13:"display_label";s:6:"Author";s:9:"hyperlink";i:0;s:15:"uri_replacement";s:0:"";s:10:"truncation";a:5:{s:15:"truncation_type";s:21:"separate_value_option";s:10:"max_length";s:1:"0";s:9:"word_safe";i:0;s:8:"ellipsis";i:0;s:19:"min_wordsafe_length";s:1:"1";}}',
        'weight' => 3,
        'display_label' => 'Author',
        'hyperlink' => 0,
        'uri_replacement' => '',
        'truncation' => array(
          'truncation_type' => 'separate_value_option',
          'max_length' => 0,
          'word_safe' => 0,
          'ellipsis' => 0,
          'min_wordsafe_length' => 1,
        ),
      ),
      'qdc_abstract_ms' => array(
        'solr_field' => 'qdc_abstract_ms',
        'data' => 'a:4:{s:13:"display_label";s:8:"Abstract";s:9:"hyperlink";i:0;s:15:"uri_replacement";s:0:"";s:10:"truncation";a:5:{s:15:"truncation_type";s:21:"separate_value_option";s:10:"max_length";s:1:"0";s:9:"word_safe";i:0;s:8:"ellipsis";i:0;s:19:"min_wordsafe_length";s:1:"1";}}',
        'weight' => 4,
        'display_label' => 'Abstract',
        'hyperlink' => 0,
        'uri_replacement' => '',
        'truncation' => array(
          'truncation_type' => 'separate_value_option',
          'max_length' => 0,
          'word_safe' => 0,
          'ellipsis' => 0,
          'min_wordsafe_length' => 1,
        ),
      ),
      'qdc_dateAccepted_ms' => array(
        'solr_field' => 'qdc_dateAccepted_ms',
        'data' => 'a:4:{s:13:"display_label";s:13:"Date Accepted";s:9:"hyperlink";i:0;s:15:"uri_replacement";s:0:"";s:10:"truncation";a:5:{s:15:"truncation_type";s:21:"separate_value_option";s:10:"max_length";s:1:"0";s:9:"word_safe";i:0;s:8:"ellipsis";i:0;s:19:"min_wordsafe_length";s:1:"1";}}',
        'weight' => 5,
        'display_label' => 'Date Accepted',
        'hyperlink' => 0,
        'uri_replacement' => '',
        'truncation' => array(
          'truncation_type' => 'separate_value_option',
          'max_length' => 0,
          'word_safe' => 0,
          'ellipsis' => 0,
          'min_wordsafe_length' => 1,
        ),
      ),
    ),
    'cmodels' => array(
      'islandora:sp_pdf' => array(
        'cmodel' => 'islandora:sp_pdf',
      ),
      'islandora:binaryObjectCModel' => array(
        'cmodel' => 'islandora:binaryObjectCModel',
      ),
      'ir:citationCModel' => array(
        'cmodel' => 'ir:citationCModel',
      ),
      'islandora:collectionCModel' => array(
        'cmodel' => 'islandora:collectionCModel',
      ),
      'islandora:sp_document' => array(
        'cmodel' => 'islandora:sp_document',
      ),
      'islandora:sp-audioCModel' => array(
        'cmodel' => 'islandora:sp-audioCModel',
      ),
      'islandora:sp_videoCModel' => array(
        'cmodel' => 'islandora:sp_videoCModel',
      ),
    ),
    'description' => array(
      'description_field' => 'qdc_description_ms',
      'description_label' => 'Description',
      'description_data' => array(
        'truncation' => array(
          'truncation_type' => 'separate_value_option',
          'max_length' => 0,
          'word_safe' => 0,
          'ellipsis' => 0,
          'min_wordsafe_length' => 1,
        ),
      ),
    ),
    'name' => 'test',
  ),
);
}
