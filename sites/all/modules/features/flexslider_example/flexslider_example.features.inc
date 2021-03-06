<?php
/**
 * @file
 * flexslider_example.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function flexslider_example_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "flexslider" && $api == "flexslider_default_preset") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function flexslider_example_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function flexslider_example_node_info() {
  $items = array(
    'flexslider_example' => array(
      'name' => t('FlexSlider Example'),
      'base' => 'node_content',
      'description' => t('Used for generating example FlexSlider implementations'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
