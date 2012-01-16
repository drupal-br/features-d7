<?php
/**
 * @file
 * dbr_events.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function dbr_events_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function dbr_events_node_info() {
  $items = array(
    'dbr_event' => array(
      'name' => t('Event'),
      'base' => 'node_content',
      'description' => t('Posts with invitation to events, lectures, training, meetings etc.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
