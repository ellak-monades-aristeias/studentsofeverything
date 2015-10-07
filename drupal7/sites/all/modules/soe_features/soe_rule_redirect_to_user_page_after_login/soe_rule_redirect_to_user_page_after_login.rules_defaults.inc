<?php
/**
 * @file
 * soe_rule_redirect_to_user_page_after_login.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function soe_rule_redirect_to_user_page_after_login_default_rules_configuration() {
  $items = array();
  $items['rules_after_login_redirect_to_user_page'] = entity_import('rules_config', '{ "rules_after_login_redirect_to_user_page" : {
      "LABEL" : "After Login redirect to user page",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "login", "user" ],
      "REQUIRES" : [ "rules" ],
      "ON" : { "user_login" : [] },
      "DO" : [ { "redirect" : { "url" : "user", "destination" : "1" } } ]
    }
  }');
  return $items;
}
