<?php
/**
 * @file
 * dbr_tips.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function dbr_tips_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function dbr_tips_node_info() {
  $items = array(
    'dbr_tip' => array(
      'name' => t('Dica'),
      'base' => 'node_content',
      'description' => t('Postagens rápidas com conteúdos úteis à comunidade.'),
      'has_title' => '1',
      'title_label' => t('Título'),
      'help' => '',
    ),
  );
  return $items;
}
