<?php
/**
 * @file
 * Template for single column panel layout.
 *
 * Variables:
 * - $id: An optional CSS id to use for the layout.
 * - $content: An array of content, each item in the array is keyed to one
 *   panel of the layout.
 *
 */
?>
<!-- Content -->
<div class="row">
	<!-- Left Side, Main Content -->
	<div class="col-lg-12">
		<?php print $content['maincontent']; ?>
	</div> <!-- close col-lg-12 -->
</div> <!-- close row -->