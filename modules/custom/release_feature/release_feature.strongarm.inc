<?php

/**
 * Implementation of hook_strongarm().
 */
function release_feature_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_release_article';
  $strongarm->value = array(
    'title' => '-5',
    'body_field' => '-2',
    'menu' => '2',
    'workflow' => '3',
    'author' => '4',
    'revision_information' => '5',
    'options' => '6',
    'path' => '7',
  );

  $export['content_extra_weights_release_article'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_release_article';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
    2 => 'revision',
    3 => 'revision_moderation',
  );

  $export['node_options_release_article'] = $strongarm;
  return $export;
}
