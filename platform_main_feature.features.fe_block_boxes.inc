<?php
/**
 * @file
 * platform_main_feature.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function platform_main_feature_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Links to additional collection resources.';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'from_the_collection_block';
  $fe_block_boxes->body = '<div class="block archive-link">
  <a href="#fieldset-metadata" data-scroll="">
    <i class="icon icon-stats"></i>
    <span class="link-text">From the Collection</span>
</a>
</div>';

  $export['from_the_collection_block'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Go to related content on an object view page';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'related_content';
  $fe_block_boxes->body = '<div class="block related-link">
  <a href="#fieldset-metadata" data-scroll="">
    <i class="icon icon-stats"></i>
    <span class="link-text">VIEW RELATED CONTENT</span>
</a>
</div>';

  $export['related_content'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Links to career stats on the page';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'stats_overview';
  $fe_block_boxes->body = '<div class="block stats-overview">
  <a href="#fieldset-metadata" data-scroll="">
    <i class="icon icon-stats"></i>
    <span class="link-text">See career statistics</span>
</a>
</div>';

  $export['stats_overview'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Submit to collection Anonymous';
  $fe_block_boxes->format = 'filtered_html';
  $fe_block_boxes->machine_name = 'submit_to_collection_anonymous';
  $fe_block_boxes->body = '<a href="/user">|+| Submit to a collection</a>';

  $export['submit_to_collection_anonymous'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Submit to collection box';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'submit_to_collection_box';
  $fe_block_boxes->body = '<a href="/islandora/object/islandora%3Aroot">|+| Submit to a collection</a>';

  $export['submit_to_collection_box'] = $fe_block_boxes;

  return $export;
}
