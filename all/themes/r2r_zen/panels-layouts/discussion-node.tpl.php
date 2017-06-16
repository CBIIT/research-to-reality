<?php
/*
 * Discussion Node Panel Layout
 */
?>


<div class="discussion-node" <?php !empty($css_id) ? print 'id="' . $css_id . '"' : ''; ?> >

  <div class="top-row">
    <div class="content"><?php print $content['top']; ?></div>
  </div>

  <div class="left-side">
    <div class="left-column">
      <div class="content"><?php print $content['left']; ?></div>
    </div>
  </div>

 

  <div class="right-side">

     <div class="right-side-header">
    <div class="right-row-top">
      <div class="content"><?php print $content['right_t']; ?></div>
    </div>
  </div>

    <div class="right-row-bottom">
      <div class="content"><?php print $content['right_b']; ?></div>
    </div>
  </div>
</div>