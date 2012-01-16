<?php
/**
 * @file
 * dbr_groups.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function dbr_groups_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function dbr_groups_node_info() {
  $items = array(
    'dbr_group' => array(
      'name' => t('Group'),
      'base' => 'node_content',
      'description' => t('Group discussion of a any subject.'),
      'has_title' => '1',
      'title_label' => t('Group'),
      'help' => '',
    ),
  );
  return $items;
}
