<?php
/**
 * @file
 * bos_vocabulary_massachusetts_general_law.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function bos_vocabulary_massachusetts_general_law_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
