<?php
/**
 * @file
 * dbr_profile.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function dbr_profile_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_additional|user|user|form';
  $field_group->group_name = 'group_additional';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Informações adicionais',
    'weight' => '4',
    'children' => array(
      0 => 'field_fullname',
      1 => 'field_tags',
      2 => 'field_website',
      3 => 'field_city',
      4 => 'field_gender',
      5 => 'field_state',
      6 => 'field_availability',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Informações adicionais',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_additional|user|user|form'] = $field_group;

  return $export;
}
