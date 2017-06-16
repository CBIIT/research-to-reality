<?php
/**
 * @file
 * Template for right sidebar panel layout.
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
	<div class="col-md-8">
		<?php print $content['maincontent']; ?>
	</div> <!-- close col-md-8 -->
	<!-- Right Side, Sidebar Content -->
	<div class="col-md-4">
		<?php print $content['rightsidebar']; ?>
	</div> <!-- close col-md-4 -->
</div> <!-- close row -->