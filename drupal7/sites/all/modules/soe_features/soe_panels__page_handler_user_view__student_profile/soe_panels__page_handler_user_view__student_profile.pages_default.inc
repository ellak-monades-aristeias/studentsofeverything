<?php
/**
 * @file
 * soe_panels__page_handler_user_view__student_profile.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function soe_panels__page_handler_user_view__student_profile_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'user_view__panel_context_dc2b8516-2950-4217-8f93-af45b246a7d1';
  $handler->task = 'user_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Student Profile',
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
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 4,
            ),
          ),
          'context' => 'argument_entity_id:user_1',
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

<p>&nbsp;</p>

<?php
$ar1 = array(%user:field_points_games, %user:field_points_stories, %user:field_point_makes);
$ar2 = array("games","stories","makes");
array_multisort($ar1, SORT_DESC, $ar2, SORT_DESC);

//var_dump($ar1);
//var_dump($ar2);

//echo $ar2[0];

$games = "games";
$stories = "stories";
$makes = "makes";

if (strcmp($ar2[0], $games) == 0) {
  echo "<p>I am good at games</p>";
}

if (strcmp($ar2[0], $stories) == 0) {
  echo "<p>I am good at stories</p>";
}

if (strcmp($ar2[0], $makes) == 0) {
  echo "<p>I am good at makes</p>";
}

if (strcmp($ar2[2], $games) == 0) {
  echo "<p>Get better at games! <br>Try these <a href=\\"/themes/games\\">game projects</a></p>";
}

if (strcmp($ar2[2], $stories) == 0) {
  echo "<p>Get better at stories!<br> Try these <a href=\\"/themes/stories\\">story projects</a></p>";
}

if (strcmp($ar2[2], $makes) == 0) {
  echo "<p>Get better at makes! <br>Try these <a href=\\"/themes/makes\\">make projects</a></p>";
}



?>',
      'format' => 'php_code',
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
    $pane->pid = 'new-c1ceda54-f8bb-4483-8492-d0a83f2b2a6f';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'projects-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_entity_id:user_1',
      ),
      'override_title' => 1,
      'override_title_text' => 'To Do Projects',
      'override_title_heading' => 'h2',
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
      'css_class' => 'col-sm-9',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'c1ceda54-f8bb-4483-8492-d0a83f2b2a6f';
    $display->content['new-c1ceda54-f8bb-4483-8492-d0a83f2b2a6f'] = $pane;
    $display->panels['middle'][1] = 'new-c1ceda54-f8bb-4483-8492-d0a83f2b2a6f';
    $pane = new stdClass();
    $pane->pid = 'new-ddb1c16c-90e5-4cf0-8e1b-0f6d5560d6d9';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'myprojects-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Done Projects',
      'override_title_heading' => 'h2',
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
      'css_class' => 'col-sm-9 col-sm-offset-2',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'ddb1c16c-90e5-4cf0-8e1b-0f6d5560d6d9';
    $display->content['new-ddb1c16c-90e5-4cf0-8e1b-0f6d5560d6d9'] = $pane;
    $display->panels['middle'][2] = 'new-ddb1c16c-90e5-4cf0-8e1b-0f6d5560d6d9';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['user_view__panel_context_dc2b8516-2950-4217-8f93-af45b246a7d1'] = $handler;

  return $export;
}
