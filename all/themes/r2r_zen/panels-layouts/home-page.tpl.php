<?php
/* 
 * Home Page Panel Layout
 */
?>


<div class="home-page" <?php !empty($css_id) ? print 'id="' . $css_id . '"' : ''; ?> >
  <div class="top-row">
    <div class="content"><?php print $content['top_row'];?></div>
  </div>
 
  <div class="left-side">
      <div class="content"><?php print $content['left']; ?></div>
  </div>

  <div class="middle">
      <div class="content"><?php print $content['middle']; ?></div>
    </div>

  <div class="right-side">
      <div class="content"><?php print $content['right']; ?></div>
  </div>
</div>