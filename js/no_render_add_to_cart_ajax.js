(function ($) {
  $(window).load(function(){
    $('.no-render-add-to-cart').each(function(){
      var settings = {
        url : '/no-render-add/ajax',
        event: 'click'
      };
      new Drupal.ajax(false, $(this).find('input[type="submit"]').get(0), settings);
    });
  });
})(jQuery);
