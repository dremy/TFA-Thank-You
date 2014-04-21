<?php
/**
 * @file
 * tfa_taw_thank_you_content.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function tfa_taw_thank_you_content_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function tfa_taw_thank_you_content_node_info() {
  $items = array(
    'thank_you' => array(
      'name' => t('Thank You'),
      'base' => 'node_content',
      'description' => t('A <em>Thank You</em> message for teachers to be created anonymously, and shared publicly.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
