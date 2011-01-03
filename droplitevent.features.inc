<?php

/**
 * Implementation of hook_content_default_fields().
 */
function droplitevent_content_default_fields() {
  module_load_include('inc', 'droplitevent', 'droplitevent.defaults');
  $args = func_get_args();
  return call_user_func_array('_droplitevent_content_default_fields', $args);
}

/**
 * Implementation of hook_context_default_contexts().
 */
function droplitevent_context_default_contexts() {
  module_load_include('inc', 'droplitevent', 'droplitevent.defaults');
  $args = func_get_args();
  return call_user_func_array('_droplitevent_context_default_contexts', $args);
}

/**
 * Implementation of hook_ctools_plugin_api().
 */
function droplitevent_ctools_plugin_api() {
  module_load_include('inc', 'droplitevent', 'droplitevent.defaults');
  $args = func_get_args();
  return call_user_func_array('_droplitevent_ctools_plugin_api', $args);
}

/**
 * Implementation of hook_node_info().
 */
function droplitevent_node_info() {
  module_load_include('inc', 'droplitevent', 'droplitevent.features.node');
  $args = func_get_args();
  return call_user_func_array('_droplitevent_node_info', $args);
}

/**
 * Implementation of hook_user_default_permissions().
 */
function droplitevent_user_default_permissions() {
  module_load_include('inc', 'droplitevent', 'droplitevent.defaults');
  $args = func_get_args();
  return call_user_func_array('_droplitevent_user_default_permissions', $args);
}

/**
 * Implementation of hook_strongarm().
 */
function droplitevent_strongarm() {
  module_load_include('inc', 'droplitevent', 'droplitevent.defaults');
  $args = func_get_args();
  return call_user_func_array('_droplitevent_strongarm', $args);
}

/**
 * Implementation of hook_views_default_views().
 */
function droplitevent_views_default_views() {
  module_load_include('inc', 'droplitevent', 'droplitevent.features.views');
  $args = func_get_args();
  return call_user_func_array('_droplitevent_views_default_views', $args);
}
