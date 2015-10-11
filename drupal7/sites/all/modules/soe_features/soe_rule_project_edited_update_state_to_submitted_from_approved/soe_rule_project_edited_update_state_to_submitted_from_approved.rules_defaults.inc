<?php
/**
 * @file
 * soe_rule_project_edited_update_state_to_submitted_from_approved.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function soe_rule_project_edited_update_state_to_submitted_from_approved_default_rules_configuration() {
  $items = array();
  $items['rules_project_edited_update_state_to_submitted_from_approved'] = entity_import('rules_config', '{ "rules_project_edited_update_state_to_submitted_from_approved" : {
      "LABEL" : "project edited: update state to submitted from approved",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "project", "state" ],
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_presave--project" : { "bundle" : "project" } },
      "IF" : [
        { "data_is" : { "data" : [ "node:field-state" ], "value" : "3" } },
        { "AND" : [] },
        { "NOT user_has_role" : {
            "account" : [ "site:current-user" ],
            "roles" : { "value" : { "6" : "6" } }
          }
        }
      ],
      "DO" : [ { "data_set" : { "data" : [ "node:field-state" ], "value" : "2" } } ]
    }
  }');
  return $items;
}
