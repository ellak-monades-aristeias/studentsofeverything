<?php
/**
 * @file
 * soe_panels__page_handler_user_edit__student.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function soe_panels__page_handler_user_edit__student_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'user_edit__panel_context_69064857-f479-4290-a1d4-623ab9f1e562';
  $handler->task = 'user_edit';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'student',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
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
  $display->title = 'Edit User (Student) %user:name';
  $display->uuid = 'e6b3e92d-ed13-4169-9e2e-43c03a213548';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-988f68ce-38fd-4166-aa77-2bc98944ec7d';
    $pane->panel = 'middle';
    $pane->type = 'form';
    $pane->subtype = 'form';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_user_edit_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '988f68ce-38fd-4166-aa77-2bc98944ec7d';
    $display->content['new-988f68ce-38fd-4166-aa77-2bc98944ec7d'] = $pane;
    $display->panels['middle'][0] = 'new-988f68ce-38fd-4166-aa77-2bc98944ec7d';
    $pane = new stdClass();
    $pane->pid = 'new-196a006e-83dc-488d-bc69-60c85b479e42';
    $pane->panel = 'middle';
    $pane->type = 'entity_form_field';
    $pane->subtype = 'user:field_birthday';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => '',
      'formatter' => '',
      'context' => 'argument_user_edit_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '196a006e-83dc-488d-bc69-60c85b479e42';
    $display->content['new-196a006e-83dc-488d-bc69-60c85b479e42'] = $pane;
    $display->panels['middle'][1] = 'new-196a006e-83dc-488d-bc69-60c85b479e42';
    $pane = new stdClass();
    $pane->pid = 'new-e55d15a0-e9df-488f-bfe6-0549fd9e8abc';
    $pane->panel = 'middle';
    $pane->type = 'entity_form_field';
    $pane->subtype = 'user:field_parents_approval';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => '',
      'formatter' => '',
      'context' => 'argument_user_edit_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'e55d15a0-e9df-488f-bfe6-0549fd9e8abc';
    $display->content['new-e55d15a0-e9df-488f-bfe6-0549fd9e8abc'] = $pane;
    $display->panels['middle'][2] = 'new-e55d15a0-e9df-488f-bfe6-0549fd9e8abc';
    $pane = new stdClass();
    $pane->pid = 'new-7d2a01ca-55ff-43c3-ba4c-7b398c07b35e';
    $pane->panel = 'middle';
    $pane->type = 'token';
    $pane->subtype = 'user:mail';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'sanitize' => 1,
      'context' => 'argument_user_edit_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '7d2a01ca-55ff-43c3-ba4c-7b398c07b35e';
    $display->content['new-7d2a01ca-55ff-43c3-ba4c-7b398c07b35e'] = $pane;
    $display->panels['middle'][3] = 'new-7d2a01ca-55ff-43c3-ba4c-7b398c07b35e';
    $pane = new stdClass();
    $pane->pid = 'new-6109b1f3-75cf-4e27-8c91-105614ba9e1c';
    $pane->panel = 'middle';
    $pane->type = 'token';
    $pane->subtype = 'user:field-points-games';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'sanitize' => 1,
      'context' => 'argument_user_edit_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '6109b1f3-75cf-4e27-8c91-105614ba9e1c';
    $display->content['new-6109b1f3-75cf-4e27-8c91-105614ba9e1c'] = $pane;
    $display->panels['middle'][4] = 'new-6109b1f3-75cf-4e27-8c91-105614ba9e1c';
    $pane = new stdClass();
    $pane->pid = 'new-1b37fc28-ceb7-4153-9b4b-ef31d38f8f2a';
    $pane->panel = 'middle';
    $pane->type = 'token';
    $pane->subtype = 'user:field-points-stories';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'sanitize' => 1,
      'context' => 'argument_user_edit_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '1b37fc28-ceb7-4153-9b4b-ef31d38f8f2a';
    $display->content['new-1b37fc28-ceb7-4153-9b4b-ef31d38f8f2a'] = $pane;
    $display->panels['middle'][5] = 'new-1b37fc28-ceb7-4153-9b4b-ef31d38f8f2a';
    $pane = new stdClass();
    $pane->pid = 'new-3021f4ef-2fa3-4005-9488-76ad6e2a6875';
    $pane->panel = 'middle';
    $pane->type = 'token';
    $pane->subtype = 'user:field-point-makes';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'sanitize' => 1,
      'context' => 'argument_user_edit_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = '3021f4ef-2fa3-4005-9488-76ad6e2a6875';
    $display->content['new-3021f4ef-2fa3-4005-9488-76ad6e2a6875'] = $pane;
    $display->panels['middle'][6] = 'new-3021f4ef-2fa3-4005-9488-76ad6e2a6875';
    $pane = new stdClass();
    $pane->pid = 'new-80f77379-ffa8-4127-a968-baffae71bcdf';
    $pane->panel = 'middle';
    $pane->type = 'user_picture';
    $pane->subtype = 'user_picture';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_user_edit_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 7;
    $pane->locks = array();
    $pane->uuid = '80f77379-ffa8-4127-a968-baffae71bcdf';
    $display->content['new-80f77379-ffa8-4127-a968-baffae71bcdf'] = $pane;
    $display->panels['middle'][7] = 'new-80f77379-ffa8-4127-a968-baffae71bcdf';
    $pane = new stdClass();
    $pane->pid = 'new-3f56b411-19db-4d65-a2df-bccb25038024';
    $pane->panel = 'middle';
    $pane->type = 'user_links';
    $pane->subtype = 'user_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'build_mode' => 'full',
      'context' => 'argument_user_edit_1',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 8;
    $pane->locks = array();
    $pane->uuid = '3f56b411-19db-4d65-a2df-bccb25038024';
    $display->content['new-3f56b411-19db-4d65-a2df-bccb25038024'] = $pane;
    $display->panels['middle'][8] = 'new-3f56b411-19db-4d65-a2df-bccb25038024';
    $pane = new stdClass();
    $pane->pid = 'new-5ba76958-0758-43f6-b772-4603401b7e68';
    $pane->panel = 'middle';
    $pane->type = 'user_signature';
    $pane->subtype = 'user_signature';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_user_edit_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 9;
    $pane->locks = array();
    $pane->uuid = '5ba76958-0758-43f6-b772-4603401b7e68';
    $display->content['new-5ba76958-0758-43f6-b772-4603401b7e68'] = $pane;
    $display->panels['middle'][9] = 'new-5ba76958-0758-43f6-b772-4603401b7e68';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['user_edit__panel_context_69064857-f479-4290-a1d4-623ab9f1e562'] = $handler;

  return $export;
}
