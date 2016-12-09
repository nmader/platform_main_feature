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
 * Implements hook_fontyourface_features_default_font().
 */
function platform_main_feature_fontyourface_features_default_font() {
  return array(
    'Crimson Text 600 (latin)' => array(
      'name' => 'Crimson Text 600 (latin)',
      'enabled' => 1,
      'url' => 'http://www.google.com/webfonts/family?family=Crimson Text&subset=latin#600',
      'provider' => 'google_fonts_api',
      'css_selector' => 'body',
      'css_family' => 'Crimson Text',
      'css_style' => 'normal',
      'css_weight' => 600,
      'css_fallbacks' => '',
      'foundry' => '',
      'foundry_url' => '',
      'license' => '',
      'license_url' => '',
      'designer' => '',
      'designer_url' => '',
      'metadata' => 'a:2:{s:4:"path";s:16:"Crimson Text:600";s:6:"subset";s:5:"latin";}',
    ),
  );
}
