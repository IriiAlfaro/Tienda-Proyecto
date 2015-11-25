<?php
/**
 * @file
 * flexslider_example.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function flexslider_example_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance:
  // 'node-flexslider_example-field_flexslider_example_image'
  $field_instances['node-flexslider_example-field_flexslider_example_image'] = array(
    'bundle' => 'flexslider_example',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_flexslider_example_image',
    'label' => 'FlexSlider Example Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => 'flexslider_example',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => -4,
    ),
  );

  // Exported field_instance:
  // 'node-flexslider_example-field_flexslider_example_slidesh'
  $field_instances['node-flexslider_example-field_flexslider_example_slidesh'] = array(
    'bundle' => 'flexslider_example',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'flexslider_fields',
        'settings' => array(
          'caption' => 1,
          'image_style' => '',
          'optionset' => 'flexslider_default_thumbnail_slider',
        ),
        'type' => 'flexslider',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_flexslider_example_slidesh',
    'label' => 'FlexSlider Example Slideshow',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => 'flexslider_example',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => -3,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('FlexSlider Example Image');
  t('FlexSlider Example Slideshow');

  return $field_instances;
}
