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
  // Exported menu: menu-front-collection-links.
  $menus['menu-front-collection-links'] = array(
    'menu_name' => 'menu-front-collection-links',
    'title' => 'Front Collection Links',
    'description' => '',
  );
  // Exported menu: menu-popular-links.
  $menus['menu-popular-links'] = array(
    'menu_name' => 'menu-popular-links',
    'title' => 'Popular Links',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Front Collection Links');
  t('Main menu');
  t('Popular Links');
  t('The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.');


  return $menus;
}
