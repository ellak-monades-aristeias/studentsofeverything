<?php
/**
 * @file
 * soe_panels_page_submitted_projects.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function soe_panels_page_submitted_projects_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'submitted_projects';
  $page->task = 'page';
  $page->admin_title = 'Submitted projects';
  $page->admin_description = '';
  $page->path = 'submitted';
  $page->access = array(
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
    'logic' => 'and',
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_submitted_projects__panel';
  $handler->task = 'page';
  $handler->subtask = 'submitted_projects';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
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
  $display->title = 'Submitted Projects';
  $display->uuid = '9dd1a992-e3dc-4982-b2eb-f918cdbef5e0';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-72563a4c-de3e-4e5a-995f-6cfbf36daa3c';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'projects-panel_pane_5';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
    $pane->uuid = '72563a4c-de3e-4e5a-995f-6cfbf36daa3c';
    $display->content['new-72563a4c-de3e-4e5a-995f-6cfbf36daa3c'] = $pane;
    $display->panels['middle'][0] = 'new-72563a4c-de3e-4e5a-995f-6cfbf36daa3c';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-72563a4c-de3e-4e5a-995f-6cfbf36daa3c';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['submitted_projects'] = $page;

  return $pages;

}
