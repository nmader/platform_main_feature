<?php
/**
 * @file
 * platform_main_feature.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function platform_main_feature_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
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
    'Oswald 300 (latin-ext)' => array(
      'name' => 'Oswald 300 (latin-ext)',
      'enabled' => 1,
      'url' => 'http://www.google.com/webfonts/family?family=Oswald&subset=latin-ext#300',
      'provider' => 'google_fonts_api',
      'css_selector' => '.span-title, body, .block__title, .more-link a',
      'css_family' => 'Oswald',
      'css_style' => 'normal',
      'css_weight' => 300,
      'css_fallbacks' => '',
      'foundry' => '',
      'foundry_url' => '',
      'license' => '',
      'license_url' => '',
      'designer' => '',
      'designer_url' => '',
      'metadata' => 'a:2:{s:4:"path";s:10:"Oswald:300";s:6:"subset";s:9:"latin-ext";}',
    ),
    'Oswald 700 (latin-ext)' => array(
      'name' => 'Oswald 700 (latin-ext)',
      'enabled' => 1,
      'url' => 'http://www.google.com/webfonts/family?family=Oswald&subset=latin-ext#700',
      'provider' => 'google_fonts_api',
      'css_selector' => NULL,
      'css_family' => 'Oswald',
      'css_style' => 'normal',
      'css_weight' => 700,
      'css_fallbacks' => '',
      'foundry' => '',
      'foundry_url' => '',
      'license' => '',
      'license_url' => '',
      'designer' => '',
      'designer_url' => '',
      'metadata' => 'a:2:{s:4:"path";s:10:"Oswald:700";s:6:"subset";s:9:"latin-ext";}',
    ),
    'Oswald regular (latin-ext)' => array(
      'name' => 'Oswald regular (latin-ext)',
      'enabled' => 1,
      'url' => 'http://www.google.com/webfonts/family?family=Oswald&subset=latin-ext#regular',
      'provider' => 'google_fonts_api',
      'css_selector' => '.hero-info',
      'css_family' => 'Oswald',
      'css_style' => 'normal',
      'css_weight' => 'normal',
      'css_fallbacks' => '',
      'foundry' => '',
      'foundry_url' => '',
      'license' => '',
      'license_url' => '',
      'designer' => '',
      'designer_url' => '',
      'metadata' => 'a:2:{s:4:"path";s:14:"Oswald:regular";s:6:"subset";s:9:"latin-ext";}',
    ),
  );
}

/**
 * Implements hook_node_info().
 */
function platform_main_feature_node_info() {
  $items = array(
    'bhof_basic_page' => array(
      'name' => t('BHOF Basic Page'),
      'base' => 'node_content',
      'description' => t('Basic Page with defined layout'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
