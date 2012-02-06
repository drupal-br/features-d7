<?php
/**
 * @file
 * dbr_defaults.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function dbr_defaults_taxonomy_default_vocabularies() {
  return array(
    'job_type' => array(
      'name' => 'Tipo de vaga',
      'machine_name' => 'job_type',
      'description' => 'Classificação das oportunidades de trabalho.',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
    'tags' => array(
      'name' => 'Tags',
      'machine_name' => 'tags',
      'description' => 'Classificação livre de conteúdo.',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
    'version' => array(
      'name' => 'Versão',
      'machine_name' => 'version',
      'description' => 'Versão do Drupal que se aplica ao post.',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
  );
}
