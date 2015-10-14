<?php
/**
 * @file
 * soe_panels__page_handler_node_view_project.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function soe_panels__page_handler_node_view_project_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__panel_context_d3112898-5461-4903-8725-bf0c254fac75';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Project',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'fluid-container',
    'css_id' => '',
    'css' => '',
    'contexts' => array(
      0 => array(
        'identifier' => 'logged_in_user',
        'keyword' => 'logged_in_user',
        'name' => 'user',
        'type' => 'current',
        'uid' => '',
        'id' => 1,
      ),
    ),
    'relationships' => array(
      0 => array(
        'identifier' => ' Author from Node (on node.node_author)',
        'keyword' => 'user',
        'name' => 'entity_from_schema:uid-node-user',
        'context' => 'argument_entity_id:node_1',
        'id' => 1,
      ),
    ),
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
      'class' => 'row',
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
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
    $pane->uuid = '38fdf83e-7ae8-4a2e-abba-158cd2825d5e';
    $display->content['new-38fdf83e-7ae8-4a2e-abba-158cd2825d5e'] = $pane;
    $display->panels['middle'][0] = 'new-38fdf83e-7ae8-4a2e-abba-158cd2825d5e';
    $pane = new stdClass();
    $pane->pid = 'new-4a9b2f07-3140-4bf4-bfc7-53aae1ef43a3';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_video_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'video_embed_field',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'video_style' => 'normal',
      ),
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '4a9b2f07-3140-4bf4-bfc7-53aae1ef43a3';
    $display->content['new-4a9b2f07-3140-4bf4-bfc7-53aae1ef43a3'] = $pane;
    $display->panels['middle'][1] = 'new-4a9b2f07-3140-4bf4-bfc7-53aae1ef43a3';
    $pane = new stdClass();
    $pane->pid = 'new-3f3c9a00-6512-4803-95dc-b6c84c1a3e14';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_main_image';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'image',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'image_style' => 'large',
        'image_link' => '',
      ),
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '3f3c9a00-6512-4803-95dc-b6c84c1a3e14';
    $display->content['new-3f3c9a00-6512-4803-95dc-b6c84c1a3e14'] = $pane;
    $display->panels['middle'][2] = 'new-3f3c9a00-6512-4803-95dc-b6c84c1a3e14';
    $pane = new stdClass();
    $pane->pid = 'new-d7ba4114-7e0d-4e05-aefb-50ec09fb4492';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
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
      'css_class' => 'row',
    );
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'd7ba4114-7e0d-4e05-aefb-50ec09fb4492';
    $display->content['new-d7ba4114-7e0d-4e05-aefb-50ec09fb4492'] = $pane;
    $display->panels['middle'][3] = 'new-d7ba4114-7e0d-4e05-aefb-50ec09fb4492';
    $pane = new stdClass();
    $pane->pid = 'new-cac83d38-f0dd-4154-af16-531c7739037c';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_other_images';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'image',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'file_view_mode' => 'full',
        'image_style' => 'large',
        'image_link' => '',
      ),
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
      'css_class' => 'row',
    );
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'cac83d38-f0dd-4154-af16-531c7739037c';
    $display->content['new-cac83d38-f0dd-4154-af16-531c7739037c'] = $pane;
    $display->panels['middle'][4] = 'new-cac83d38-f0dd-4154-af16-531c7739037c';
    $pane = new stdClass();
    $pane->pid = 'new-d33c3645-1c0b-4965-884b-1254e6e8f538';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_attachments';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'file_download_link',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'image_style' => '',
        'text' => 'Download [file:name]',
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
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
    $pane->uuid = 'd33c3645-1c0b-4965-884b-1254e6e8f538';
    $display->content['new-d33c3645-1c0b-4965-884b-1254e6e8f538'] = $pane;
    $display->panels['middle'][5] = 'new-d33c3645-1c0b-4965-884b-1254e6e8f538';
    $pane = new stdClass();
    $pane->pid = 'new-ada95921-0f9a-4e11-a7f0-de075b0438b8';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_audio_files';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'file_audio',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'controls' => 1,
        'autoplay' => 0,
        'loop' => 0,
        'preload' => '',
        'multiple_file_behavior' => 'tags',
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h3',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'row',
    );
    $pane->extras = array();
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = 'ada95921-0f9a-4e11-a7f0-de075b0438b8';
    $display->content['new-ada95921-0f9a-4e11-a7f0-de075b0438b8'] = $pane;
    $display->panels['middle'][6] = 'new-ada95921-0f9a-4e11-a7f0-de075b0438b8';
    $pane = new stdClass();
    $pane->pid = 'new-9b08380e-617c-46a4-9cbe-3caea55535ce';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_instructions';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
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
      'css_class' => 'row',
    );
    $pane->extras = array();
    $pane->position = 7;
    $pane->locks = array();
    $pane->uuid = '9b08380e-617c-46a4-9cbe-3caea55535ce';
    $display->content['new-9b08380e-617c-46a4-9cbe-3caea55535ce'] = $pane;
    $display->panels['middle'][7] = 'new-9b08380e-617c-46a4-9cbe-3caea55535ce';
    $pane = new stdClass();
    $pane->pid = 'new-a22384e5-103c-4d27-9e97-ac76c3668e90';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_material_needed';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
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
      'css_class' => 'row',
    );
    $pane->extras = array();
    $pane->position = 8;
    $pane->locks = array();
    $pane->uuid = 'a22384e5-103c-4d27-9e97-ac76c3668e90';
    $display->content['new-a22384e5-103c-4d27-9e97-ac76c3668e90'] = $pane;
    $display->panels['middle'][8] = 'new-a22384e5-103c-4d27-9e97-ac76c3668e90';
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
      'css_class' => 'row',
    );
    $pane->extras = array();
    $pane->position = 9;
    $pane->locks = array();
    $pane->uuid = 'abb4291f-bb39-4f2c-9ed3-bb340d4647de';
    $display->content['new-abb4291f-bb39-4f2c-9ed3-bb340d4647de'] = $pane;
    $display->panels['middle'][9] = 'new-abb4291f-bb39-4f2c-9ed3-bb340d4647de';
    $pane = new stdClass();
    $pane->pid = 'new-d715d734-3f95-412c-8fbf-845b0e3af777';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_suitable_ages';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'i18n_list_default',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
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
      'css_class' => 'row',
    );
    $pane->extras = array();
    $pane->position = 10;
    $pane->locks = array();
    $pane->uuid = 'd715d734-3f95-412c-8fbf-845b0e3af777';
    $display->content['new-d715d734-3f95-412c-8fbf-845b0e3af777'] = $pane;
    $display->panels['middle'][10] = 'new-d715d734-3f95-412c-8fbf-845b0e3af777';
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
      'css_class' => 'row',
    );
    $pane->extras = array();
    $pane->position = 11;
    $pane->locks = array();
    $pane->uuid = '981a0900-9865-4d3f-a8fe-2a56c604098e';
    $display->content['new-981a0900-9865-4d3f-a8fe-2a56c604098e'] = $pane;
    $display->panels['middle'][11] = 'new-981a0900-9865-4d3f-a8fe-2a56c604098e';
    $pane = new stdClass();
    $pane->pid = 'new-8dee4984-7ff1-4524-9c4f-c2caa596dd0d';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_parental_presence_necessar';
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
      'css_class' => 'row',
    );
    $pane->extras = array();
    $pane->position = 12;
    $pane->locks = array();
    $pane->uuid = '8dee4984-7ff1-4524-9c4f-c2caa596dd0d';
    $display->content['new-8dee4984-7ff1-4524-9c4f-c2caa596dd0d'] = $pane;
    $display->panels['middle'][12] = 'new-8dee4984-7ff1-4524-9c4f-c2caa596dd0d';
    $pane = new stdClass();
    $pane->pid = 'new-6f8593b1-7e98-4b95-8113-d95daa341853';
    $pane->panel = 'middle';
    $pane->type = 'token';
    $pane->subtype = 'node:flag-to-do-project-link';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'sanitize' => 1,
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
      'css_class' => 'row btn btn-block btn-warning',
    );
    $pane->extras = array();
    $pane->position = 13;
    $pane->locks = array();
    $pane->uuid = '6f8593b1-7e98-4b95-8113-d95daa341853';
    $display->content['new-6f8593b1-7e98-4b95-8113-d95daa341853'] = $pane;
    $display->panels['middle'][13] = 'new-6f8593b1-7e98-4b95-8113-d95daa341853';
    $pane = new stdClass();
    $pane->pid = 'new-df6cfab3-71e9-443c-a6c6-c69459faa227';
    $pane->panel = 'middle';
    $pane->type = 'token';
    $pane->subtype = 'node:flag-like-count';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'sanitize' => 1,
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => 'Like Flag Count',
      'override_title_heading' => 'h4',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 14;
    $pane->locks = array();
    $pane->uuid = 'df6cfab3-71e9-443c-a6c6-c69459faa227';
    $display->content['new-df6cfab3-71e9-443c-a6c6-c69459faa227'] = $pane;
    $display->panels['middle'][14] = 'new-df6cfab3-71e9-443c-a6c6-c69459faa227';
    $pane = new stdClass();
    $pane->pid = 'new-4d3b67ad-e83f-44c7-abc5-052b3eec2aff';
    $pane->panel = 'middle';
    $pane->type = 'token';
    $pane->subtype = 'node:flag-like-link';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'sanitize' => 1,
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
      'css_class' => 'row',
    );
    $pane->extras = array();
    $pane->position = 15;
    $pane->locks = array();
    $pane->uuid = '4d3b67ad-e83f-44c7-abc5-052b3eec2aff';
    $display->content['new-4d3b67ad-e83f-44c7-abc5-052b3eec2aff'] = $pane;
    $display->panels['middle'][15] = 'new-4d3b67ad-e83f-44c7-abc5-052b3eec2aff';
    $pane = new stdClass();
    $pane->pid = 'new-7b0d6ab0-28c9-4401-88a9-55b6852f5c49';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'author_mini_widget-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_entity_id:node_1',
      ),
      'arguments' => array(
        'uid' => '%user:uid',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'row',
    );
    $pane->extras = array();
    $pane->position = 16;
    $pane->locks = array();
    $pane->uuid = '7b0d6ab0-28c9-4401-88a9-55b6852f5c49';
    $display->content['new-7b0d6ab0-28c9-4401-88a9-55b6852f5c49'] = $pane;
    $display->panels['middle'][16] = 'new-7b0d6ab0-28c9-4401-88a9-55b6852f5c49';
    $pane = new stdClass();
    $pane->pid = 'new-5dc569ec-79e0-4395-ae41-30adaecc47a3';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'flag_is_flagged:node',
          'settings' => array(
            'flag_name' => 'to_do_project',
            'flag_user' => 'user',
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<p><a class="btn btn-success" href="/node/add/myproject?field_project_reference=%node:nid&amp;edit[title]=Made%20it!!%20%node:title">Τα κατάφερα!! Τελείωσα το project!!</a></p>
',
      'format' => 'full_html',
      'substitute' => 1,
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
    $pane->position = 17;
    $pane->locks = array();
    $pane->uuid = '5dc569ec-79e0-4395-ae41-30adaecc47a3';
    $display->content['new-5dc569ec-79e0-4395-ae41-30adaecc47a3'] = $pane;
    $display->panels['middle'][17] = 'new-5dc569ec-79e0-4395-ae41-30adaecc47a3';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-4a9b2f07-3140-4bf4-bfc7-53aae1ef43a3';
  $handler->conf['display'] = $display;
  $export['node_view__panel_context_d3112898-5461-4903-8725-bf0c254fac75'] = $handler;

  return $export;
}
