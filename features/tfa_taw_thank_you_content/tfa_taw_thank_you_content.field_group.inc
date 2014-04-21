<?php
/**
 * @file
 * tfa_taw_thank_you_content.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function tfa_taw_thank_you_content_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_thank_you_step_1b|node|thank_you|form';
  $field_group->group_name = 'group_thank_you_step_1b';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'thank_you';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Step 1b',
    'weight' => '4',
    'children' => array(
      0 => 'field_thank_you_e_mail',
      1 => 'field_thank_you_zip',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Step 1b',
      'instance_settings' => array(
        'required_fields' => 0,
        'id' => '',
        'classes' => 'group-thank-you-step-1b field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_thank_you_step_1b|node|thank_you|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_thank_you_step_1|node|thank_you|form';
  $field_group->group_name = 'group_thank_you_step_1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'thank_you';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Step 1a',
    'weight' => '3',
    'children' => array(
      0 => 'field_thank_you_first_name',
      1 => 'field_thank_you_last_name',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Step 1a',
      'instance_settings' => array(
        'required_fields' => 0,
        'id' => '',
        'classes' => 'group-thank-you-step-1a field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_thank_you_step_1|node|thank_you|form'] = $field_group;

  return $export;
}
