<?php
/**
 * @file
 * Default theme implementation to display the basic html structure of a single
 * Drupal page.
 */
?><!doctype html>
<html lang="<?php print $language->language; ?>" dir="<?php print $language->dir; ?>"<?php print $rdf_namespaces;?>>
<head profile="<?php print $grddl_profile; ?>">
  <meta charset="UTF-8">
  <meta http-equiv="X-UA-Compatible" content="IE=edge">
  <meta name="viewport" content="width=device-width, initial-scale=1">
  <?php print $head; ?>
  <title><?php print $head_title; ?></title>
  
  <link rel="icon" type="image/png" href="/sites/all/themes/r2r_bootstrap/favicon.png">
  <link rel="apple-touch-icon" href="/sites/all/themes/r2r_bootstrap/apple-touch-icon-57x57.png"> 
  <link rel="apple-touch-icon-precomposed" sizes="57x57" href="/sites/all/themes/r2r_bootstrap/apple-touch-icon-57x57.png">
  <link rel="apple-touch-icon-precomposed" sizes="72x72" href="/sites/all/themes/r2r_bootstrap/apple-touch-icon-72x72.png">
  <link rel="apple-touch-icon-precomposed" sizes="114x114" href="/sites/all/themes/r2r_bootstrap/apple-touch-icon-114x114.png">
  <link rel="apple-touch-icon-precomposed" sizes="152x152" href="/sites/all/themes/r2r_bootstrap/apple-touch-icon-152x152.png">
  <link rel="apple-touch-icon-precomposed" sizes="180x180" href="/sites/all/themes/r2r_bootstrap/apple-touch-icon-180x180.png">
  
  <!-- Google Font Source Sans Pro -->
  <link href="https://fonts.googleapis.com/css?family=Source+Sans+Pro:300,400,600,700,300italic,400italic,600italic,700italic" rel="stylesheet" type="text/css">
  
  <?php print $styles; ?>
  <!-- HTML5 shim and Respond.js for IE8 support of HTML5 elements and media queries -->
  <!-- WARNING: Respond.js doesn't work if you view the page via file:// -->
  <!--[if lt IE 9]>
    <script src="https://oss.maxcdn.com/html5shiv/3.7.2/html5shiv.min.js"></script>
    <script src="https://oss.maxcdn.com/respond/1.4.2/respond.min.js"></script>
  <![endif]-->
  <?php print $scripts; ?>
  
</head>
<body class="<?php print $classes; ?>" <?php print $attributes;?>>
<!-- SkipNav of Site -->
<a id="skipNav" class="sr-only sr-only-focusable" href="#main-content">
	<div class="container">
		<span class="skiplink-text">Skip to main content</span>
	</div> <!-- close container -->
</a>
<!-- End SkipNav of Site -->
<!-- begin back to top button -->
<div class="backtotop">
    <a href="#" class="scrollToTop"><div class="btt-box">
        <div class="up-arrow"></div>
		<span class="sr-only">Back to Top</span>
    </div></a>
</div> 
<!-- end back to top button -->
  <?php print $page_top; ?>
  <?php print $page; ?>
  <?php print $page_bottom; ?>
<!-- **** NCI Web Analytics  - DO NOT ALTER **** -->

<script type="text/javascript" src="https://static.cancer.gov/webanalytics/WA_DCCPS_PageLoad.js"></script>

<!-- **** End NCI Web Analytics Page **** -->
</body>
</html>
