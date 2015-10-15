<?php
/**
 * @file
 * soe_panels__page_handler_user_view__editor_profile.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function soe_panels__page_handler_user_view__editor_profile_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'user_view__editor-profile';
  $handler->task = 'user_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 3;
  $handler->conf = array(
    'title' => 'Editor Profile',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'container',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'editor-profile',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 6,
            ),
          ),
          'context' => 'argument_entity_id:user_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'compare_users',
          'settings' => array(
            'equality' => '1',
          ),
          'context' => array(
            0 => 'argument_entity_id:user_1',
            1 => 'logged-in-user',
          ),
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
  $display->title = '';
  $display->uuid = 'e51863ad-e8a9-4207-9fb8-f3c3f455108a';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-7ead3bc9-eaa1-4038-89f4-28681119224e';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'user widget',
      'title' => '',
      'body' => '<p><span style="background-color:rgb(255, 255, 191); color:rgb(0, 0, 0); font-family:open sans,segoe ui,helvetica,sans-serif; font-size:12px">%user:picture</span></p>

<p>%user:name</p>

<p><a href="/user/%user:uid/edit">Edit Profile</a></p>
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
      'css_class' => 'pull-left col-sm-2',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '7ead3bc9-eaa1-4038-89f4-28681119224e';
    $display->content['new-7ead3bc9-eaa1-4038-89f4-28681119224e'] = $pane;
    $display->panels['middle'][0] = 'new-7ead3bc9-eaa1-4038-89f4-28681119224e';
    $pane = new stdClass();
    $pane->pid = 'new-f3f6351f-e8d8-4323-b8f9-bb425297f27e';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
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
          'context' => 'argument_entity_id:user_1',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<p><a href="/submitted">Check Submitted Projects</a></p>
',
      'format' => 'full_html',
      'substitute' => 0,
      'name' => 'check_submitted_projects',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'f3f6351f-e8d8-4323-b8f9-bb425297f27e';
    $display->content['new-f3f6351f-e8d8-4323-b8f9-bb425297f27e'] = $pane;
    $display->panels['middle'][1] = 'new-f3f6351f-e8d8-4323-b8f9-bb425297f27e';
    $pane = new stdClass();
    $pane->pid = 'new-aa953e72-0bbe-47dc-8f1c-9b169bdd1c42';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'avatars_new_users-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'aa953e72-0bbe-47dc-8f1c-9b169bdd1c42';
    $display->content['new-aa953e72-0bbe-47dc-8f1c-9b169bdd1c42'] = $pane;
    $display->panels['middle'][2] = 'new-aa953e72-0bbe-47dc-8f1c-9b169bdd1c42';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['user_view__editor-profile'] = $handler;

  return $export;
}
