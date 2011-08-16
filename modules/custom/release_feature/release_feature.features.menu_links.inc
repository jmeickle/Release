<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function release_feature_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: primary-links:archive
  $menu_links['primary-links:archive'] = array(
    'menu_name' => 'primary-links',
    'link_path' => 'archive',
    'router_path' => 'archive',
    'link_title' => 'Articles',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
  );
  // Exported menu link: primary-links:contact
  $menu_links['primary-links:contact'] = array(
    'menu_name' => 'primary-links',
    'link_path' => 'contact',
    'router_path' => 'contact',
    'link_title' => 'Contact',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-46',
  );
  // Exported menu link: primary-links:issues
  $menu_links['primary-links:issues'] = array(
    'menu_name' => 'primary-links',
    'link_path' => 'issues',
    'router_path' => 'issues',
    'link_title' => 'Issues',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
  );
  // Exported menu link: primary-links:partners
  $menu_links['primary-links:partners'] = array(
    'menu_name' => 'primary-links',
    'link_path' => 'partners',
    'router_path' => 'partners',
    'link_title' => 'Partner Sites',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '1',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-47',
  );
  // Exported menu link: primary-links:staff
  $menu_links['primary-links:staff'] = array(
    'menu_name' => 'primary-links',
    'link_path' => 'staff',
    'router_path' => 'staff',
    'link_title' => 'Staff',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Articles');
  t('Contact');
  t('Issues');
  t('Partner Sites');
  t('Staff');


  return $menu_links;
}
