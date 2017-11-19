<?php
/**
* @file
* Definition of no_render_add_to_cart_field_handler.
*/

/**
* Description of what my handler does.
*/
class no_render_add_to_cart_field_handler extends views_handler_field {

  /**
   * Add some required fields needed on render().
   */
  function construct() {
    parent::construct();
  }

  /**
  * Loads additional fields.
  */
  function query() {
  }

  /**
  * Default options form.
  */
  function option_definition() {
    $options = parent::option_definition();
    return $options;
  }

  /**
  * Creates the form item for the options added.
  */
  function options_form(&$form, &$form_state) {
    parent::options_form($form, $form_state);
  }

  /**
  * Renders the field handler.
  */
  function render($values){
    if(!empty($values->product_id)){
      if (NO_RENDER_ADD_TO_CART_AJAX) {
        drupal_add_library('system', 'drupal.ajax');
        drupal_add_library('system', 'jquery.form');
        drupal_add_js(drupal_get_path('module', 'no_render_add_to_cart').'/js/no_render_add_to_cart_ajax.js', 'file');
      }
      $vars = array(
        'product_id' => $values->product_id,
      );
      return theme('no_render_add_to_cart_form', $vars);
    } else return '';
  }
}