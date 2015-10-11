<?php
/**
 * @file
 * soe_panels__page_handler_node_edit_project.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function soe_panels__page_handler_node_edit_project_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_edit__panel_context_3ca18e4a-b5b8-44a0-931a-378af431cbaf';
  $handler->task = 'node_edit';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'project add/edit form',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'container',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'project' => 'project',
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
    $pane->pid = 'new-10f95dac-c77f-4a7d-8cac-7ae0e475ed3a';
    $pane->panel = 'middle';
    $pane->type = 'entity_form_field';
    $pane->subtype = 'node:field_main_image';
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
    $pane->uuid = '10f95dac-c77f-4a7d-8cac-7ae0e475ed3a';
    $display->content['new-10f95dac-c77f-4a7d-8cac-7ae0e475ed3a'] = $pane;
    $display->panels['middle'][2] = 'new-10f95dac-c77f-4a7d-8cac-7ae0e475ed3a';
    $pane = new stdClass();
    $pane->pid = 'new-220084bc-1f0e-4602-80c6-6978d5c34ce7';
    $pane->panel = 'middle';
    $pane->type = 'entity_form_field';
    $pane->subtype = 'node:field_other_images';
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
    $pane->uuid = '220084bc-1f0e-4602-80c6-6978d5c34ce7';
    $display->content['new-220084bc-1f0e-4602-80c6-6978d5c34ce7'] = $pane;
    $display->panels['middle'][3] = 'new-220084bc-1f0e-4602-80c6-6978d5c34ce7';
    $pane = new stdClass();
    $pane->pid = 'new-881bb5d0-af56-480c-82c7-f62ef44da376';
    $pane->panel = 'middle';
    $pane->type = 'entity_form_field';
    $pane->subtype = 'node:field_video_links';
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
    $pane->uuid = '881bb5d0-af56-480c-82c7-f62ef44da376';
    $display->content['new-881bb5d0-af56-480c-82c7-f62ef44da376'] = $pane;
    $display->panels['middle'][4] = 'new-881bb5d0-af56-480c-82c7-f62ef44da376';
    $pane = new stdClass();
    $pane->pid = 'new-a1c21781-9772-41ad-b850-1af079f4fc46';
    $pane->panel = 'middle';
    $pane->type = 'entity_form_field';
    $pane->subtype = 'node:body';
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
    $pane->uuid = 'a1c21781-9772-41ad-b850-1af079f4fc46';
    $display->content['new-a1c21781-9772-41ad-b850-1af079f4fc46'] = $pane;
    $display->panels['middle'][5] = 'new-a1c21781-9772-41ad-b850-1af079f4fc46';
    $pane = new stdClass();
    $pane->pid = 'new-bbdb6108-6665-4555-a51c-285c9b10f45f';
    $pane->panel = 'middle';
    $pane->type = 'entity_form_field';
    $pane->subtype = 'node:field_instructions';
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
    $pane->uuid = 'bbdb6108-6665-4555-a51c-285c9b10f45f';
    $display->content['new-bbdb6108-6665-4555-a51c-285c9b10f45f'] = $pane;
    $display->panels['middle'][6] = 'new-bbdb6108-6665-4555-a51c-285c9b10f45f';
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
    $pane->position = 7;
    $pane->locks = array();
    $pane->uuid = 'c8c0fa1c-0959-4be1-9d47-b9e2ee35ce55';
    $display->content['new-c8c0fa1c-0959-4be1-9d47-b9e2ee35ce55'] = $pane;
    $display->panels['middle'][7] = 'new-c8c0fa1c-0959-4be1-9d47-b9e2ee35ce55';
    $pane = new stdClass();
    $pane->pid = 'new-cf865423-caad-4af4-b9b5-d689793cb085';
    $pane->panel = 'middle';
    $pane->type = 'entity_form_field';
    $pane->subtype = 'node:field_material_needed';
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
    $pane->uuid = 'cf865423-caad-4af4-b9b5-d689793cb085';
    $display->content['new-cf865423-caad-4af4-b9b5-d689793cb085'] = $pane;
    $display->panels['middle'][8] = 'new-cf865423-caad-4af4-b9b5-d689793cb085';
    $pane = new stdClass();
    $pane->pid = 'new-9d249ccb-2f01-4ae7-8c08-2da761e69c70';
    $pane->panel = 'middle';
    $pane->type = 'entity_form_field';
    $pane->subtype = 'node:field_attachments';
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
    $pane->position = 9;
    $pane->locks = array();
    $pane->uuid = '9d249ccb-2f01-4ae7-8c08-2da761e69c70';
    $display->content['new-9d249ccb-2f01-4ae7-8c08-2da761e69c70'] = $pane;
    $display->panels['middle'][9] = 'new-9d249ccb-2f01-4ae7-8c08-2da761e69c70';
    $pane = new stdClass();
    $pane->pid = 'new-bb5f8c02-ca7c-45fb-8b95-f14c448f4a20';
    $pane->panel = 'middle';
    $pane->type = 'entity_form_field';
    $pane->subtype = 'node:field_audio_files';
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
    $pane->position = 10;
    $pane->locks = array();
    $pane->uuid = 'bb5f8c02-ca7c-45fb-8b95-f14c448f4a20';
    $display->content['new-bb5f8c02-ca7c-45fb-8b95-f14c448f4a20'] = $pane;
    $display->panels['middle'][10] = 'new-bb5f8c02-ca7c-45fb-8b95-f14c448f4a20';
    $pane = new stdClass();
    $pane->pid = 'new-87f93fec-7b28-408d-9758-99275da3a0b1';
    $pane->panel = 'middle';
    $pane->type = 'entity_form_field';
    $pane->subtype = 'node:field_parental_presence_necessar';
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
    $pane->position = 11;
    $pane->locks = array();
    $pane->uuid = '87f93fec-7b28-408d-9758-99275da3a0b1';
    $display->content['new-87f93fec-7b28-408d-9758-99275da3a0b1'] = $pane;
    $display->panels['middle'][11] = 'new-87f93fec-7b28-408d-9758-99275da3a0b1';
    $pane = new stdClass();
    $pane->pid = 'new-c54fcd1c-7269-4e3b-bec6-57efb301acc1';
    $pane->panel = 'middle';
    $pane->type = 'entity_form_field';
    $pane->subtype = 'node:field_suitable_ages';
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
    $pane->position = 12;
    $pane->locks = array();
    $pane->uuid = 'c54fcd1c-7269-4e3b-bec6-57efb301acc1';
    $display->content['new-c54fcd1c-7269-4e3b-bec6-57efb301acc1'] = $pane;
    $display->panels['middle'][12] = 'new-c54fcd1c-7269-4e3b-bec6-57efb301acc1';
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
    $pane->position = 13;
    $pane->locks = array();
    $pane->uuid = '26ee7d40-0b94-42bc-a448-0cb00e22a8e8';
    $display->content['new-26ee7d40-0b94-42bc-a448-0cb00e22a8e8'] = $pane;
    $display->panels['middle'][13] = 'new-26ee7d40-0b94-42bc-a448-0cb00e22a8e8';
    $pane = new stdClass();
    $pane->pid = 'new-64daca9c-4ed9-4a9c-b5e8-5e6ec84dd46e';
    $pane->panel = 'middle';
    $pane->type = 'entity_form_field';
    $pane->subtype = 'node:field_state';
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
    $pane->position = 14;
    $pane->locks = array();
    $pane->uuid = '64daca9c-4ed9-4a9c-b5e8-5e6ec84dd46e';
    $display->content['new-64daca9c-4ed9-4a9c-b5e8-5e6ec84dd46e'] = $pane;
    $display->panels['middle'][14] = 'new-64daca9c-4ed9-4a9c-b5e8-5e6ec84dd46e';
    $pane = new stdClass();
    $pane->pid = 'new-1f74b4eb-0d26-45af-a6db-458ee51963cf';
    $pane->panel = 'middle';
    $pane->type = 'node_form_publishing';
    $pane->subtype = 'node_form_publishing';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 3,
              1 => 6,
            ),
          ),
          'context' => 'logged-in-user',
          'not' => FALSE,
        ),
      ),
    );
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
    $pane->position = 15;
    $pane->locks = array();
    $pane->uuid = '1f74b4eb-0d26-45af-a6db-458ee51963cf';
    $display->content['new-1f74b4eb-0d26-45af-a6db-458ee51963cf'] = $pane;
    $display->panels['middle'][15] = 'new-1f74b4eb-0d26-45af-a6db-458ee51963cf';
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
    $pane->position = 16;
    $pane->locks = array();
    $pane->uuid = '6eb49cb1-7bdc-4459-88a4-71332af82b06';
    $display->content['new-6eb49cb1-7bdc-4459-88a4-71332af82b06'] = $pane;
    $display->panels['middle'][16] = 'new-6eb49cb1-7bdc-4459-88a4-71332af82b06';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_edit__panel_context_3ca18e4a-b5b8-44a0-931a-378af431cbaf'] = $handler;

  return $export;
}
