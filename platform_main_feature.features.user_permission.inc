<?php
/**
 * @file
 * platform_main_feature.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function platform_main_feature_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access google analytics reports'.
  $permissions['access google analytics reports'] = array(
    'name' => 'access google analytics reports',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'google_analytics_reports',
  );

  return $permissions;
}
