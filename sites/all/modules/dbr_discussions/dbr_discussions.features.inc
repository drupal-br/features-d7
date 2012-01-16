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
      'name' => t('Discussão'),
      'base' => 'node_content',
      'description' => t('Um tópico de dúvida ou curiosidade que qualquer membro esteja interessado em discutir com o grupo.'),
      'has_title' => '1',
      'title_label' => t('Título'),
      'help' => '',
    ),
  );
  return $items;
}
