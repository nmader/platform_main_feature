<?php
/**
 * @file
 * platform_main_feature.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function platform_main_feature_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: main-menu.
  $menus['main-menu'] = array(
    'menu_name' => 'main-menu',
    'title' => 'Main menu',
    'description' => 'The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.',
  );
  // Exported menu: menu-engage.
  $menus['menu-engage'] = array(
    'menu_name' => 'menu-engage',
    'title' => 'Engage',
    'description' => '',
  );
  // Exported menu: menu-media-and-research-material.
  $menus['menu-media-and-research-material'] = array(
    'menu_name' => 'menu-media-and-research-material',
    'title' => 'MEDIA AND RESEARCH MATERIAL',
    'description' => '',
  );
  // Exported menu: menu-useful-links.
  $menus['menu-useful-links'] = array(
    'menu_name' => 'menu-useful-links',
    'title' => 'USEFUL LINKS',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Engage');
  t('MEDIA AND RESEARCH MATERIAL');
  t('Main menu');
  t('The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.');
  t('USEFUL LINKS');


  return $menus;
}
