<?php
/**
 * @file
 * soe_panels__page_handler_node_edit_myproject.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function soe_panels__page_handler_node_edit_myproject_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_edit__myproject-add-edit-form';
  $handler->task = 'node_edit';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'myproject add/edit form',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'container',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'myproject-add-edit-form',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'myproject' => 'myproject',
            ),
          ),
          'context' => 'argument_node_edit_1',
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
  );
  $display->cache = array();
  $display->title = 'Add / Edit Project';
  $display->uuid = 'e9454d4c-18a8-4211-9ff8-09efd0f111a3';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-1effe5d4-b282-4a90-a9ca-88df40ff388a';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Instructions for this content type',
      'title' => '',
      'body' => '<p>Lorem ipsum dolor sit amet, consetetur sadipscing elitr, sed diam nonumy eirmod tempor invidunt ut labore et dolore magna aliquyam erat, sed diam voluptua. At vero eos et accusam et justo duo dolores et ea rebum. Stet clita kasd gubergren, no sea takimata sanctus est Lorem ipsum dolor sit amet. Lorem ipsum dolor sit amet, consetetur sadipscing elitr, sed diam nonumy eirmod tempor invidunt ut labore et dolore magna aliquyam erat, sed diam voluptua.</p>
',
      'format' => 'filtered_html',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'row col-sm-8 col-sm-offset-2',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '1effe5d4-b282-4a90-a9ca-88df40ff388a';
    $display->content['new-1effe5d4-b282-4a90-a9ca-88df40ff388a'] = $pane;
    $display->panels['middle'][0] = 'new-1effe5d4-b282-4a90-a9ca-88df40ff388a';
    $pane = new stdClass();
    $pane->pid = 'new-5b466ac7-381a-44db-8c71-b5084a9bd7c0';
    $pane->panel = 'middle';
    $pane->type = 'node_form_title';
    $pane->subtype = 'node_form_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_node_edit_1',
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
      'css_class' => 'row col-sm-8 col-sm-offset-2',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '5b466ac7-381a-44db-8c71-b5084a9bd7c0';
    $display->content['new-5b466ac7-381a-44db-8c71-b5084a9bd7c0'] = $pane;
    $display->panels['middle'][1] = 'new-5b466ac7-381a-44db-8c71-b5084a9bd7c0';
    $pane = new stdClass();
    $pane->pid = 'new-099f6b01-42a5-4057-9415-9a9d7b51e215';
    $pane->panel = 'middle';
    $pane->type = 'entity_form_field';
    $pane->subtype = 'node:field_myproject_photos';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => '',
      'formatter' => '',
      'context' => 'argument_node_edit_1',
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
      'css_class' => 'row col-sm-8 col-sm-offset-2',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '099f6b01-42a5-4057-9415-9a9d7b51e215';
    $display->content['new-099f6b01-42a5-4057-9415-9a9d7b51e215'] = $pane;
    $display->panels['middle'][2] = 'new-099f6b01-42a5-4057-9415-9a9d7b51e215';
    $pane = new stdClass();
    $pane->pid = 'new-cb79ec51-a483-4381-bf75-b96bf4d7a548';
    $pane->panel = 'middle';
    $pane->type = 'entity_form_field';
    $pane->subtype = 'node:field_myproject_what_i_learned';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => '',
      'formatter' => '',
      'context' => 'argument_node_edit_1',
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
      'css_class' => 'row col-sm-8 col-sm-offset-2',
    );
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'cb79ec51-a483-4381-bf75-b96bf4d7a548';
    $display->content['new-cb79ec51-a483-4381-bf75-b96bf4d7a548'] = $pane;
    $display->panels['middle'][3] = 'new-cb79ec51-a483-4381-bf75-b96bf4d7a548';
    $pane = new stdClass();
    $pane->pid = 'new-b7fb8da9-cf4d-40dc-92ec-f9d46651daa8';
    $pane->panel = 'middle';
    $pane->type = 'entity_form_field';
    $pane->subtype = 'node:field_myproject_what_was_difficu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => '',
      'formatter' => '',
      'context' => 'argument_node_edit_1',
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
      'css_class' => 'row col-sm-8 col-sm-offset-2',
    );
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'b7fb8da9-cf4d-40dc-92ec-f9d46651daa8';
    $display->content['new-b7fb8da9-cf4d-40dc-92ec-f9d46651daa8'] = $pane;
    $display->panels['middle'][4] = 'new-b7fb8da9-cf4d-40dc-92ec-f9d46651daa8';
    $pane = new stdClass();
    $pane->pid = 'new-354301f9-627b-418d-98f7-43d120d5398e';
    $pane->panel = 'middle';
    $pane->type = 'entity_form_field';
    $pane->subtype = 'node:field_myproject_what_i_liked';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => '',
      'formatter' => '',
      'context' => 'argument_node_edit_1',
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
      'css_class' => 'row col-sm-8 col-sm-offset-2',
    );
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '354301f9-627b-418d-98f7-43d120d5398e';
    $display->content['new-354301f9-627b-418d-98f7-43d120d5398e'] = $pane;
    $display->panels['middle'][5] = 'new-354301f9-627b-418d-98f7-43d120d5398e';
    $pane = new stdClass();
    $pane->pid = 'new-1ff8d3ee-f74d-48f3-a9d0-3476010623bb';
    $pane->panel = 'middle';
    $pane->type = 'entity_form_field';
    $pane->subtype = 'node:field_myproject_suggestions';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => '',
      'formatter' => '',
      'context' => 'argument_node_edit_1',
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
      'css_class' => 'row col-sm-8 col-sm-offset-2',
    );
    $pane->extras = array();
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = '1ff8d3ee-f74d-48f3-a9d0-3476010623bb';
    $display->content['new-1ff8d3ee-f74d-48f3-a9d0-3476010623bb'] = $pane;
    $display->panels['middle'][6] = 'new-1ff8d3ee-f74d-48f3-a9d0-3476010623bb';
    $pane = new stdClass();
    $pane->pid = 'new-26ee7d40-0b94-42bc-a448-0cb00e22a8e8';
    $pane->panel = 'middle';
    $pane->type = 'entity_form_field';
    $pane->subtype = 'node:field_themes';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => '',
      'formatter' => '',
      'context' => 'argument_node_edit_1',
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
      'css_class' => 'row col-sm-8 col-sm-offset-2',
    );
    $pane->extras = array();
    $pane->position = 7;
    $pane->locks = array();
    $pane->uuid = '26ee7d40-0b94-42bc-a448-0cb00e22a8e8';
    $display->content['new-26ee7d40-0b94-42bc-a448-0cb00e22a8e8'] = $pane;
    $display->panels['middle'][7] = 'new-26ee7d40-0b94-42bc-a448-0cb00e22a8e8';
    $pane = new stdClass();
    $pane->pid = 'new-c8c0fa1c-0959-4be1-9d47-b9e2ee35ce55';
    $pane->panel = 'middle';
    $pane->type = 'entity_form_field';
    $pane->subtype = 'node:field_difficulty_level';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => '',
      'formatter' => '',
      'context' => 'argument_node_edit_1',
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
      'css_class' => 'row col-sm-8 col-sm-offset-2',
    );
    $pane->extras = array();
    $pane->position = 8;
    $pane->locks = array();
    $pane->uuid = 'c8c0fa1c-0959-4be1-9d47-b9e2ee35ce55';
    $display->content['new-c8c0fa1c-0959-4be1-9d47-b9e2ee35ce55'] = $pane;
    $display->panels['middle'][8] = 'new-c8c0fa1c-0959-4be1-9d47-b9e2ee35ce55';
    $pane = new stdClass();
    $pane->pid = 'new-6eb49cb1-7bdc-4459-88a4-71332af82b06';
    $pane->panel = 'middle';
    $pane->type = 'node_form_buttons';
    $pane->subtype = 'node_form_buttons';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_node_edit_1',
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
      'css_class' => 'row col-sm-8 col-sm-offset-2',
    );
    $pane->extras = array();
    $pane->position = 9;
    $pane->locks = array();
    $pane->uuid = '6eb49cb1-7bdc-4459-88a4-71332af82b06';
    $display->content['new-6eb49cb1-7bdc-4459-88a4-71332af82b06'] = $pane;
    $display->panels['middle'][9] = 'new-6eb49cb1-7bdc-4459-88a4-71332af82b06';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_edit__myproject-add-edit-form'] = $handler;

  return $export;
}
