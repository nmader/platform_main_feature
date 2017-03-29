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
  $fe_block_boxes->info = 'Footer Copyright';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'footer_copyright';
  $fe_block_boxes->body = 'Copyright © 2016 California State Library, All Right Reserved
State of California, Edmund G. Brown Jr., Governor';

  $export['footer_copyright'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Social media Footer';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'social_media_footer';
  $fe_block_boxes->body = '<div class="social-media-fontello--icons">
<div><a href="http://www.facebook.com" title="Visit us on Facebook"><i class="icon-facebook-squared"></i></a></div>
<div><a href="http://www.facebook.com" title="Visit us on Twitter"><i class="icon-twitter-squared"></i></a></div>
<div><a href="http://www.facebook.com" title="Visit us on YouTube"><i class="icon-youtube-squared"></i></a></div>
<div><a href="http://www.facebook.com" title="Visit us on Pinterest"><i class="icon-pinterest-squared"></i></a></div>
<div><a href="http://www.facebook.com" title="Visit us on Tumblr"><i class="icon-tumblr-squared"></i></a></div>
<div><a href="http://www.facebook.com" title="Visit us on Instagram"><i class="icon-instagram"></i></a></div>
</div>';

  $export['social_media_footer'] = $fe_block_boxes;

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
