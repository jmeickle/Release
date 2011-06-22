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

// Google Analytics settings. Again, this is tied to domain!
// variable_set('googleanalytics_account', "UA-15311544-3");
// variable_set('googleanalytics_cache', 0);
// variable_set('googleanalytics_codesnippet_after', "0");
// variable_set('googleanalytics_codesnippet_before', "0");
// variable_set('googleanalytics_custom', "0");

/**
variable_set('googleanalytics_custom_var',
// Just uses the default settings, so leaving it unserialized rather than expanding it to an array.
unserialize('a:1:{s:5:"slots";a:5:{
i:1;a:4:{s:4:"slot";i:1;s:4:"name";s:0:"";s:5:"value";s:0:"";s:5:"scope";s:1:"3";}
i:2;a:4:{s:4:"slot";i:2;s:4:"name";s:0:"";s:5:"value";s:0:"";s:5:"scope";s:1:"3";}
i:3;a:4:{s:4:"slot";i:3;s:4:"name";s:0:"";s:5:"value";s:0:"";s:5:"scope";s:1:"3";}
i:4;a:4:{s:4:"slot";i:4;s:4:"name";s:0:"";s:5:"value";s:0:"";s:5:"scope";s:1:"3";}
i:5;a:4:{s:4:"slot";i:5;s:4:"name";s:0:"";s:5:"value";s:0:"";s:5:"scope";s:1:"3";}
}}')
);
**/

/**
variable_set('googleanalytics_pages',"
admin

admin/*

user/*/*

node/add*

node/*/*
");

variable_set('googleanalytics_roles', array(
1 => 0,
2 => 0,
3 => 0,
4 => 0,
5 => 0,
6 => 0,
7 => 0,
8 => 0,
9 => 0,
10 => 0,
11 => 0
));

variable_set('googleanalytics_site_search', 1);
variable_set('googleanalytics_trackadsense', 0);
variable_set('googleanalytics_tracker_anonymizeip', 0);
variable_set('googleanalytics_trackfiles', 1);
variable_set('googleanalytics_trackfiles_extensions', "7z|aac|arc|arj|asf|asx|avi|bin|csv|doc|exe|flv|gif|gz|gzip|hqx|jar|jpe?g|js|mp(2|3|4|e?g)|mov(ie)?|msi|msp|pdf|phps|png|ppt|qtm?|ra(m|r)?|sea|sit|tar|tgz|torrent|txt|wav|wma|wmv|wpd|xls|xml|z|zip");
variable_set('googleanalytics_trackmailto', 1);
variable_set('googleanalytics_trackoutboundaspageview', 0);
variable_set('googleanalytics_trackoutgoing', 1);
variable_set('googleanalytics_visibility', "0");
variable_set('googleanalytics_visibility_roles', "0");

**/

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

/**
// Hierarchical Select settings.

$taxonomy_populations =
array
(
    'config_id' => 'content-taxonomy-field_taxonomy_populations',
    'save_lineage' => 1,
    'enforce_deepest' => 0,
    'entity_count' => 0,
    'require_entity' => 0,
    'resizable' => 1,
    'level_labels' => array
        (
            'status' => 1,
            'labels' => array
                (
                    '0' => 'Population',
                ),

        ),

    'dropbox' => array
        (
            'status' => 1,
            'title' => 'Current selections',
            'limit' => 0,
            'reset_hs' => 1,
        ),

    'editability' => array
        (
            'status' => 0,
            'item_types' => array
                (
                    '0' => ''
                ),

            'allowed_levels' => Array
                (
                    '0' => 1,
                ),

            'allow_new_levels' => 0,
            'max_levels' => 0,
        ),

);

$taxonomy_region =
array 
(
    'config_id' => 'content-taxonomy-field_taxonomy_region',
    'save_lineage' => 1,
    'enforce_deepest' => 0,
    'entity_count' => 0,
    'require_entity' => 0,
    'resizable' => 1,
    'level_labels' => array
        (
            'status' => 1,
            'labels' => array
                (
                    '0' => 'City',
                    '1' => 'Neighborhood',
                ),
        ),

    'dropbox' => array
        (
            'status' => 1,
            'title' => 'Current selections',
            'limit' => 0,
            'reset_hs' => 1,
        ),

    'editability' => array
        (
            'status' => 0,
            'item_types' => array
                (
                    '0' => '',
                    '1' => '',
                ),

            'allowed_levels' => array
                (
                    '0' => 1,
                    '1' => 1,
                ),

            'allow_new_levels' => 0,
            'max_levels' => 0,
        ),

);

$taxonomy_services =
array
(
    'config_id' => 'content-taxonomy-field_taxonomy_services',
    'save_lineage' => 1,
    'enforce_deepest' => 0,
    'entity_count' => 0,
    'require_entity' => 0,
    'resizable' => 1,
    'level_labels' => array
        (
            'status' => 1,
            'labels' => array
                (
                    '0' => 'Category',
                    '1' => 'Subcategory',
                ),

        ),
    'dropbox' => array
        (
            'status' => 1,
            'title' => 'Current selections',
            'limit' => 0,
            'reset_hs' => 1,
        ),

    'editability' => array
        (
            'status' => 0,
            'item_types' => array
                (
                    '0' => '',
                    '1' => '',
                ),

            'allowed_levels' => array
                (
                    '0' => 1,
                    '1' => 1,
                ),

            'allow_new_levels' => 0,
            'max_levels' => 0,
        ),
);

variable_set('hs_config_content-taxonomy-field_taxonomy_populations', $taxonomy_populations);
variable_set('hs_config_content-taxonomy-field_taxonomy_region', $taxonomy_region);
variable_set('hs_config_content-taxonomy-field_taxonomy_services', $taxonomy_services);
**/

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