<?php
/**
 * @file
 * soe_flag_editor_pick.features.inc
 */

/**
 * Implements hook_flag_default_flags().
 */
function soe_flag_editor_pick_flag_default_flags() {
  $flags = array();
  // Exported flag: "Staff picked".
  $flags['staff_picked'] = array(
    'entity_type' => 'node',
    'title' => 'Staff picked',
    'global' => 1,
    'types' => array(
      0 => 'project',
    ),
    'flag_short' => 'Editor-Pick this',
    'flag_long' => '',
    'flag_message' => 'Project flagged as great!',
    'unflag_short' => 'Editor-Unpick this',
    'unflag_long' => '',
    'unflag_message' => 'Project is not flagged as great anymore!',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => 0,
    'show_in_links' => array(
      'full' => 'full',
      'teaser' => 'teaser',
      'rss' => 0,
      'search_index' => 0,
      'search_result' => 0,
      'diff_standard' => 0,
      'token' => 0,
    ),
    'show_as_field' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 0,
    'i18n' => 0,
    'api_version' => 3,
    'module' => 'soe_flag_editor_pick',
    'locked' => array(
      0 => 'name',
    ),
  );
  return $flags;

}
