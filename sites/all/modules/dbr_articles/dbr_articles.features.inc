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
      'name' => t('Article'),
      'base' => 'node_content',
      'description' => t('Periodical contents, technical or not, published by fixed collaborators.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
