<?php
/**
 * @file
 * dbr_tips.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function dbr_tips_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_dbr_tip';
  $strongarm->value = 0;
  $export['comment_anonymous_dbr_tip'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_dbr_tip';
  $strongarm->value = '2';
  $export['comment_dbr_tip'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_dbr_tip';
  $strongarm->value = 1;
  $export['comment_default_mode_dbr_tip'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_dbr_tip';
  $strongarm->value = '50';
  $export['comment_default_per_page_dbr_tip'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_dbr_tip';
  $strongarm->value = 1;
  $export['comment_form_location_dbr_tip'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_dbr_tip';
  $strongarm->value = '1';
  $export['comment_preview_dbr_tip'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_dbr_tip';
  $strongarm->value = 0;
  $export['comment_subject_field_dbr_tip'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_dbr_tip';
  $strongarm->value = '0';
  $export['language_content_type_dbr_tip'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_dbr_tip';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_dbr_tip'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_dbr_tip';
  $strongarm->value = '1';
  $export['node_preview_dbr_tip'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_dbr_tip';
  $strongarm->value = 1;
  $export['node_submitted_dbr_tip'] = $strongarm;

  return $export;
}
