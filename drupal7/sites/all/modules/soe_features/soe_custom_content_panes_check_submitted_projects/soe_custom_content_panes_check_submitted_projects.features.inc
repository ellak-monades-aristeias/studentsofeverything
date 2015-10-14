<?php
/**
 * @file
 * soe_custom_content_panes_check_submitted_projects.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function soe_custom_content_panes_check_submitted_projects_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ctools_custom_content" && $api == "ctools_content") {
    return array("version" => "1");
  }
}
