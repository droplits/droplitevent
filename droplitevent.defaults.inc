<?php

/**
 * Helper to implementation of hook_content_default_fields().
 */
function _droplitevent_content_default_fields() {
  $fields = array();

  // Exported field: field_date_time
  $fields[] = array(
    'field_name' => 'field_date_time',
    'type_name' => 'event',
    'display_settings' => array(
      'weight' => '-4',
      'parent' => '',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'date',
    'required' => '0',
    'multiple' => '1',
    'module' => 'date',
    'active' => '1',
    'granularity' => array(
      'year' => 'year',
      'month' => 'month',
      'day' => 'day',
      'hour' => 'hour',
      'minute' => 'minute',
    ),
    'timezone_db' => 'UTC',
    'tz_handling' => 'none',
    'todate' => 'optional',
    'repeat' => 1,
    'repeat_collapsed' => '1',
    'default_format' => 'medium',
    'widget' => array(
      'default_value' => 'now',
      'default_value_code' => '',
      'default_value2' => 'blank',
      'default_value_code2' => '',
      'input_format' => 'M j Y - g:i:sa',
      'input_format_custom' => '',
      'increment' => '1',
      'text_parts' => '',
      'year_range' => '-3:+3',
      'label_position' => 'above',
      'label' => 'Date & Time',
      'weight' => '-4',
      'description' => '',
      'type' => 'date_popup_repeat',
      'module' => 'date',
    ),
  );

  // Exported field: field_front_page_description
  $fields[] = array(
    'field_name' => 'field_front_page_description',
    'type_name' => 'event',
    'display_settings' => array(
      'weight' => '-3',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '1',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => '2',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_front_page_description][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Front Page Description',
      'weight' => '-1',
      'description' => '',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Translatables
  array(
    t('Date & Time'),
    t('Event Categories'),
    t('Front Page Description'),
  );

  return $fields;
}

/**
 * Helper to implementation of hook_context_default_contexts().
 */
function _droplitevent_context_default_contexts() {
  $export = array();
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'events';
  $context->description = '';
  $context->tag = 'events';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'event' => 'event',
      ),
      'options' => array(
        'node_form' => 0,
      ),
    ),
    'views' => array(
      'values' => array(
        'events:page_1' => 'events:page_1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-events-block_1' => array(
          'module' => 'views',
          'delta' => 'events-block_1',
          'region' => 'right',
          'weight' => 0,
        ),
      ),
      'layout' => 'sidebar',
    ),
    'theme' => array(
      'title' => 'Section Title Variable for display',
      'subtitle' => 'Section Subtitle variable for display in page.tpl.php',
      'class' => 'event-section-class',
    ),
  );

  $export['events'] = $context;
  return $export;
}

/**
 * Helper to implementation of hook_ctools_plugin_api().
 */
function _droplitevent_ctools_plugin_api() {
  $args = func_get_args();
  $module = array_shift($args);
  $api = array_shift($args);
  if ($module == "context" && $api == "context") {
    return array("version" => 3);
  }
  else if ($module == "system" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Helper to implementation of hook_user_default_permissions().
 */
function _droplitevent_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer date tools
  $permissions[] = array(
    'name' => 'administer date tools',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: create event content
  $permissions[] = array(
    'name' => 'create event content',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: delete any event content
  $permissions[] = array(
    'name' => 'delete any event content',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: delete own event content
  $permissions[] = array(
    'name' => 'delete own event content',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: edit any event content
  $permissions[] = array(
    'name' => 'edit any event content',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: edit own event content
  $permissions[] = array(
    'name' => 'edit own event content',
    'roles' => array(
      '0' => 'admin',
    ),
  );

  // Exported permission: view date repeats
  $permissions[] = array(
    'name' => 'view date repeats',
    'roles' => array(
      '0' => 'admin',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
    ),
  );

  return $permissions;
}

/**
 * Helper to implementation of hook_strongarm().
 */
function _droplitevent_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'calendar_date_link_event';
  $strongarm->value = 'calendar';

  $export['calendar_date_link_event'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_event';
  $strongarm->value = array(
    'title' => '-5',
    'body_field' => '0',
    'revision_information' => '4',
    'menu' => '3',
    'taxonomy' => '-2',
    'path' => '1',
    'print' => '2',
  );

  $export['content_extra_weights_event'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date:event:full:field_date_time_fromto';
  $strongarm->value = 'both';

  $export['date:event:full:field_date_time_fromto'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date:event:full:field_date_time_multiple_from';
  $strongarm->value = '';

  $export['date:event:full:field_date_time_multiple_from'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date:event:full:field_date_time_multiple_number';
  $strongarm->value = '';

  $export['date:event:full:field_date_time_multiple_number'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date:event:full:field_date_time_multiple_to';
  $strongarm->value = '';

  $export['date:event:full:field_date_time_multiple_to'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date:event:full:field_date_time_show_repeat_rule';
  $strongarm->value = 'show';

  $export['date:event:full:field_date_time_show_repeat_rule'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date:event:teaser:field_date_time_fromto';
  $strongarm->value = 'both';

  $export['date:event:teaser:field_date_time_fromto'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date:event:teaser:field_date_time_multiple_from';
  $strongarm->value = '';

  $export['date:event:teaser:field_date_time_multiple_from'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date:event:teaser:field_date_time_multiple_number';
  $strongarm->value = '';

  $export['date:event:teaser:field_date_time_multiple_number'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date:event:teaser:field_date_time_multiple_to';
  $strongarm->value = '';

  $export['date:event:teaser:field_date_time_multiple_to'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date:event:teaser:field_date_time_show_repeat_rule';
  $strongarm->value = 'show';

  $export['date:event:teaser:field_date_time_show_repeat_rule'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_default_timezone_name';
  $strongarm->value = 'America/Chicago';

  $export['date_default_timezone_name'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'enable_revisions_page_event';
  $strongarm->value = 1;

  $export['enable_revisions_page_event'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_event';
  $strongarm->value = array(
    '0' => 'status',
  );

  $export['node_options_event'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'print_display_comment_event';
  $strongarm->value = 0;

  $export['print_display_comment_event'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'print_display_event';
  $strongarm->value = 1;

  $export['print_display_event'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'print_display_urllist_event';
  $strongarm->value = 1;

  $export['print_display_urllist_event'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'print_mail_display_comment_event';
  $strongarm->value = 0;

  $export['print_mail_display_comment_event'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'print_mail_display_event';
  $strongarm->value = 1;

  $export['print_mail_display_event'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'print_mail_display_urllist_event';
  $strongarm->value = 1;

  $export['print_mail_display_urllist_event'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'show_diff_inline_event';
  $strongarm->value = 0;

  $export['show_diff_inline_event'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'show_preview_changes_event';
  $strongarm->value = 0;

  $export['show_preview_changes_event'] = $strongarm;
  return $export;
}
