<?php
/**
 * @file
 * soe_flag_like.features.inc
 */

/**
 * Implements hook_flag_default_flags().
 */
function soe_flag_like_flag_default_flags() {
  $flags = array();
  // Exported flag: "Like".
  $flags['like'] = array(
    'entity_type' => 'node',
    'title' => 'Like',
    'global' => 0,
    'types' => array(
      0 => 'project',
    ),
    'flag_short' => 'Like',
    'flag_long' => '',
    'flag_message' => 'Liked!',
    'unflag_short' => 'Don\'t like anymore',
    'unflag_long' => '',
    'unflag_message' => 'Not liked anymore',
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
    'module' => 'soe_flag_like',
    'locked' => array(
      0 => 'name',
    ),
  );
  return $flags;

}
