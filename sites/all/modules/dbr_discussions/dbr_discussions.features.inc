<?php
/**
 * @file
 * dbr_discussions.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function dbr_discussions_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function dbr_discussions_node_info() {
  $items = array(
    'dbr_discussion' => array(
      'name' => t('Discussion'),
      'base' => 'node_content',
      'description' => t('A doubt or curiosity that any member is interested in discussing with the group.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
