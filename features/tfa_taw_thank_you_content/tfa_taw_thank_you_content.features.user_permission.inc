<?php
/**
 * @file
 * tfa_taw_thank_you_content.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function tfa_taw_thank_you_content_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create thank_you content'.
  $permissions['create thank_you content'] = array(
    'name' => 'create thank_you content',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any thank_you content'.
  $permissions['delete any thank_you content'] = array(
    'name' => 'delete any thank_you content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own thank_you content'.
  $permissions['delete own thank_you content'] = array(
    'name' => 'delete own thank_you content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any thank_you content'.
  $permissions['edit any thank_you content'] = array(
    'name' => 'edit any thank_you content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own thank_you content'.
  $permissions['edit own thank_you content'] = array(
    'name' => 'edit own thank_you content',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'node',
  );

  return $permissions;
}
