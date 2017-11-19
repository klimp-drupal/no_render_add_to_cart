<form id = "commerce-add-to-cart-<?php print $product_id; ?>" action="/no-render-add/nojs" name="commerce_add_link" method="post" class = "no-render-add-to-cart">
  <input type="hidden" name="product_id" value="<?php print $product_id; ?>">
  <div class = "form-item-quantity">
    <input class ="form-text form-control cart-link-quantity" name="quantity"  type ="text" autocomplete="off" value ="1" size ="1">
  </div>
   <input id = "commerce-add-to-cart-submit-<?php print $product_id; ?>" class = "" name="Submit" type=submit value="В корзину">
</form>