<?php
/**
 * @file
 * dbr_showcase.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function dbr_showcase_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function dbr_showcase_node_info() {
  $items = array(
    'dbr_showcase' => array(
      'name' => t('Showcase'),
      'base' => 'node_content',
      'description' => t('Galeria de projetos desenvolvidos pelos membros da comunidade.'),
      'has_title' => '1',
      'title_label' => t('Título'),
      'help' => '',
    ),
  );
  return $items;
}
