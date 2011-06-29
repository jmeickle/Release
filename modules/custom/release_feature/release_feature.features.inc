<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function release_feature_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => 3);
  }
  elseif ($module == "page_manager" && $api == "pages_default") {
    return array("version" => 1);
  }
  elseif ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_imagecache_default_presets().
 */
function release_feature_imagecache_default_presets() {
  $items = array(
    'article_thumbnail' => array(
      'presetname' => 'article_thumbnail',
      'actions' => array(
        '0' => array(
          'weight' => '-10',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '250px',
            'height' => '',
            'upscale' => 0,
          ),
        ),
        '1' => array(
          'weight' => '-9',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '',
            'height' => '300px',
            'upscale' => 0,
          ),
        ),
      ),
    ),
    'featured_slideshow' => array(
      'presetname' => 'featured_slideshow',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale_and_crop',
          'data' => array(
            'width' => '250px',
            'height' => '175px',
          ),
        ),
      ),
    ),
    'frontpage_thumbnail' => array(
      'presetname' => 'frontpage_thumbnail',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale_and_crop',
          'data' => array(
            'width' => '150px',
            'height' => '150px',
          ),
        ),
      ),
    ),
    'frontpage_thumbnail_large' => array(
      'presetname' => 'frontpage_thumbnail_large',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale_and_crop',
          'data' => array(
            'width' => '225px',
            'height' => '150px',
          ),
        ),
      ),
    ),
  );
  return $items;
}

/**
 * Implementation of hook_node_info().
 */
function release_feature_node_info() {
  $items = array(
    'profile' => array(
      'name' => t('Profile'),
      'module' => 'features',
      'description' => t('A user profile built as content.'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'has_body' => '1',
      'body_label' => t('Bio'),
      'min_word_count' => '0',
      'help' => '',
    ),
    'release_article' => array(
      'name' => t('Release Article'),
      'module' => 'features',
      'description' => t('Main article content type.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Body'),
      'min_word_count' => '0',
      'help' => t('The title will be used across the site. Split the Body section if you want the front page summary of the article to differ from the start of the article\'s body text.'),
    ),
    'release_featured' => array(
      'name' => t('Featured Content'),
      'module' => 'features',
      'description' => t('Content on Release that is not meant to be displayed as an article.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Body'),
      'min_word_count' => '0',
      'help' => t('Please fill out a title. If this is to be used as a quote, fill out the body and quote author fields. If this is to be used as a slideshow image, fill out the body with the description to be used and upload an image under Multimedia. If this is to be used as an uploaded video or document, skip the Body section and attach your content under Multimedia directly.'),
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function release_feature_views_api() {
  return array(
    'api' => '2',
  );
}
