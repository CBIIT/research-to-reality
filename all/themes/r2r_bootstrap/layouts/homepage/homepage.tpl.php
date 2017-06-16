<?php
/**
 * @file
 * Template for homepage panel layout.
 *
 * Variables:
 * - $id: An optional CSS id to use for the layout.
 * - $content: An array of content, each item in the array is keyed to one
 *   panel of the layout.
 *
 */
?>
<div class="homepage-boxes-bg">
  	<div class="container">	
		<!-- What is R2R -->
		<!-- Recent Discussions -->
		<div class="row">
			<div class="col-md-12 col-lg-4">
				<div class="homepage-box what-is-new-container">
					<?php print $content['whatisnew']; ?>
				</div> <!-- close homepage-box -->
			</div> <!-- close col-md-12 col-lg-4 -->
			<div class="col-md-12 col-lg-8">
				<div class="homepage-box rd-container">
					<h2>Recent Discussions</h2>
					<?php print $content['recentdiscussions']; ?>
				</div> <!-- close homepage-box rd-container -->
			</div> <!-- close col-md-12 col-lg-8 -->	
		</div> <!-- close row -->
		
		<!-- Events and Webinars -->
		<div class="row">
			<div class="col-lg-12">
				<div class="homepage-box">
					<h2>R2R Cyber Seminars and Events</h2>
					<div class="cs-events row">
						<div class="col-md-6 col-lg-8">
							<div class="row">
								<div class="col-lg-6">
									<div class="cyberseminars-box">
									<span class="cal-key-diamond"></span>
									<?php print $content['cyberseminars']; ?>
									</div> <!-- close cs-events-box -->
								</div> <!-- close col-md-4" --> 
								
								<div class="col-lg-6">
									<div class="events-box">
									<span class="cal-key-circle"></span>
									<?php print $content['events']; ?>	
									</div> <!-- close events-box -->
								</div> <!-- close col-md-4" -->
							</div> <!-- close row -->
						</div> <!-- close col-md-6 col-lg-8 -->
						
						<div class="col-md-6 col-lg-4">
						<?php print $content['calendar']; ?>
						</div> <!-- close col-md-6 col-lg-4" -->
					</div> <!-- close row -->
				</div> <!-- close homepage-box -->
			</div> <!-- close col-lg-12 -->
		</div> <!-- close row -->
		
		<!-- Feature Partners -->
		<div class="row">
			<div class="col-lg-12">
				<div class="homepage-box">
					<h2>Featured Partner</h2>
					<div class="feature-partner row">
						<div class="col-md-6 col-lg-8">
							<div class="row">
								<div class="col-lg-6">
								<?php print $content['featuredpartner']; ?>
								</div> <!-- close col-md-4" --> 
								<div class="col-lg-6">
									<div class="bio-box">
									<?php print $content['featuredpartner-intro']; ?>	
									</div> <!-- close bio-box -->
								</div> <!-- close col-md-4" -->
							</div> <!-- close row -->
						</div> <!-- close col-md-6 col-lg-8 -->
						
						<div class="col-md-6 col-lg-4">
							<div class="prev-fp">
								<h3>Previously Featured Partners</h3>
								<?php print $content['featuredpartner-archive']; ?>
							</div> <!-- close prev-fp -->
						</div> <!-- close col-md-6 col-lg-4" -->
					</div> <!-- close row -->
				</div> <!-- close homepage-box -->
			</div> <!-- close col-lg-12 -->
		</div> <!-- close row -->
	</div> <!-- close container -->
</div> <!-- close homepage-boxes-bg -->
