<?php
/**
 * @file
 * soe_panels__page_handler_user_view__editor_profile.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function soe_panels__page_handler_user_view__editor_profile_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}
