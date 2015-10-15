<?php
/**
 * @file
 * soe_users_profile2_main_profile.features.inc
 */

/**
 * Implements hook_default_profile2_type().
 */
function soe_users_profile2_main_profile_default_profile2_type() {
  $items = array();
  $items['main'] = entity_import('profile2_type', '{
    "userCategory" : true,
    "userView" : true,
    "type" : "main",
    "label" : "Main profile",
    "weight" : "0",
    "data" : { "registration" : 0 },
    "rdf_mapping" : []
  }');
  return $items;
}
