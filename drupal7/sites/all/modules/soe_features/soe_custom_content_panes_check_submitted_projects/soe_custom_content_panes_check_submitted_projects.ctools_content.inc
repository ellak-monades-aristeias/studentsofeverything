<?php
/**
 * @file
 * soe_custom_content_panes_check_submitted_projects.ctools_content.inc
 */

/**
 * Implements hook_default_ctools_custom_content().
 */
function soe_custom_content_panes_check_submitted_projects_default_ctools_custom_content() {
  $export = array();

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'check_submitted_projects';
  $content->admin_title = 'check submitted projects';
  $content->admin_description = '';
  $content->category = '';
  $content->settings = array(
    'admin_title' => 'check submitted projects',
    'title' => '',
    'body' => '<p><a href="/submitted">Check Submitted Projects</a></p>
',
    'format' => 'full_html',
    'substitute' => 0,
  );
  $export['check_submitted_projects'] = $content;

  return $export;
}
