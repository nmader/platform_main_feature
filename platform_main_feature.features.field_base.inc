<?php
/**
 * @file
 * platform_main_feature.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function platform_main_feature_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_hours'.
  $field_bases['field_hours'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_hours',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'office_hours',
    'settings' => array(
      'cardinality' => 2,
      'granularity' => 60,
      'hoursformat' => 0,
      'limitend' => '',
      'limitstart' => '',
      'valhrs' => 0,
    ),
    'translatable' => 0,
    'type' => 'office_hours',
  );

  return $field_bases;
}
