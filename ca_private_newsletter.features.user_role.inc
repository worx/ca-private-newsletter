<?php

/**
 * Implementation of hook_user_default_roles().
 */
function ca_private_newsletter_user_default_roles() {
  $roles = array();

  // Exported role: private newsletter administrator
  $roles['private newsletter administrator'] = array(
    'name' => 'private newsletter administrator',
  );

  // Exported role: private newsletter writer
  $roles['private newsletter writer'] = array(
    'name' => 'private newsletter writer',
  );

  // Exported role: private newsletter viewer
  $roles['private newsletter viewer'] = array(
    'name' => 'private newsletter viewer',
  );

  return $roles;
}
