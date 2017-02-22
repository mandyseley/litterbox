<?php
/**
 * @file
 * yaycomic.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function yaycomic_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function yaycomic_node_info() {
  $items = array(
    'yaycomic' => array(
      'name' => t('Comic'),
      'base' => 'node_content',
      'description' => t('A single comic strip.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
