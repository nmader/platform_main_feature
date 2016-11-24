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
 * Implements hook_image_default_styles().
 */
function platform_main_feature_image_default_styles() {
  $styles = array();

  // Exported image style: islandora_thubnail_defaults.
  $styles['islandora_thubnail_defaults'] = array(
    'label' => 'Islandora Thubnail Defaults',
    'effects' => array(
      2 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 155,
          'height' => 200,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
