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

  // Exported image style: islandora_thumbnail_defaults.
  $styles['islandora_thumbnail_defaults'] = array(
    'label' => 'Islandora Thumbnail Defaults',
    'effects' => array(
      2 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 142,
          'height' => 142,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
