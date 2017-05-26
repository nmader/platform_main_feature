<?php
/**
 * @file
 * platform_main_feature.features.inc
 */

/**
 * Implements hook_default_blockgroups().
 */
function platform_main_feature_default_blockgroups() {
  return array(
    'featured_collections_group' => 'Featured Collections Group',
  );
}

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

  // Exported image style: collection_display_thumbnails.
  $styles['collection_display_thumbnails'] = array(
    'label' => 'Collection Display Thumbnails',
    'effects' => array(
      3 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 200,
          'height' => 160,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: owl_slider_thumbnail.
  $styles['owl_slider_thumbnail'] = array(
    'label' => 'Owl Slider Thumbnail',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 250,
          'height' => 165,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: owl_slider_thumbnail_explore.
  $styles['owl_slider_thumbnail_explore'] = array(
    'label' => 'Owl Slider Thumbnail Explore',
    'effects' => array(
      2 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 200,
          'height' => 200,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
