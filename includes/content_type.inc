<?php

  variable_set('content_profile_profile', unserialize('a:8:{s:6:"weight";s:1:"0";s:12:"user_display";s:1:"0";s:9:"edit_link";i:0;s:8:"edit_tab";s:3:"top";s:8:"add_link";i:1;s:16:"registration_use";i:0;s:21:"admin_user_create_use";i:1;s:17:"registration_hide";a:1:{i:0;s:5:"title";}}'));

  variable_set('content_profile_use_profile', 1);
  variable_set('content_profile_use_release_article', 0);
  variable_set('content_profile_use_release_featured', 0);

  variable_set('enable_revisions_page_profile', 1);
  variable_set('enable_revisions_page_release_article', 1);
  variable_set('enable_revisions_page_release_featured', 1);

  variable_set('new_revisions_profile', 0);
  variable_set('new_revisions_release_article', 0);
  variable_set('new_revisions_release_featured', 0);

  variable_set('revisioning_auto_publish_profile', 0);
  variable_set('revisioning_auto_publish_release_article', 0);
  variable_set('revisioning_auto_publish_release_featured', 0);

  variable_set('node_options_release_profile', array(0 => 'status', 1 => "revision", 2 => "revision_moderation"));
  variable_set('node_options_release_article', array(0 => 'status', 1 => "revision", 2 => "revision_moderation"));
  variable_set('node_options_release_featured', array(0 => 'status', 1 => "revision", 2 => "revision_moderation"));

  // Vertical Tabs Default settings
  variable_set('vertical_tabs_default_tab_profile', "Profile");
  variable_set('vertical_tabs_default_tab_release_article', "Release Article");
  variable_set('vertical_tabs_default_tab_release_feature', "Featured Content");

  // Date and author information:
  $theme_settings = variable_get('theme_settings', array());
  $theme_settings['toggle_node_info_release_article'] = TRUE;
  variable_set('theme_settings', $theme_settings);
?>
