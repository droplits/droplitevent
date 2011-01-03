<?php

/**
 * Helper to implementation of hook_node_info().
 */
function _droplitevent_node_info() {
  $items = array(
    'event' => array(
      'name' => t('Event'),
      'module' => 'features',
      'description' => t('Create an Event'),
      'has_title' => '1',
      'title_label' => t('Event Title'),
      'has_body' => '1',
      'body_label' => t('Event Description'),
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}
