<?php

/**
 * Implementation of hook_fieldgroup_default_groups().
 */
function release_feature_fieldgroup_default_groups() {
  $groups = array();

  // Exported group: group_multimedia
  $groups['release_article-group_multimedia'] = array(
    'group_type' => 'standard',
    'type_name' => 'release_article',
    'group_name' => 'group_multimedia',
    'label' => 'Multimedia',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset',
        'description' => '',
      ),
      'display' => array(
        'weight' => '2',
        'label' => 'above',
        'teaser' => array(
          'format' => 'fieldset',
          'exclude' => 1,
        ),
        'full' => array(
          'format' => 'fieldset',
          'exclude' => 1,
        ),
        'description' => '',
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '2' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '3' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
      ),
    ),
    'weight' => '8',
    'fields' => array(
      '0' => 'field_document',
      '1' => 'field_video',
    ),
  );

  // Exported group: group_multimedia
  $groups['release_featured-group_multimedia'] = array(
    'group_type' => 'standard',
    'type_name' => 'release_featured',
    'group_name' => 'group_multimedia',
    'label' => 'Multimedia',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset',
        'description' => '',
      ),
      'display' => array(
        'description' => '',
        'label' => 'above',
        'teaser' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '2' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '3' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
      ),
    ),
    'weight' => '1',
    'fields' => array(
      '0' => 'field_document',
      '1' => 'field_image',
      '2' => 'field_video',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Multimedia');

  return $groups;
}
