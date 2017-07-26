<?php
/**
 * @file
 * Default theme implementation to display a single Drupal page.
 *
 * The doctype, html, head and body tags are not in this template. Instead they
 * can be found in the html.tpl.php template in this directory.
 *
 */
?>
<header>
  <div class="container">
    <div class="row">
    <div class="nci-logo-row">
      <div class="col-lg-12">
        <?php if (!empty($page['NCIBanner'])): ?>
          <?php print render($page['NCIBanner']); ?>
        <?php endif; ?>
      </div> <!-- close col-lg-12 -->
    </div> <!-- close nci-logo-row -->
    </div> <!-- close row -->
  </div> <!-- close container -->
  <div class="shadow"></div>
  <div class="container">
    <div class="row">
    <div class="r2r-logo-row">
      <div class="col-sm-8 col-md-6">
        <?php if (!empty($page['R2RBanner'])): ?>
          <?php print render($page['R2RBanner']); ?>
        <?php endif; ?>
      </div> <!-- close col-sm-8 col-md-6 -->
			<div class="col-sm-4 col-md-6">
				<?php if (!empty($page['R2RMemberAccess'])): ?>
          			<?php print render($page['R2RMemberAccess']); ?>
        		<?php endif; ?>
			</div> <!-- close col-sm-6 -->
		</div> <!-- close r2r-logo-row -->
		</div> <!-- close row -->
	</div> <!-- close container -->
</header>

<div class="wrapper">

<!-- Hero Image -->
<?php if (!empty($page['HeroImage'])): ?>
  <?php print render($page['HeroImage']); ?>
<?php endif; ?>

<!-- Navigation -->
<section class="navigation-band-container" id="r2r-nav-fixed">
	<div class="navigation-band">
	<div class="container">
		<div class="row">
			<div id="r2r-nav">
				<div class="navbar-header">
					<button class="navbar-toggle collapsed" type="button" data-toggle="collapse" data-target="#navbar-responsive" aria-controls="navbar-responsive" aria-expanded="false">
						<div class="nav-menu-title">MENU</div>
						<div class="nav-hamburger">
							<span class="sr-only">Toggle navigation</span>
							<span class="icon-bar"></span>
							<span class="icon-bar"></span>
							<span class="icon-bar"></span>
						</div>
					</button>
				</div> <!-- close navbar-header -->
				<?php if (!empty($primary_nav) || !empty($secondary_nav) || !empty($page['navigation'])): ?>
				<nav id="navbar-responsive" class="navbar-collapse collapse" role="navigation" aria-expanded="false">
					<?php if (!empty($primary_nav)): ?>
						<?php print render($primary_nav); ?>
				  	<?php endif; ?>
				  	<?php if (!empty($secondary_nav)): ?>
						<?php print render($secondary_nav); ?>
				  	<?php endif; ?>
				  	<?php if (!empty($page['navigation'])): ?>
						<?php print render($page['navigation']); ?>
				  	<?php endif; ?>
					<div class="searchField form-group hidden-sm hidden-md">
            			<?php //$search_form = drupal_get_form('search_block_form') ?>
            			<?php //print render($search_form); ?>
          			</div>
				</nav>
				<?php endif; ?>
				<div class="searchField searchField-Tablet form-group visible-sm visible-md">
          			<?php print render($search_form); ?>
        		</div>

			</div> <!-- close r2r-nav -->
		</div> <!-- close row -->
	</div> <!-- close container -->
	</div> <!-- close naviation-band -->
</section> <!-- close navigation-band-container -->

<main id="main-content" class="container-bg" tabindex="-1">
	<div class="container">
		<div class="row">
			<div class="col-lg-12">
                <div class="container-box">
                    <?php $query = $page['content']['system_main']['contextual_links']['#links'][0]['query']['destination']; ?>
                    <?php if ((!empty($tabs)) && !(strpos($query, 'learning-communities') == 0 && strpos($query,'dashboard') > 0)): ?>
                    <?php print render($tabs); ?>
                    <?php endif; ?>
                    <?php if ($title): ?>
                        <h1><?php print $title; ?></h1>
                    <?php endif; ?>
                    <?php print render($page['content']); ?>
                </div> <!-- close container-box -->
			</div> <!-- close col-lg-12 -->
		</div> <!-- close row -->
	</div> <!-- close container -->
</main> <!-- close main-content -->

</div> <!-- close wrapper -->

<footer>
	<div class="container">
		<div class="row">
			<div class="col-md-3">
				<div class="footer-logo">
					<?php if (!empty($page['footer_logo'])): ?>
          				<?php print render($page['footer_logo']); ?>
        			<?php endif; ?>
				</div> <!-- close footer-logo -->
			</div> <!-- close col-md-3 -->
			<div class="col-md-9">
				<div class="footer-sitemap">
					<?php if (!empty($page['footer_sitemap'])): ?>
          				<?php print render($page['footer_sitemap']); ?>
        			<?php endif; ?>
				</div> <!-- close footer-sitemap -->
			</div> <!-- close col-md-9 -->
		</div> <!-- close row -->
		<hr>
		<div class="row">
			<div class="col-md-4">
				<div class="footer-follow-us">
					<?php if (!empty($page['footer_socialmedia'])): ?>
          				<?php print render($page['footer_socialmedia']); ?>
        			<?php endif; ?>
				</div> <!-- close footer-follow-us -->
			</div> <!-- close col-md-4 -->
			<div class="col-md-3">
				<div class="footer-more-info">
					<?php if (!empty($page['footer_moreinfo'])): ?>
          				<?php print render($page['footer_moreinfo']); ?>
        			<?php endif; ?>
				</div> <!-- close footer-more-info -->
			</div> <!-- close col-md-3 -->
			<div class="col-md-5">
				<div class="footer-policies">
					<?php if (!empty($page['footer_policies'])): ?>
          				<?php print render($page['footer_policies']); ?>
        			<?php endif; ?>
				</div> <!-- close footer-policies -->
			</div> <!-- close col-md-5 -->
		</div> <!-- close row -->
	</div> <!-- close container -->
	<!-- Government Links -->
	<div class="bottom-band">
		<div class="container">
			<div class="row">
				<div class="col-md-12">
					<ul class="text-center">
						<li><a href="http://www.hhs.gov" target="_blank">U.S. Department of Health and Human Services</a></li>
						<li><a href="http://www.nih.gov" target="_blank">National Institute of Health</a></li>
						<li><a href="http://www.cancer.gov" target="_blank">National Cancer Institute</a></li>
						<li><a href="https://www.usa.gov" target="_blank">USA.gov</a></li>
					</ul>
				</div> <!-- close col-md-12 -->
			</div> <!-- close row -->
		</div> <!-- close container -->
	</div> <!-- close bottom-band -->
</footer>
<?php
	drupal_add_js("sites/all/themes/r2r_bootstrap/js/jquery.counterup.min.js",
	array(
	'type' => 'file',
	'scope' => 'footer',
	'weight' => 1));
	drupal_add_js("sites/all/themes/r2r_bootstrap/js/jquery.waypoints.min.js",
	array(
	'type' => 'file',
	'scope' => 'footer',
	'weight' => 2));
	drupal_add_js("sites/all/themes/r2r_bootstrap/js/jquery-ui-1.10.4.custom.min.js",
	array(
	'type' => 'file',
	'scope' => 'footer',
	'weight' => 3));
	drupal_add_js("sites/all/themes/r2r_bootstrap/js/scripts.js",
	array(
	'type' => 'file',
	'scope' => 'footer',
	'weight' => 4));
	drupal_add_js("sites/all/themes/r2r_bootstrap/js/autocomplete.js",
	array(
	'type' => 'file',
	'scope' => 'footer',
	'weight' => 5));
?>