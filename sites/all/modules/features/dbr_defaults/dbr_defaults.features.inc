<?php
/**
 * @file
 * dbr_defaults.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function dbr_defaults_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
