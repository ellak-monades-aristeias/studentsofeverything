<?php
/**
 * @file
 * soe_panels_page_all_projects.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function soe_panels_page_all_projects_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'all_projects';
  $page->task = 'page';
  $page->admin_title = 'all projects';
  $page->admin_description = '';
  $page->path = 'projects';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Projects',
    'name' => 'main-menu',
    'weight' => '1',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_all_projects__panel';
  $handler->task = 'page';
  $handler->subtask = 'all_projects';
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
  $display->title = '';
  $display->uuid = '84a9d8c9-77ce-42af-8682-118a21bb92ec';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-d6c00c46-9c31-43fc-9b61-6df6a860f445';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'projects-panel_pane_3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'd6c00c46-9c31-43fc-9b61-6df6a860f445';
    $display->content['new-d6c00c46-9c31-43fc-9b61-6df6a860f445'] = $pane;
    $display->panels['middle'][0] = 'new-d6c00c46-9c31-43fc-9b61-6df6a860f445';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['all_projects'] = $page;

  return $pages;

}
