<?php
/**
 * @file
 * soe_ct_myproject.features.inc
 */

/**
 * Implements hook_node_info().
 */
function soe_ct_myproject_node_info() {
  $items = array(
    'myproject' => array(
      'name' => t('MyProject'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
