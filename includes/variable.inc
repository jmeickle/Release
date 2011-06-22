<?php

// Note that this stuff can override what was set in the installation process!

// Basic site information:
variable_set('site_footer', 'This website was developed by the <a href="http://www.ccsu.edu/imrp">Institute for Municipal and Regional Policy</a> at <a href="http://www.ccsu.edu">Central Connecticut State University</a> using <a href="http://github.com/Eronarn/Thurgood">Thurgood</a>, a custom installation profile for <a href="http://drupal.org">Drupal</a>.');
variable_set('site_mail', 'eronarn@gmail.com');
variable_set('site_name', 'Release');
variable_set('site_offline_message', "The Release website is currently offline for maintenance. Our apologies for the interruption.");
variable_set('site_slogan', 'Release Site Slogan');

$mission = 'Release Mission Statement';
variable_set('site_mission', $mission);

// Core notification settings.
variable_set('update_check_frequency', "1");
variable_set('update_notification_threshold', "all");
variable_set('update_notify_emails', array(0 => "eronarn@gmail.com"));

// Core node settings.
// Don't have anything here yet.
// variable_set('site_frontpage', 'home');
variable_set('default_nodes_main', "5");
variable_set('node_preview', "0");
variable_set('teaser_length', "200");

// Filter settings.
variable_set('allowed_html_1', "<a> <i> <em> <b> <strong> <cite> <code> <ul> <ol> <li> <dl> <dt> <dd>");
variable_set('filter_html_1', "1");
variable_set('filter_html_help_1', 1);
variable_set('filter_html_nofollow_1', 0);
variable_set('filter_url_length_1', "72");
variable_set('format', "1");

// Having the Search region active breaks OL Geocoder,
// so we disable it here. (Also do other theme settings.)

variable_set('theme_settings', array(
    'toggle_logo' => 1,
    'toggle_name' => 1,
    'toggle_slogan' => 1,
    'toggle_mission' => 1,
    'toggle_node_user_picture' => 0,
    'toggle_comment_user_picture' => 0,
    'toggle_search' => 0,
    'toggle_favicon' => 1,
    'toggle_primary_links' => 1,
    'toggle_secondary_links' => 0,
    'toggle_node_info_release_article' => 1,
    'default_logo' => 1,
    'logo_path' => '',
    'logo_upload' => '',
    'default_favicon' => 1,
    'favicon_path' => '',
    'favicon_upload' => '',
));

// Performance settings
variable_set('preprocess_css', "1");

// Date settings
variable_set('date_db_tz_support', 0);
variable_set('date_default_timezone', -14400);
variable_set('date_default_timezone_name', "America/New_York");
variable_set('date_first_day', 0);
variable_set('date_format_long', "l, F j, Y - H:i");
variable_set('date_format_medium', "D, Y-m-d H:i");
variable_set('date_format_short', "Y-m-d H:i");

// Image settings.
variable_set('imageapi_image_toolkit', "imageapi_gd");
variable_set('image_toolkit', "gd");

// Search settings.
variable_set('search_cron_limit', 200);

  // Admin settings
  variable_set('admin_toolbar', array(
    'layout' => "horizontal",
    'position' => "sw",
    'behavior' => "df",
    'blocks' => array
        (
            'context_ui-editor' => -1,
            'context_ui-devel' => -1,
            'admin-create' => -1,
            'admin-theme' => 1,
            'admin-account' => -1,
            'admin-menu' => 1,
            'admin-devel' => -1
        )

  ));

// Admin Menu settings
variable_set('admin_menu_margin_top', 1);
variable_set('admin_menu_position_fixed', 1);
variable_set('admin_menu_tweak_modules', 1);
variable_set('admin_menu_tweak_tabs', 0);

// Vertical Tabs settings
variable_set('vertical_tabs_default', 1);
variable_set('vertical_tabs_minimum', 1);
variable_set('vertical_tabs_node_type_settings', 0);

// Quicktabs settings
variable_set('quicktabs_tabstyle', "Sky");

// Pathauto settings
variable_set('pathauto_node_pattern', '[type]/[title-raw]');
variable_set('pathauto_reduce_ascii', 1);
variable_set('pathauto_update_action', "1");
variable_set('pathauto_max_bulk_update', "100");

// Contact form settings.
variable_set('contact_default_status', 0);
variable_set('contact_form_information', "Run into a bug on our site? Spot inaccurate information? Just plain don't like something and want us to know? Leave a message for the site webmaster using the contact form below.");
variable_set('contact_hourly_threshold', 3);

$contact_info = array (
    array("cid" => 1, "category" => "Feedback about site", "recipients" => "eronarn@gmail.com", "reply" => '', "weight" => 0, "selected" => 1),
    array("cid" => 2, "category" => "Help with using the site", "recipients" => "eronarn@gmail.com", "reply" => '', "weight" => 0, "selected" => 0),
    array("cid" => 3, "category" => "Wrong information on site", "recipients" => "eronarn@gmail.com", "reply" => '', "weight" => 0, "selected" => 0),
    array("cid" => 4, "category" => "Request for further information", "recipients" => "eronarn@gmail.com", "reply" => '', "weight" => 0, "selected" => 0),
);

foreach ($contact_info as $values) {
    db_query("INSERT INTO {contact} (cid, category, recipients, reply, weight, selected) VALUES ('%s', '%s', '%s', '%s', '%s', '%s')", $values);
}
?>
