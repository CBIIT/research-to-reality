<?php
/* 
 * Cyber Seminar Panel Layout
 */
?>


<div class="cyberseminar-node" <?php !empty($css_id) ? print 'id="' . $css_id . '"' : ''; ?> >

  <div class="top-row">
    <div class="content"><?php print $content['top']; ?></div>
  </div>

  <div class="left-side">
    <div class="left-column">
      <div class="content"><?php print $content['left']; ?></div>
    </div>
  </div>

  <div class="right-side">
    <div class="right-column">
        <div class="content"><?php print $content['right']; ?></div>
      </div>

  </div>
</div>