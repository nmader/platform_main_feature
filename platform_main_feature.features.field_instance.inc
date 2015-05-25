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

  // Exported field_instance: 'node-office_hours-body'
  $field_instances['node-office_hours-body'] = array(
    'bundle' => 'office_hours',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Body',
    'required' => FALSE,
    'settings' => array(
      'display_summary' => TRUE,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => -4,
    ),
  );

  // Exported field_instance: 'node-office_hours-field_hours'
  $field_instances['node-office_hours-field_hours'] = array(
    'bundle' => 'office_hours',
    'default_value' => array(
      0 => array(
        'starthours' => 900,
        'endhours' => 1700,
        'day' => 0,
        'daydelta' => 0,
      ),
      1 => array(
        'day' => 1,
        'daydelta' => 0,
        'endhours' => 1700,
        'starthours' => 900,
      ),
      2 => array(
        'day' => 2,
        'daydelta' => 0,
        'endhours' => 1700,
        'starthours' => 900,
      ),
      3 => array(
        'day' => 3,
        'daydelta' => 0,
        'endhours' => 1700,
        'starthours' => 900,
      ),
      4 => array(
        'day' => 4,
        'daydelta' => 0,
        'endhours' => 1700,
        'starthours' => 900,
      ),
      5 => array(
        'day' => 5,
        'daydelta' => 0,
        'endhours' => 1700,
        'starthours' => 900,
      ),
      6 => array(
        'day' => 6,
        'daydelta' => 0,
        'endhours' => 1700,
        'starthours' => 900,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'office_hours',
        'settings' => array(
          'closedformat' => 'Closed',
          'compress' => FALSE,
          'current_status' => array(
            'closed_text' => 'Currently closed',
            'open_text' => 'Currently open!',
            'position' => 'hide',
          ),
          'date_first_day' => 0,
          'daysformat' => 'long',
          'grouped' => FALSE,
          'hoursformat' => 0,
          'separator_day_hours' => ': ',
          'separator_days' => '<br />',
          'separator_grouped_days' => ' - ',
          'separator_hours_hours' => '-',
          'separator_more_hours' => ', ',
          'showclosed' => 'all',
          'timezone_field' => '',
        ),
        'type' => 'office_hours',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_hours',
    'label' => 'Hours',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'office_hours',
      'settings' => array(),
      'type' => 'office_hours',
      'weight' => -3,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Body');
  t('Hours');

  return $field_instances;
}
