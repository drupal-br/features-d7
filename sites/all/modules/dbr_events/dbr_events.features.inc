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
      'name' => t('Evento'),
      'base' => 'node_content',
      'description' => t('Postagens com convite para eventos, palestras, treinamentos, encontros etc.'),
      'has_title' => '1',
      'title_label' => t('Título'),
      'help' => '',
    ),
  );
  return $items;
}
