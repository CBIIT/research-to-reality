<?php
/* 
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */

  	print drupal_render($form['name']);
    print drupal_render($form['pass']);

?>

<?php 
    print drupal_render($form['form_build_id']);
    print drupal_render($form['form_id']);
    print drupal_render($form['actions']);
?>

<div class="user-login-links">
  <div><a href="/user/password">Forgot your password?</a></div>
  <div><a href="/user/register">Need to sign up?</a></div>
</div>