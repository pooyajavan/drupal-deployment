<?php
/**
 * @file
 * global_config.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function global_config_user_default_roles() {
  $roles = array();

  // Exported role: manager.
  $roles['manager'] = array(
    'name' => 'manager',
    'weight' => 3,
  );

  return $roles;
}
