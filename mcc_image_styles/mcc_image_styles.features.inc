<?php
/**
 * @file
 * mcc_image_styles.features.inc
 */

/**
 * Implements hook_image_default_styles().
 */
function mcc_image_styles_image_default_styles() {
  $styles = array();

  // Exported image style: islandora_imagecache_image_style_large.
  $styles['islandora_imagecache_image_style_large'] = array(
    'label' => 'Islandora Imagecache Image Style Large Size',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 900,
          'height' => 400,
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: islandora_imagecache_image_style_medium.
  $styles['islandora_imagecache_image_style_medium'] = array(
    'label' => 'Islandora Imagecache Image Style Medium Size',
    'effects' => array(
      0 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 210,
          'height' => 210,
          'upscale' => 1,
        ),
        'weight' => 0,
      ),
    ),
  );

  return $styles;
}
