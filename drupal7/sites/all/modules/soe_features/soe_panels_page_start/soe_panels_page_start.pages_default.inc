<?php
/**
 * @file
 * soe_panels_page_start.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function soe_panels_page_start_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'start';
  $page->task = 'page';
  $page->admin_title = 'start';
  $page->admin_description = 'start page';
  $page->path = 'start';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_start__panel';
  $handler->task = 'page';
  $handler->subtask = 'start';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'container-fluid',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
  );
  $display = new panels_display();
  $display->layout = 'bootstrap_threecol_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'right' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'a9fbe6a4-af81-469f-983a-4065a3c5887b';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-1c83ba24-a52f-45aa-a85d-80f45bbc1189';
    $pane->panel = 'top';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'About',
      'body' => '<p>Μια εκπαιδευτική πλατφόρμα για αυτούς που θέλουν να μάθουν τα πάντα.</p>
',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'text-center',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '1c83ba24-a52f-45aa-a85d-80f45bbc1189';
    $display->content['new-1c83ba24-a52f-45aa-a85d-80f45bbc1189'] = $pane;
    $display->panels['top'][0] = 'new-1c83ba24-a52f-45aa-a85d-80f45bbc1189';
    $pane = new stdClass();
    $pane->pid = 'new-c4a00433-e31b-489a-b1f4-bee4321fcc44';
    $pane->panel = 'top';
    $pane->type = 'block';
    $pane->subtype = 'user-login';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'c4a00433-e31b-489a-b1f4-bee4321fcc44';
    $display->content['new-c4a00433-e31b-489a-b1f4-bee4321fcc44'] = $pane;
    $display->panels['top'][1] = 'new-c4a00433-e31b-489a-b1f4-bee4321fcc44';
    $pane = new stdClass();
    $pane->pid = 'new-12019822-d7a2-4568-a6f2-b044b6b1744b';
    $pane->panel = 'top';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 2,
            ),
          ),
          'context' => 'logged-in-user',
          'not' => TRUE,
        ),
      ),
    );
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'Γίνε κι εσύ μέλος στην εκπαιδευτική πλατφόρμα μας!',
      'body' => '<p><a class="btn btn-warning" href="/student/register">Είμαι παιδί</a>&nbsp;<a class="btn btn-warning" href="/teacher/register">Είμαι ενήλικας</a></p>
',
      'format' => 'full_html',
      'substitute' => TRUE,
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
    $pane->uuid = '12019822-d7a2-4568-a6f2-b044b6b1744b';
    $display->content['new-12019822-d7a2-4568-a6f2-b044b6b1744b'] = $pane;
    $display->panels['top'][2] = 'new-12019822-d7a2-4568-a6f2-b044b6b1744b';
    $pane = new stdClass();
    $pane->pid = 'new-6b769989-94b5-40cd-bfec-3cf0501eb67d';
    $pane->panel = 'top';
    $pane->type = 'views_panes';
    $pane->subtype = 'projects-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '6b769989-94b5-40cd-bfec-3cf0501eb67d';
    $display->content['new-6b769989-94b5-40cd-bfec-3cf0501eb67d'] = $pane;
    $display->panels['top'][3] = 'new-6b769989-94b5-40cd-bfec-3cf0501eb67d';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-1c83ba24-a52f-45aa-a85d-80f45bbc1189';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['start'] = $page;

  return $pages;

}
