<?php
/**
 * @file
 * dbr_groups.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function dbr_groups_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_dbr_group';
  $strongarm->value = 'edit-submission';
  $export['additional_settings__active_tab_dbr_group'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_dbr_group';
  $strongarm->value = 0;
  $export['comment_anonymous_dbr_group'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_dbr_group';
  $strongarm->value = '1';
  $export['comment_dbr_group'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_dbr_group';
  $strongarm->value = 1;
  $export['comment_default_mode_dbr_group'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_dbr_group';
  $strongarm->value = '50';
  $export['comment_default_per_page_dbr_group'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_dbr_group';
  $strongarm->value = 1;
  $export['comment_form_location_dbr_group'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_dbr_group';
  $strongarm->value = '1';
  $export['comment_preview_dbr_group'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_dbr_group';
  $strongarm->value = 1;
  $export['comment_subject_field_dbr_group'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'easy_social_dbr_group_count';
  $strongarm->value = '1';
  $export['easy_social_dbr_group_count'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'easy_social_dbr_group_count_dbr_group';
  $strongarm->value = '1';
  $export['easy_social_dbr_group_count_dbr_group'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'easy_social_dbr_group_enable';
  $strongarm->value = 1;
  $export['easy_social_dbr_group_enable'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'easy_social_dbr_group_enable_dbr_group';
  $strongarm->value = 1;
  $export['easy_social_dbr_group_enable_dbr_group'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'easy_social_dbr_group_type';
  $strongarm->value = '0';
  $export['easy_social_dbr_group_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'easy_social_dbr_group_type_dbr_group';
  $strongarm->value = '0';
  $export['easy_social_dbr_group_type_dbr_group'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'easy_social_dbr_group_widgets';
  $strongarm->value = array(
    'twitter' => 'twitter',
    'facebook' => 'facebook',
    'googleplus' => 'googleplus',
    'linkedin' => 0,
  );
  $export['easy_social_dbr_group_widgets'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'easy_social_dbr_group_widgets_dbr_group';
  $strongarm->value = array(
    0 => 'twitter',
    1 => 'facebook',
    2 => 'googleplus',
  );
  $export['easy_social_dbr_group_widgets_dbr_group'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_dbr_group';
  $strongarm->value = '0';
  $export['language_content_type_dbr_group'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_dbr_group';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_dbr_group'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_dbr_group';
  $strongarm->value = '0';
  $export['node_preview_dbr_group'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_dbr_group';
  $strongarm->value = 0;
  $export['node_submitted_dbr_group'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'og_group_content_type_dbr_group';
  $strongarm->value = 'omitted';
  $export['og_group_content_type_dbr_group'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_dbr_group_pattern';
  $strongarm->value = 'grupo/[node:title]';
  $export['pathauto_node_dbr_group_pattern'] = $strongarm;

  return $export;
}
