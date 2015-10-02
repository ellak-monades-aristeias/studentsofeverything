<?php
/**
 * @file
 * soe_user_roles.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function soe_user_roles_user_default_roles() {
  $roles = array();

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 2,
  );

  // Exported role: editor.
  $roles['editor'] = array(
    'name' => 'editor',
    'weight' => 5,
  );

  // Exported role: student.
  $roles['student'] = array(
    'name' => 'student',
    'weight' => 3,
  );

  // Exported role: teacher.
  $roles['teacher'] = array(
    'name' => 'teacher',
    'weight' => 4,
  );

  return $roles;
}
