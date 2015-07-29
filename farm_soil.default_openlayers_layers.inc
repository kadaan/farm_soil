<?php
/**
 * @file
 * farm_soil.default_openlayers_layers.inc
 */

/**
 * Implements hook_default_openlayers_layers().
 */
function farm_soil_default_openlayers_layers() {
  $export = array();

  $ol_layer = new stdClass();
  $ol_layer->disabled = FALSE; /* Edit this to true to make a default ol_layer disabled initially */
  $ol_layer->api_version = 1;
  $ol_layer->machine_name = 'farm_soil_layer_group';
  $ol_layer->name = 'Farm Soil Layer Group';
  $ol_layer->description = '';
  $ol_layer->factory_service = 'openlayers.Layer:Group';
  $ol_layer->options = array(
    'source' => '',
    'visible' => 1,
    'grouptitle' => 'Soil layers',
    'grouplayers' => array(
      0 => 'farm_soil_layer_nrcs_soil_survey',
    ),
  );
  $export['farm_soil_layer_group'] = $ol_layer;

  $ol_layer = new stdClass();
  $ol_layer->disabled = FALSE; /* Edit this to true to make a default ol_layer disabled initially */
  $ol_layer->api_version = 1;
  $ol_layer->machine_name = 'farm_soil_layer_nrcs_soil_survey';
  $ol_layer->name = 'Farm Soil: NRCS Soil Survey';
  $ol_layer->description = '';
  $ol_layer->factory_service = 'openlayers.Layer:Tile';
  $ol_layer->options = array(
    'visible' => 1,
    'source' => 'farm_soil_source_nrcs_soil_survey',
    'opacity' => '1',
    'zoomOffset' => '0',
    'wrapDateLine' => 0,
  );
  $export['farm_soil_layer_nrcs_soil_survey'] = $ol_layer;

  return $export;
}