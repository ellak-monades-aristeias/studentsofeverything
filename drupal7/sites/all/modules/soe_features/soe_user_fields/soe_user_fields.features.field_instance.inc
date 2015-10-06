<?php
/**
 * @file
 * soe_user_fields.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function soe_user_fields_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'user-user-field_birthday'
  $field_instances['user-user-field_birthday'] = array(
    'bundle' => 'user',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'short',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => 0,
        ),
        'type' => 'date_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_birthday',
    'label' => 'birthday',
    'required' => 0,
    'settings' => array(
      'default_value' => 'now',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_additional_register_form' => array(
        4 => 4,
        5 => 0,
        100 => 0,
      ),
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'custom',
        'input_format_custom' => 'm-d-Y',
        'label_position' => 'above',
        'no_fieldset' => 0,
        'text_parts' => array(),
        'year_range' => '1990:+10',
      ),
      'type' => 'date_select',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'user-user-field_family_name'
  $field_instances['user-user-field_family_name'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 6,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_family_name',
    'label' => 'Family Name',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_additional_register_form' => array(
        4 => 0,
        5 => 5,
        100 => 0,
      ),
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 13,
    ),
  );

  // Exported field_instance: 'user-user-field_first_name'
  $field_instances['user-user-field_first_name'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_first_name',
    'label' => 'First Name',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_additional_register_form' => array(
        4 => 0,
        5 => 5,
        100 => 0,
      ),
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 12,
    ),
  );

  // Exported field_instance: 'user-user-field_organisation'
  $field_instances['user-user-field_organisation'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 7,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_organisation',
    'label' => 'Organisation',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_additional_register_form' => array(
        4 => 0,
        5 => 5,
        100 => 0,
      ),
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 14,
    ),
  );

  // Exported field_instance: 'user-user-field_parents_approval'
  $field_instances['user-user-field_parents_approval'] = array(
    'bundle' => 'user',
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
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_parents_approval',
    'label' => 'parents approval',
    'required' => 1,
    'settings' => array(
      'user_additional_register_form' => array(
        4 => 4,
        5 => 0,
        100 => 0,
      ),
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'user-user-field_point_makes'
  $field_instances['user-user-field_point_makes'] = array(
    'bundle' => 'user',
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
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => ' ',
        ),
        'type' => 'number_integer',
        'weight' => 10,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_point_makes',
    'label' => 'point_makes',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_additional_register_form' => array(
        4 => 4,
        5 => 0,
        100 => 0,
      ),
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 17,
    ),
  );

  // Exported field_instance: 'user-user-field_points_games'
  $field_instances['user-user-field_points_games'] = array(
    'bundle' => 'user',
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
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => ' ',
        ),
        'type' => 'number_integer',
        'weight' => 9,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_points_games',
    'label' => 'points_games',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_additional_register_form' => array(
        4 => 4,
        5 => 0,
        100 => 0,
      ),
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 16,
    ),
  );

  // Exported field_instance: 'user-user-field_points_stories'
  $field_instances['user-user-field_points_stories'] = array(
    'bundle' => 'user',
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
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => ' ',
        ),
        'type' => 'number_integer',
        'weight' => 11,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_points_stories',
    'label' => 'points_stories',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_additional_register_form' => array(
        4 => 4,
        5 => 0,
        100 => 0,
      ),
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 18,
    ),
  );

  // Exported field_instance: 'user-user-field_role'
  $field_instances['user-user-field_role'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_role',
    'label' => 'Role',
    'required' => 1,
    'settings' => array(
      'user_additional_register_form' => array(
        4 => 0,
        5 => 5,
        100 => 0,
      ),
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 11,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Family Name');
  t('First Name');
  t('Organisation');
  t('Role');
  t('birthday');
  t('parents approval');
  t('point_makes');
  t('points_games');
  t('points_stories');

  return $field_instances;
}
