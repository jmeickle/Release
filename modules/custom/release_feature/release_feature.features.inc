<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function release_feature_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_node_info().
 */
function release_feature_node_info() {
  $items = array(
    'release_article' => array(
      'name' => t('Release Article'),
      'module' => 'features',
      'description' => t('Main article content type.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Body'),
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}
