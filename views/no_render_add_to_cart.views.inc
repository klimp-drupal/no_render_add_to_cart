<?php
/**
 * @file
 * No render 'Add to cart' form module Views hooks.
 */

/**
* Implements hook_views_data().
*/
function no_render_add_to_cart_views_data() {
  $data = array();
  $data['commerce_product']['no_render_add_to_cart'] = array(
    'title' => t('Non FORM-API "Add to cart" form'),
    'help' => t('No render "Add to cart" form'),
    'field' => array(
      'handler' => 'no_render_add_to_cart_field_handler',
      'click sortable' => FALSE,
    ),
  );
  return $data;
}
