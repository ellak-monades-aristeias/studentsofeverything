<?php
/**
 * @file
 * soe_users_profile2_teacher_profile.features.inc
 */

/**
 * Implements hook_default_profile2_type().
 */
function soe_users_profile2_teacher_profile_default_profile2_type() {
  $items = array();
  $items['teacher'] = entity_import('profile2_type', '{
    "userCategory" : true,
    "userView" : true,
    "type" : "teacher",
    "label" : "Teacher",
    "weight" : "1",
    "data" : { "registration" : 0 },
    "rdf_mapping" : []
  }');
  return $items;
}
