<?php
/**
 * @file
 * tfa_taw_thank_you_content.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function tfa_taw_thank_you_content_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_thank_you_custom_image'
  $field_bases['field_thank_you_custom_image'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_thank_you_custom_image',
    'foreign keys' => array(
      'fid' => array(
        'columns' => array(
          'fid' => 'fid',
        ),
        'table' => 'file_managed',
      ),
    ),
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => 0,
    'module' => 'image',
    'settings' => array(
      'default_image' => 0,
      'uri_scheme' => 'public',
    ),
    'translatable' => 0,
    'type' => 'image',
  );

  // Exported field_base: 'field_thank_you_e_mail'
  $field_bases['field_thank_you_e_mail'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_thank_you_e_mail',
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'email',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'email',
  );

  // Exported field_base: 'field_thank_you_first_name'
  $field_bases['field_thank_you_first_name'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_thank_you_first_name',
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 60,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_thank_you_intro'
  $field_bases['field_thank_you_intro'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_thank_you_intro',
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'markup',
    'settings' => array(
      'markup' => array(
        'format' => 'full_html',
        'value' => '<p>Your favorite teacher deserves to know how great he or she is.</p>

<p>Write a thank you note to show your appreciation below!</p>
',
      ),
    ),
    'translatable' => 0,
    'type' => 'markup',
  );

  // Exported field_base: 'field_thank_you_last_name'
  $field_bases['field_thank_you_last_name'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_thank_you_last_name',
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 60,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_thank_you_note'
  $field_bases['field_thank_you_note'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_thank_you_note',
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'text_long',
  );

  // Exported field_base: 'field_thank_you_select_image'
  $field_bases['field_thank_you_select_image'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_thank_you_select_image',
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        1 => 1,
        2 => 2,
        3 => 3,
        4 => 'Custom',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_thank_you_step_1'
  $field_bases['field_thank_you_step_1'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_thank_you_step_1',
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'markup',
    'settings' => array(
      'markup' => array(
        'format' => 'full_html',
        'value' => '<p class="step-title"><strong><span class="font-color-gold">[icon:fontawesome:info] Step 1.</span> Who are you?</strong></p>
<p class="step-instructions">Your teacher should know who\'s spreading the love.</p>
',
      ),
    ),
    'translatable' => 0,
    'type' => 'markup',
  );

  // Exported field_base: 'field_thank_you_step_2'
  $field_bases['field_thank_you_step_2'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_thank_you_step_2',
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'markup',
    'settings' => array(
      'markup' => array(
        'format' => 'full_html',
        'value' => '<p class="step-title"><strong><span class="font-color-gold">[icon:fontawesome:pencil] Step 2.</span> Say Thanks!</strong></p>
<p class="step-instructions">And tell us why your teacher is so amazing.</p>
',
      ),
    ),
    'translatable' => 0,
    'type' => 'markup',
  );

  // Exported field_base: 'field_thank_you_step_3'
  $field_bases['field_thank_you_step_3'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_thank_you_step_3',
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'markup',
    'settings' => array(
      'markup' => array(
        'format' => 'full_html',
        'value' => '<p class="step-title"><strong><span class="font-color-gold">[icon:fontawesome:camera] Step 3.</span> Give us a smile!</strong></p>
<p class="step-instructions">Upload a picture or use on of our images.</p>
',
      ),
    ),
    'translatable' => 0,
    'type' => 'markup',
  );

  // Exported field_base: 'field_thank_you_teachers_name'
  $field_bases['field_thank_you_teachers_name'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_thank_you_teachers_name',
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 60,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_thank_you_zip'
  $field_bases['field_thank_you_zip'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_thank_you_zip',
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'postal_code',
    'settings' => array(
      'max_length' => 16,
    ),
    'translatable' => 0,
    'type' => 'postal_code',
  );

  return $field_bases;
}
