<?php
/**
 * @file
 * soe_flag_todo.features.inc
 */

/**
 * Implements hook_flag_default_flags().
 */
function soe_flag_todo_flag_default_flags() {
  $flags = array();
  // Exported flag: "To Do".
  $flags['to_do_project'] = array(
    'entity_type' => 'node',
    'title' => 'To Do',
    'global' => 0,
    'types' => array(
      0 => 'project',
    ),
    'flag_short' => 'To Do',
    'flag_long' => '',
    'flag_message' => 'Project added to ToDo-List',
    'unflag_short' => 'Won\'t Do anymore',
    'unflag_long' => '',
    'unflag_message' => 'Project removed from ToDo-List',
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
    'i18n' => 1,
    'api_version' => 3,
    'module' => 'soe_flag_todo',
    'locked' => array(
      0 => 'name',
    ),
  );
  return $flags;

}
