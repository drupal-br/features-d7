<?php
/**
 * @file
 * dbr_articles.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function dbr_articles_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function dbr_articles_node_info() {
  $items = array(
    'dbr_article' => array(
      'name' => t('Artigo'),
      'base' => 'node_content',
      'description' => t('Conteúdos periódicos, técnicos ou não, publicados por colaboradores fixos.'),
      'has_title' => '1',
      'title_label' => t('Título'),
      'help' => '',
    ),
  );
  return $items;
}
