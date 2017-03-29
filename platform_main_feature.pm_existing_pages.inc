<?php
/**
 * @file
 * platform_main_feature.pm_existing_pages.inc
 */

/**
 * Implements hook_pm_existing_pages_info().
 */
function platform_main_feature_pm_existing_pages_info() {
  $export = array();

  $pm_existing_page = new stdClass();
  $pm_existing_page->api_version = 1;
  $pm_existing_page->name = 'root_collection';
  $pm_existing_page->label = 'Root Collection';
  $pm_existing_page->context = '';
  $pm_existing_page->paths = 'islandora/object/%islandora_object';
  $export['root_collection'] = $pm_existing_page;

  return $export;
}
