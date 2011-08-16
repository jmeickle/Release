<?php

/**
 * Implementation of hook_strongarm().
 */
function release_feature_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_profile';
  $strongarm->value = array(
    'title' => '-5',
    'body_field' => '-4',
    'revision_information' => '1',
    'author' => '0',
    'options' => '2',
    'menu' => '-2',
    'path' => '3',
  );

  $export['content_extra_weights_profile'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_release_article';
  $strongarm->value = array(
    'title' => '2',
    'body_field' => '5',
    'revision_information' => '12',
    'author' => '11',
    'options' => '13',
    'menu' => '9',
    'taxonomy' => '1',
    'path' => '14',
    'pagination_pager' => '17',
    'pagination_toc' => '16',
    'notifications' => '15',
  );

  $export['content_extra_weights_release_article'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_release_featured';
  $strongarm->value = array(
    'title' => '-2',
    'body_field' => '-1',
    'revision_information' => '5',
    'author' => '4',
    'options' => '6',
    'menu' => '3',
    'path' => '7',
    'notifications' => '8',
  );

  $export['content_extra_weights_release_featured'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_profile';
  $strongarm->value = array(
    0 => 'status',
  );

  $export['node_options_profile'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_release_article';
  $strongarm->value = array(
    0 => 'status',
    1 => 'revision',
    2 => 'revision_moderation',
  );

  $export['node_options_release_article'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_release_featured';
  $strongarm->value = array(
    0 => 'status',
    1 => 'revision',
    2 => 'revision_moderation',
  );

  $export['node_options_release_featured'] = $strongarm;
  return $export;
}
