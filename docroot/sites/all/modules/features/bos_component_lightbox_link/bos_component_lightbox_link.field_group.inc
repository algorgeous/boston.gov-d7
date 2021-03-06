<?php
/**
 * @file
 * bos_component_lightbox_link.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function bos_component_lightbox_link_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_link_info|paragraphs_item|lightbox_link|form';
  $field_group->group_name = 'group_link_info';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'lightbox_link';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Link Info',
    'weight' => '0',
    'children' => array(
      0 => 'field_lightbox_link',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-link-info field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_link_info|paragraphs_item|lightbox_link|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Link Info');

  return $field_groups;
}
