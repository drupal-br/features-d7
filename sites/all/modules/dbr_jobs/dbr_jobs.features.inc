<?php
/**
 * @file
 * dbr_jobs.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function dbr_jobs_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function dbr_jobs_node_info() {
  $items = array(
    'dbr_job' => array(
      'name' => t('Job'),
      'base' => 'node_content',
      'description' => t('Publicação de oportunidade de emprego/estágio/freelance.'),
      'has_title' => '1',
      'title_label' => t('Título'),
      'help' => '',
    ),
  );
  return $items;
}
