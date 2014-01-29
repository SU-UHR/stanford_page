<?php
/**
 * @file
 * stanford_page.features.field.inc
 */

/**
 * Implements hook_field_default_fields().
 */
function stanford_page_field_default_fields() {
  $fields = array();

  // Exported field: 'node-stanford_page-body'.
  $fields['node-stanford_page-body'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(
        0 => 'node',
      ),
      'field_name' => 'body',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'text_with_summary',
    ),
    'field_instance' => array(
      'bundle' => 'stanford_page',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '2',
        ),
        'teaser' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(
            'trim_length' => 600,
          ),
          'type' => 'text_summary_or_trimmed',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'body',
      'label' => 'Body',
      'required' => 0,
      'settings' => array(
        'display_summary' => 1,
        'text_processing' => '1',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'rows' => '20',
          'summary_rows' => 5,
        ),
        'type' => 'text_textarea_with_summary',
        'weight' => '2',
      ),
    ),
  );

  // Exported field: 'node-stanford_page-field_s_image_info'.
  $fields['node-stanford_page-field_s_image_info'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_s_image_info',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'field_collection',
      'settings' => array(
        'hide_blank_items' => TRUE,
        'path' => '',
      ),
      'translatable' => '0',
      'type' => 'field_collection',
    ),
    'field_instance' => array(
      'bundle' => 'stanford_page',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Select a featured image for the page and add an optional caption.',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'field_collection',
          'settings' => array(
            'add' => '',
            'delete' => '',
            'description' => 0,
            'edit' => '',
            'view_mode' => 'stanford_large_scaled',
          ),
          'type' => 'field_collection_view',
          'weight' => '5',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_s_image_info',
      'label' => 'Featured Image',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'field_collection',
        'settings' => array(),
        'type' => 'field_collection_embed',
        'weight' => '1',
      ),
    ),
  );

  // Exported field: 'node-stanford_page-field_s_page_file'.
  $fields['node-stanford_page-field_s_page_file'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_s_page_file',
      'foreign keys' => array(
        'fid' => array(
          'columns' => array(
            'fid' => 'fid',
          ),
          'table' => 'file_managed',
        ),
      ),
      'indexes' => array(
        'fid' => array(
          0 => 'fid',
        ),
      ),
      'locked' => '0',
      'module' => 'file',
      'settings' => array(
        'display_default' => 1,
        'display_field' => 1,
        'uri_scheme' => 'public',
      ),
      'translatable' => '0',
      'type' => 'file',
    ),
    'field_instance' => array(
      'bundle' => 'stanford_page',
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'file',
          'settings' => array(),
          'type' => 'file_default',
          'weight' => '3',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_s_page_file',
      'label' => 'File',
      'required' => 0,
      'settings' => array(
        'description_field' => 1,
        'file_directory' => '',
        'file_extensions' => 'txt pdf doc docx ppt pptx xls xlsx xml odt zip rtf',
        'max_filesize' => '',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'file',
        'settings' => array(
          'insert' => 1,
          'insert_absolute' => FALSE,
          'insert_class' => '',
          'insert_default' => 'auto',
          'insert_styles' => array(
            'auto' => 'auto',
            'image' => 0,
            'image_12-col-banner' => 0,
            'image_3-col-header' => 0,
            'image_3-col-well-header' => 0,
            'image_3-col-well-profile' => 0,
            'image_4-col-header' => 0,
            'image_6-col-banner' => 0,
            'image_6-col-header' => 0,
            'image_6-col-header-short' => 0,
            'image_8-col-banner' => 0,
            'image_9-col-banner' => 0,
            'image_icon' => 0,
            'image_large' => 0,
            'image_large-landscape' => 0,
            'image_large-profile' => 0,
            'image_large-square' => 0,
            'image_med-landscape' => 0,
            'image_med-profile' => 0,
            'image_med-square' => 0,
            'image_medium' => 0,
            'image_sm-landscape' => 0,
            'image_sm-square' => 0,
            'image_thmb-landscape' => 0,
            'image_thmb-profile' => 0,
            'image_thmb-square' => 0,
            'image_thumbnail' => 0,
            'link' => 0,
          ),
          'insert_width' => '',
          'progress_indicator' => 'throbber',
        ),
        'type' => 'file_generic',
        'weight' => '4',
      ),
    ),
  );

  // Exported field: 'node-stanford_page-field_s_page_image_insert'.
  $fields['node-stanford_page-field_s_page_image_insert'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_s_page_image_insert',
      'foreign keys' => array(
        'fid' => array(
          'columns' => array(
            'fid' => 'fid',
          ),
          'table' => 'file_managed',
        ),
      ),
      'indexes' => array(
        'fid' => array(
          0 => 'fid',
        ),
      ),
      'locked' => '0',
      'module' => 'image',
      'settings' => array(
        'default_image' => 0,
        'uri_scheme' => 'public',
      ),
      'translatable' => '0',
      'type' => 'image',
    ),
    'field_instance' => array(
      'bundle' => 'stanford_page',
      'deleted' => '0',
      'description' => 'Use this to Insert images into the text.',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '6',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_s_page_image_insert',
      'label' => 'Image insert',
      'required' => 0,
      'settings' => array(
        'alt_field' => 1,
        'default_image' => 0,
        'file_directory' => '',
        'file_extensions' => 'png gif jpg jpeg',
        'max_filesize' => '',
        'max_resolution' => '1200x1200',
        'min_resolution' => '',
        'title_field' => 1,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'image',
        'settings' => array(
          'insert' => 1,
          'insert_absolute' => FALSE,
          'insert_class' => '',
          'insert_default' => 'image_large-scaled',
          'insert_styles' => array(
            'auto' => 0,
            'image' => 'image',
            'image_12-col-banner' => 0,
            'image_3-col-header' => 0,
            'image_3-col-well-header' => 0,
            'image_3-col-well-profile' => 0,
            'image_4-col-header' => 0,
            'image_6-col-banner' => 0,
            'image_6-col-header' => 0,
            'image_6-col-header-short' => 0,
            'image_8-col-banner' => 0,
            'image_9-col-banner' => 0,
            'image_icon' => 0,
            'image_large' => 0,
            'image_large-landscape' => 0,
            'image_large-profile' => 0,
            'image_large-scaled' => 'image_large-scaled',
            'image_large-square' => 'image_large-square',
            'image_med-landscape' => 0,
            'image_med-landscape-scaled' => 0,
            'image_med-profile' => 0,
            'image_med-profile-scaled' => 0,
            'image_med-square' => 'image_med-square',
            'image_medium' => 0,
            'image_page-width' => 'image_page-width',
            'image_sm-landscape' => 0,
            'image_sm-square' => 'image_sm-square',
            'image_thmb-landscape' => 0,
            'image_thmb-profile' => 0,
            'image_thmb-square' => 0,
            'image_thumbnail' => 0,
            'link' => 0,
          ),
          'insert_width' => '',
          'preview_image_style' => 'thumbnail',
          'progress_indicator' => 'throbber',
        ),
        'type' => 'image_image',
        'weight' => '3',
      ),
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Body');
  t('Featured Image');
  t('File');
  t('Image insert');
  t('Select a featured image for the page and add an optional caption.');
  t('Use this to Insert images into the text.');

  return $fields;
}
