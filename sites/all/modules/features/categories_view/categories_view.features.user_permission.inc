<?php
/**
 * @file
 * categories_view.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function categories_view_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'edit terms in categories'.
  $permissions['edit terms in categories'] = array(
    'name' => 'edit terms in categories',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  return $permissions;
}
