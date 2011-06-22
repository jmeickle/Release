<?php

  variable_set('node_options_release_article', array(0 => 'status', 1 => "revision", 2 => "revision_moderation"));

  // Vertical Tabs Default settings
  variable_set('vertical_tabs_default_tab_release_article', "Article content");

  // Date and author information:
  $theme_settings = variable_get('theme_settings', array());
  $theme_settings['toggle_node_info_release_article'] = TRUE;
  variable_set('theme_settings', $theme_settings);

  // Some revision/diff/etc. settings.
  variable_set('enable_revisions_page_release_article', 1);
  variable_set('show_preview_changes_release_article', 1);
  variable_set('new_revisions_release_article', "0");
  variable_set('revisioning_auto_publish_release_article', 0);
?>
