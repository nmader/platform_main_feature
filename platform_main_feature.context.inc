<?php
/**
 * @file
 * platform_main_feature.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function platform_main_feature_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'islandora_object';
  $context->description = '';
  $context->tag = 'Metatag';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'islandora/object/*' => 'islandora/object/*',
      ),
    ),
  );
  $context->reactions = array(
    'metatag_context_reaction' => array(
      'metatags' => array(
        'und' => array(
          'title' => array(
            'value' => '[current-page:title]',
          ),
          'og:image' => array(
            'value' => '[islandora_object:thumbnail_token]',
          ),
          'og:image:width' => array(
            'value' => '200',
          ),
          'og:image:height' => array(
            'value' => '200',
          ),
        ),
      ),
      'metatag_admin' => 1,
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Metatag');
  $export['islandora_object'] = $context;

  return $export;
}
