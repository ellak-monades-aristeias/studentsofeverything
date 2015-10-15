<?php
/**
 * @file
 * soe_users_profile2_student_profile.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function soe_users_profile2_student_profile_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'profile2-student-field_birthday'
  $field_instances['profile2-student-field_birthday'] = array(
    'bundle' => 'student',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
        ),
        'type' => 'date_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_birthday',
    'label' => 'Birthday',
    'required' => 1,
    'settings' => array(
      'default_value' => 'strtotime',
      'default_value2' => 'same',
      'default_value_code' => '-12 years',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 30,
        'input_format' => 'custom',
        'input_format_custom' => 'm-d-Y',
        'label_position' => 'above',
        'no_fieldset' => 0,
        'text_parts' => array(),
        'year_range' => '-99:+5',
      ),
      'type' => 'date_select',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'profile2-student-field_parents_approval'
  $field_instances['profile2-student-field_parents_approval'] = array(
    'bundle' => 'student',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_parents_approval',
    'label' => 'Parents approval',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 4,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Birthday');
  t('Parents approval');

  return $field_instances;
}
