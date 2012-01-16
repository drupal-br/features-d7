<?php
/**
 * @file
 * dbr_discussions.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function dbr_discussions_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_dbr_discussion';
  $strongarm->value = 0;
  $export['comment_anonymous_dbr_discussion'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_dbr_discussion';
  $strongarm->value = '2';
  $export['comment_dbr_discussion'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_dbr_discussion';
  $strongarm->value = 1;
  $export['comment_default_mode_dbr_discussion'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_dbr_discussion';
  $strongarm->value = '50';
  $export['comment_default_per_page_dbr_discussion'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_dbr_discussion';
  $strongarm->value = 1;
  $export['comment_form_location_dbr_discussion'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_dbr_discussion';
  $strongarm->value = '1';
  $export['comment_preview_dbr_discussion'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_dbr_discussion';
  $strongarm->value = 0;
  $export['comment_subject_field_dbr_discussion'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_dbr_discussion';
  $strongarm->value = '0';
  $export['language_content_type_dbr_discussion'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_dbr_discussion';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_dbr_discussion'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_dbr_discussion';
  $strongarm->value = '1';
  $export['node_preview_dbr_discussion'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_dbr_discussion';
  $strongarm->value = 1;
  $export['node_submitted_dbr_discussion'] = $strongarm;

  return $export;
}
