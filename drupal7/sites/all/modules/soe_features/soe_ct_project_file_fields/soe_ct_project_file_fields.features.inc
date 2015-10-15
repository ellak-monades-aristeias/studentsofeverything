<?php
/**
 * @file
 * soe_ct_project_file_fields.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function soe_ct_project_file_fields_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "file_entity" && $api == "file_default_displays") {
    return array("version" => "1");
  }
}
