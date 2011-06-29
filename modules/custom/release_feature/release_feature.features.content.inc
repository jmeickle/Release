<?php

/**
 * Implementation of hook_content_default_fields().
 */
function release_feature_content_default_fields() {
  $fields = array();

  // Exported field: field_picture
  $fields['profile-field_picture'] = array(
    'field_name' => 'field_picture',
    'type_name' => 'profile',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '1',
    'multiple' => '0',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '0',
    'widget' => array(
      'file_extensions' => 'png gif jpg jpeg',
      'file_path' => '',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '',
      'max_filesize_per_node' => '',
      'max_resolution' => '0',
      'min_resolution' => '0',
      'alt' => '',
      'custom_alt' => 0,
      'title' => '',
      'custom_title' => 0,
      'title_type' => 'textfield',
      'default_image' => NULL,
      'use_default_image' => 0,
      'label' => 'Picture',
      'weight' => '-3',
      'description' => '',
      'type' => 'imagefield_widget',
      'module' => 'imagefield',
    ),
  );

  // Exported field: field_document
  $fields['release_article-field_document'] = array(
    'field_name' => 'field_document',
    'type_name' => 'release_article',
    'display_settings' => array(
      'weight' => 0,
      'parent' => 'group_multimedia',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '0',
    'multiple' => '1',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '1',
    'widget' => array(
      'file_extensions' => 'doc docx ppt pptx xls xlsx odt ods odp rtf pdf txt csv zip rar 7z tar gz',
      'file_path' => 'uploads/[user]',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '8M',
      'max_filesize_per_node' => '50M',
      'label' => 'Document',
      'weight' => 0,
      'description' => 'Choose a document or archive file from your computer, and then select "Upload" to send it to the server.

You may upload more documents by selecting "Add another item".',
      'type' => 'filefield_widget',
      'module' => 'filefield',
    ),
  );

  // Exported field: field_frontpage_image
  $fields['release_article-field_frontpage_image'] = array(
    'field_name' => 'field_frontpage_image',
    'type_name' => 'release_article',
    'display_settings' => array(
      'weight' => '9',
      'parent' => '',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'image_plain',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'image_plain',
        'exclude' => 1,
      ),
      '4' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '0',
    'multiple' => '0',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '1',
    'widget' => array(
      'file_extensions' => 'png gif jpg jpeg',
      'file_path' => '',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '',
      'max_filesize_per_node' => '',
      'max_resolution' => '0',
      'min_resolution' => '0',
      'alt' => '',
      'custom_alt' => 0,
      'title' => '',
      'custom_title' => 0,
      'title_type' => 'textfield',
      'default_image' => array(
        'filename' => '3d_diamond.',
        'filepath' => 'sites/default/files/imagefield_default_images/3d_diamond.',
        'filemime' => 'application/octet-stream',
        'source' => 'default_image_upload',
        'destination' => 'sites/default/files/imagefield_default_images/3d_diamond.',
        'filesize' => 591,
        'uid' => '1',
        'status' => 1,
        'timestamp' => 1308926795,
        'fid' => '18',
      ),
      'use_default_image' => 1,
      'label' => 'Frontpage Image',
      'weight' => '6',
      'description' => '',
      'type' => 'imagefield_widget',
      'module' => 'imagefield',
    ),
  );

  // Exported field: field_image
  $fields['release_article-field_image'] = array(
    'field_name' => 'field_image',
    'type_name' => 'release_article',
    'display_settings' => array(
      'weight' => '1',
      'parent' => 'group_multimedia',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'article_thumbnail_imagelink',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'article_thumbnail_imagelink',
        'exclude' => 1,
      ),
      '4' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '0',
    'multiple' => '1',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '1',
    'widget' => array(
      'file_extensions' => 'png gif jpg jpeg',
      'file_path' => 'uploads/[user]',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '8M',
      'max_filesize_per_node' => '50M',
      'max_resolution' => '0',
      'min_resolution' => '0',
      'alt' => '',
      'custom_alt' => 0,
      'title' => '',
      'custom_title' => 0,
      'title_type' => 'textfield',
      'default_image' => NULL,
      'use_default_image' => 0,
      'label' => 'Image',
      'weight' => '7',
      'description' => 'Choose an image file from your computer, and then select "Upload" to send it to the server.

You may upload more images by selecting "Add another item".',
      'type' => 'imagefield_widget',
      'module' => 'imagefield',
    ),
  );

  // Exported field: field_introduction
  $fields['release_article-field_introduction'] = array(
    'field_name' => 'field_introduction',
    'type_name' => 'release_article',
    'display_settings' => array(
      'weight' => '-1',
      'parent' => '',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '1',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => '5',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'value' => '',
          'format' => '1',
          '_error_element' => 'default_value_widget][field_introduction][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Introduction',
      'weight' => '4',
      'description' => 'Optional content that shows up before the first image, such as an italicized block of introductory text.',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Exported field: field_subtitle
  $fields['release_article-field_subtitle'] = array(
    'field_name' => 'field_subtitle',
    'type_name' => 'release_article',
    'display_settings' => array(
      'weight' => '-4',
      'parent' => '',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '1',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_subtitle][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Subtitle',
      'weight' => '3',
      'description' => 'Displays immediately below the title text on the article page only.',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_video
  $fields['release_article-field_video'] = array(
    'field_name' => 'field_video',
    'type_name' => 'release_article',
    'display_settings' => array(
      'weight' => '2',
      'parent' => 'group_multimedia',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'emvideo',
    'required' => '0',
    'multiple' => '1',
    'module' => 'emvideo',
    'active' => '1',
    'widget' => array(
      'video_width' => '425',
      'video_height' => '350',
      'video_autoplay' => 0,
      'preview_width' => '425',
      'preview_height' => '350',
      'preview_autoplay' => 0,
      'thumbnail_width' => '180',
      'thumbnail_height' => '135',
      'thumbnail_default_path' => '',
      'thumbnail_link_title' => 'See video',
      'meta_fields' => array(
        'title' => 'title',
        'description' => 0,
      ),
      'providers' => array(
        'vimeo' => 'vimeo',
        'youtube' => 'youtube',
      ),
      'default_value' => array(
        '0' => array(
          'embed' => '',
          'value' => '',
          'emvideo' => array(
            'title' => '',
            'description' => '',
          ),
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Video',
      'weight' => '2',
      'description' => 'When embedding a video from YouTube, please use the video\'s web address (URL) rather than the embed code.',
      'type' => 'emvideo_textfields',
      'module' => 'emvideo',
    ),
  );

  // Exported field: field_document
  $fields['release_featured-field_document'] = array(
    'field_name' => 'field_document',
    'type_name' => 'release_featured',
    'display_settings' => array(
      'weight' => '8',
      'parent' => 'group_documents',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '0',
    'multiple' => '1',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '1',
    'widget' => array(
      'file_extensions' => 'doc docx ppt pptx xls xlsx odt ods odp rtf pdf txt csv zip rar 7z tar gz',
      'file_path' => 'uploads/[user]',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '8M',
      'max_filesize_per_node' => '50M',
      'label' => 'Document',
      'weight' => '5',
      'description' => 'Choose a document or archive file from your computer, and then select "Upload" to send it to the server.

You may upload more documents by selecting "Add another item".',
      'type' => 'filefield_widget',
      'module' => 'filefield',
    ),
  );

  // Exported field: field_image
  $fields['release_featured-field_image'] = array(
    'field_name' => 'field_image',
    'type_name' => 'release_featured',
    'display_settings' => array(
      'weight' => '10',
      'parent' => 'group_images',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '0',
    'multiple' => '1',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '1',
    'widget' => array(
      'file_extensions' => 'png gif jpg jpeg',
      'file_path' => 'uploads/[user]',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '8M',
      'max_filesize_per_node' => '50M',
      'max_resolution' => '0',
      'min_resolution' => '0',
      'alt' => '',
      'custom_alt' => 0,
      'title' => '',
      'custom_title' => 0,
      'title_type' => 'textfield',
      'default_image' => NULL,
      'use_default_image' => 0,
      'label' => 'Image',
      'weight' => '6',
      'description' => 'Choose an image file from your computer, and then select "Upload" to send it to the server.

You may upload more images by selecting "Add another item".',
      'type' => 'imagefield_widget',
      'module' => 'imagefield',
    ),
  );

  // Exported field: field_quote
  $fields['release_featured-field_quote'] = array(
    'field_name' => 'field_quote',
    'type_name' => 'release_featured',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_quote][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Quote Author',
      'weight' => 0,
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_video
  $fields['release_featured-field_video'] = array(
    'field_name' => 'field_video',
    'type_name' => 'release_featured',
    'display_settings' => array(
      'weight' => '10',
      'parent' => 'group_videos',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'emvideo',
    'required' => '0',
    'multiple' => '1',
    'module' => 'emvideo',
    'active' => '1',
    'widget' => array(
      'video_width' => '425',
      'video_height' => '350',
      'video_autoplay' => 0,
      'preview_width' => '425',
      'preview_height' => '350',
      'preview_autoplay' => 0,
      'thumbnail_width' => '120',
      'thumbnail_height' => '90',
      'thumbnail_default_path' => '',
      'thumbnail_link_title' => 'See video',
      'meta_fields' => array(
        'title' => 'title',
        'description' => 0,
      ),
      'providers' => array(
        'vimeo' => 'vimeo',
        'youtube' => 'youtube',
      ),
      'default_value' => array(
        '0' => array(
          'embed' => '',
          'value' => '',
          'emvideo' => array(
            'title' => '',
            'description' => '',
          ),
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Video',
      'weight' => '7',
      'description' => 'When embedding a video from YouTube, please use the video\'s web address (URL) rather than the embed code.',
      'type' => 'emvideo_textfields',
      'module' => 'emvideo',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Document');
  t('Frontpage Image');
  t('Image');
  t('Introduction');
  t('Picture');
  t('Quote Author');
  t('Subtitle');
  t('Video');

  return $fields;
}
