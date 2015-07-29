<?php
/**
 * @file
 * platform_main_feature.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function platform_main_feature_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-image_block-field_image_url'
  $field_instances['node-image_block-field_image_url'] = array(
    'bundle' => 'image_block',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_image_url',
    'label' => 'Image URL',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 255,
      ),
      'type' => 'text_textfield',
      'weight' => 3,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Image URL');

  return $field_instances;
}
