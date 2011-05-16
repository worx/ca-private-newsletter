<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function ca_private_newsletter_user_default_permissions() {
  $permissions = array();

  // Exported permission: create ca_private_newsletter content
  $permissions['create ca_private_newsletter content'] = array(
    'name' => 'create ca_private_newsletter content',
    'roles' => array(
      '0' => 'private newsletter administrator',
      '1' => 'private newsletter writer',
    ),
  );

  // Exported permission: delete any ca_private_newsletter content
  $permissions['delete any ca_private_newsletter content'] = array(
    'name' => 'delete any ca_private_newsletter content',
    'roles' => array(
      '0' => 'private newsletter administrator',
    ),
  );

  // Exported permission: delete own ca_private_newsletter content
  $permissions['delete own ca_private_newsletter content'] = array(
    'name' => 'delete own ca_private_newsletter content',
    'roles' => array(
      '0' => 'private newsletter administrator',
      '1' => 'private newsletter writer',
    ),
  );

  // Exported permission: edit any ca_private_newsletter content
  $permissions['edit any ca_private_newsletter content'] = array(
    'name' => 'edit any ca_private_newsletter content',
    'roles' => array(
      '0' => 'private newsletter administrator',
    ),
  );

  // Exported permission: edit own ca_private_newsletter content
  $permissions['edit own ca_private_newsletter content'] = array(
    'name' => 'edit own ca_private_newsletter content',
    'roles' => array(
      '0' => 'private newsletter administrator',
      '1' => 'private newsletter writer',
    ),
  );

  return $permissions;
}
