<?php
/**
 * @file
 * soe_rule_project_completed_add_points_badge_to_user.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function soe_rule_project_completed_add_points_badge_to_user_default_rules_configuration() {
  $items = array();
  $items['rules_project_completed_add_points_badge_to_user'] = entity_import('rules_config', '{ "rules_project_completed_add_points_badge_to_user" : {
      "LABEL" : "project completed: add points, badge to user",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "badge", "points" ],
      "REQUIRES" : [ "rules", "flag", "rules_conditional" ],
      "ON" : { "node_insert--myproject" : { "bundle" : "myproject" } },
      "IF" : [
        { "entity_has_field" : {
            "entity" : [ "node:field-project-reference" ],
            "field" : "field_themes"
          }
        },
        { "AND" : [] },
        { "entity_has_field" : {
            "entity" : [ "node:field-project-reference" ],
            "field" : "field_difficulty_level"
          }
        },
        { "flag_flagged_node" : {
            "flag" : "to_do_project",
            "node" : [ "node:field-project-reference" ],
            "flagging_user" : [ "site:current-user" ]
          }
        }
      ],
      "DO" : [
        { "entity_fetch" : {
            "USING" : { "type" : "user", "id" : [ "node:author:uid" ] },
            "PROVIDE" : { "entity_fetched" : { "author_entity_fetched" : "Author" } }
          }
        },
        { "variable_add" : {
            "USING" : {
              "type" : "integer",
              "value" : [ "node:field-project-reference:field-difficulty-level" ]
            },
            "PROVIDE" : { "variable_added" : { "total_earned_points" : "Added variable" } }
          }
        },
        { "SWITCH" : {
            "USING" : { "data" : [ "node:field-project-reference:field-themes:name" ] },
            "DO" : [
              { "CASE" : {
                  "USING" : { "value" : "\\u0399\\u03c3\\u03c4\\u03bf\\u03c1\\u03af\\u03b5\\u03c2" },
                  "DO" : [
                    { "data_calc" : {
                        "USING" : {
                          "input_1" : [ "author-entity-fetched:field-points-stories" ],
                          "op" : "+",
                          "input_2" : [ "total-earned-points" ]
                        },
                        "PROVIDE" : { "result" : { "total_points_to_assign_stories" : "Calculation result" } }
                      }
                    },
                    { "data_set" : {
                        "data" : [ "author-entity-fetched:field-points-stories" ],
                        "value" : [ "total-points-to-assign-stories" ]
                      }
                    }
                  ]
                }
              },
              { "CASE" : {
                  "USING" : { "value" : "\\u039a\\u03b1\\u03c4\\u03b1\\u03c3\\u03ba\\u03b5\\u03c5\\u03ad\\u03c2" },
                  "DO" : [
                    { "data_calc" : {
                        "USING" : {
                          "input_1" : [ "author-entity-fetched:field-point-makes" ],
                          "op" : "+",
                          "input_2" : [ "total-earned-points" ]
                        },
                        "PROVIDE" : { "result" : { "total_points_to_assign_makes" : "Calculation result" } }
                      }
                    },
                    { "data_set" : {
                        "data" : [ "author-entity-fetched:field-point-makes" ],
                        "value" : [ "total-points-to-assign-makes" ]
                      }
                    }
                  ]
                }
              },
              { "CASE" : {
                  "USING" : { "value" : "\\u03a0\\u03b1\\u03b9\\u03c7\\u03bd\\u03af\\u03b4\\u03b9\\u03b1" },
                  "DO" : [
                    { "data_calc" : {
                        "USING" : {
                          "input_1" : [ "author-entity-fetched:field-points-games" ],
                          "op" : "+",
                          "input_2" : [ "total-earned-points" ]
                        },
                        "PROVIDE" : { "result" : { "total_points_to_assign_games" : "Calculation result" } }
                      }
                    },
                    { "data_set" : {
                        "data" : [ "author-entity-fetched:field-points-games" ],
                        "value" : [ "total-points-to-assign-games" ]
                      }
                    }
                  ]
                }
              }
            ]
          }
        },
        { "data_set" : {
            "data" : [ "node:field-themes" ],
            "value" : [ "node:field-project-reference:field-themes" ]
          }
        },
        { "data_set" : {
            "data" : [ "node:field-difficulty-level" ],
            "value" : [ "node:field-project-reference:field-difficulty-level" ]
          }
        },
        { "flag_unflagnode" : {
            "flag" : "to_do_project",
            "node" : [ "node:field-project-reference" ],
            "flagging_user" : [ "node:author" ],
            "permission_check" : "1"
          }
        }
      ]
    }
  }');
  return $items;
}
