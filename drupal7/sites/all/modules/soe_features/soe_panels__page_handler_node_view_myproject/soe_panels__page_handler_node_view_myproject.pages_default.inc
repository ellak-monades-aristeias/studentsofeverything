<?php
/**
 * @file
 * soe_panels__page_handler_node_view_myproject.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function soe_panels__page_handler_node_view_myproject_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__myproject';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'MyProject',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'fluid-container',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(
      0 => array(
        'identifier' => ' Author from Node (on node.node_author)',
        'keyword' => 'user',
        'name' => 'entity_from_schema:uid-node-user',
        'context' => 'argument_entity_id:node_1',
        'id' => 1,
      ),
    ),
    'name' => 'myproject',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'myproject' => 'myproject',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
    'middle' => array(
      'style' => '-1',
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = 'fb29b277-b626-43ca-b4ee-56fcf6b81451';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-38fdf83e-7ae8-4a2e-abba-158cd2825d5e';
    $pane->panel = 'middle';
    $pane->type = 'node_title';
    $pane->subtype = 'node_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link' => 0,
      'markup' => 'h1',
      'id' => '',
      'class' => 'row text-center',
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'row text-center',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '38fdf83e-7ae8-4a2e-abba-158cd2825d5e';
    $display->content['new-38fdf83e-7ae8-4a2e-abba-158cd2825d5e'] = $pane;
    $display->panels['middle'][0] = 'new-38fdf83e-7ae8-4a2e-abba-158cd2825d5e';
    $pane = new stdClass();
    $pane->pid = 'new-96556f18-4493-4c6b-9d93-9f337f5c2f35';
    $pane->panel = 'middle';
    $pane->type = 'node_author';
    $pane->subtype = 'node_author';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link' => 1,
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => 'accomplished by ',
      'override_title_heading' => 'span',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'row text-center',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '96556f18-4493-4c6b-9d93-9f337f5c2f35';
    $display->content['new-96556f18-4493-4c6b-9d93-9f337f5c2f35'] = $pane;
    $display->panels['middle'][1] = 'new-96556f18-4493-4c6b-9d93-9f337f5c2f35';
    $pane = new stdClass();
    $pane->pid = 'new-7b0deefb-fa7f-4bde-8ea3-11e6d7b6eaf4';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_myproject_photos';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'image',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'image_style' => 'large',
        'image_link' => '',
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'row text-center',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '7b0deefb-fa7f-4bde-8ea3-11e6d7b6eaf4';
    $display->content['new-7b0deefb-fa7f-4bde-8ea3-11e6d7b6eaf4'] = $pane;
    $display->panels['middle'][2] = 'new-7b0deefb-fa7f-4bde-8ea3-11e6d7b6eaf4';
    $pane = new stdClass();
    $pane->pid = 'new-d90d3c38-260c-41d1-8603-f76d08dd4fe5';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_myproject_what_i_learned';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'row text-center',
    );
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'd90d3c38-260c-41d1-8603-f76d08dd4fe5';
    $display->content['new-d90d3c38-260c-41d1-8603-f76d08dd4fe5'] = $pane;
    $display->panels['middle'][3] = 'new-d90d3c38-260c-41d1-8603-f76d08dd4fe5';
    $pane = new stdClass();
    $pane->pid = 'new-e8a3a5f4-05d0-4368-a26a-ada56e28e88f';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_myproject_what_was_difficu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'row text-center',
    );
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'e8a3a5f4-05d0-4368-a26a-ada56e28e88f';
    $display->content['new-e8a3a5f4-05d0-4368-a26a-ada56e28e88f'] = $pane;
    $display->panels['middle'][4] = 'new-e8a3a5f4-05d0-4368-a26a-ada56e28e88f';
    $pane = new stdClass();
    $pane->pid = 'new-e195b4be-d975-4634-8d51-53d3bdcb85d2';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_myproject_what_i_liked';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'row text-center',
    );
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = 'e195b4be-d975-4634-8d51-53d3bdcb85d2';
    $display->content['new-e195b4be-d975-4634-8d51-53d3bdcb85d2'] = $pane;
    $display->panels['middle'][5] = 'new-e195b4be-d975-4634-8d51-53d3bdcb85d2';
    $pane = new stdClass();
    $pane->pid = 'new-93d7bf92-4895-4932-9bf2-79319da43042';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_myproject_suggestions';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'row text-center',
    );
    $pane->extras = array();
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = '93d7bf92-4895-4932-9bf2-79319da43042';
    $display->content['new-93d7bf92-4895-4932-9bf2-79319da43042'] = $pane;
    $display->panels['middle'][6] = 'new-93d7bf92-4895-4932-9bf2-79319da43042';
    $pane = new stdClass();
    $pane->pid = 'new-abb4291f-bb39-4f2c-9ed3-bb340d4647de';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_themes';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'taxonomy_term_reference_link',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'row text-center',
    );
    $pane->extras = array();
    $pane->position = 7;
    $pane->locks = array();
    $pane->uuid = 'abb4291f-bb39-4f2c-9ed3-bb340d4647de';
    $display->content['new-abb4291f-bb39-4f2c-9ed3-bb340d4647de'] = $pane;
    $display->panels['middle'][7] = 'new-abb4291f-bb39-4f2c-9ed3-bb340d4647de';
    $pane = new stdClass();
    $pane->pid = 'new-981a0900-9865-4d3f-a8fe-2a56c604098e';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_difficulty_level';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'i18n_list_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'row text-center',
    );
    $pane->extras = array();
    $pane->position = 8;
    $pane->locks = array();
    $pane->uuid = '981a0900-9865-4d3f-a8fe-2a56c604098e';
    $display->content['new-981a0900-9865-4d3f-a8fe-2a56c604098e'] = $pane;
    $display->panels['middle'][8] = 'new-981a0900-9865-4d3f-a8fe-2a56c604098e';
    $pane = new stdClass();
    $pane->pid = 'new-6efad681-d916-4385-8854-4d03d1fc95ba';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_project_reference';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'entityreference_label',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'view_mode' => 'teaser',
        'links' => 0,
        'link' => 1,
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => 'See original Project ',
      'override_title_heading' => 'span',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'row text-center',
    );
    $pane->extras = array();
    $pane->position = 9;
    $pane->locks = array();
    $pane->uuid = '6efad681-d916-4385-8854-4d03d1fc95ba';
    $display->content['new-6efad681-d916-4385-8854-4d03d1fc95ba'] = $pane;
    $display->panels['middle'][9] = 'new-6efad681-d916-4385-8854-4d03d1fc95ba';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__myproject'] = $handler;

  return $export;
}
