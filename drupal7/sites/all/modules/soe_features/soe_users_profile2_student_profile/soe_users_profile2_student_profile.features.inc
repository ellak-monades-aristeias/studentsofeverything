<?php
/**
 * @file
 * soe_users_profile2_student_profile.features.inc
 */

/**
 * Implements hook_default_profile2_type().
 */
function soe_users_profile2_student_profile_default_profile2_type() {
  $items = array();
  $items['student'] = entity_import('profile2_type', '{
    "userCategory" : true,
    "userView" : true,
    "type" : "student",
    "label" : "Student",
    "weight" : "5",
    "data" : { "registration" : 0 },
    "rdf_mapping" : []
  }');
  return $items;
}
