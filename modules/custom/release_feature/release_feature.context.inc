<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function release_feature_context_default_contexts() {
  $export = array();
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'shared_left_sidebar';
  $context->description = 'Shared Left Sidebar (present on all pages)';
  $context->tag = 'release';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'release_custom_module-corner' => array(
          'module' => 'release_custom_module',
          'delta' => 'corner',
          'region' => 'left',
          'weight' => 0,
        ),
        'release_custom_module-graphs' => array(
          'module' => 'release_custom_module',
          'delta' => 'graphs',
          'region' => 'left',
          'weight' => 1,
        ),
        'release_custom_module-welcome' => array(
          'module' => 'release_custom_module',
          'delta' => 'welcome',
          'region' => 'left',
          'weight' => 2,
        ),
        'release_custom_module-subscribe' => array(
          'module' => 'release_custom_module',
          'delta' => 'subscribe',
          'region' => 'left',
          'weight' => 3,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Shared Left Sidebar (present on all pages)');
  t('release');

  $export['shared_left_sidebar'] = $context;
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'shared_right_sidebar';
  $context->description = 'Shared Right Sidebar (present on all pages)';
  $context->tag = 'release';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-release_quotation-block_1' => array(
          'module' => 'views',
          'delta' => 'release_quotation-block_1',
          'region' => 'right',
          'weight' => 0,
        ),
        'views-release_video-block_1' => array(
          'module' => 'views',
          'delta' => 'release_video-block_1',
          'region' => 'right',
          'weight' => 1,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Shared Right Sidebar (present on all pages)');
  t('release');

  $export['shared_right_sidebar'] = $context;
  return $export;
}
