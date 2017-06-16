<?php
/* 
 * Two Column (70/30) Panel Layout
 */
?>


<div class="two-col-70-30" <?php !empty($css_id) ? print 'id="' . $css_id . '"' : ''; ?> >
    <div class="left-col">
      <div class="left-col-content"><?php print $content['left']; ?></div>
    </div>
    <div class="right-col">
        <div class="right-col-content"><?php print $content['right']; ?></div>
    </div>
</div>