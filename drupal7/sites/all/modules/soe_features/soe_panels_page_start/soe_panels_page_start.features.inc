<?php
/**
 * @file
 * soe_panels_page_start.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function soe_panels_page_start_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}
