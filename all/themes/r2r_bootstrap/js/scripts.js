(function ($) {
	'use strict';

	// Make user accept terms before logging in.
  	if ($('body').hasClass('page-user-login')) {
  		$('#block-system-main').hide();
		$('<a class="btn" id="login-terms-agree">I AGREE</a>').appendTo('#block-block-41');
		$('#login-terms-agree').click(function() {
			$('#block-block-41').hide();
			$('#block-system-main').show();
		});
	}

  	// Keep referring URL for redirection when user clicks login link.
  	$('a').each(function() {
  		if ($(this).attr('href') == '/user-login' || $(this).attr('href') == '/user') {
  			$(this).attr('href', $(this).attr('href') + '?destination=' + window.location.pathname);
		}
	});
  	// Open all external links in new window.
  	$("a[href^='http']").attr('target','_blank');
  	// Navbar menu items with children; remove Bootstrap click action to expand.
  	$('ul.navbar-nav li.dropdown a').each(function() {
  		$(this).removeAttr('class').removeAttr('data-toggle');
  		$(this).parent().find('ul').removeClass('dropdown-menu');
	});
  	// Change <ol> starting number on views pager.
	var getUrlParameter = function getUrlParameter(sParam) {
		var sPageURL = decodeURIComponent(window.location.search.substring(1)),
			sURLVariables = sPageURL.split('&'),
			sParameterName,
			i;

		for (i = 0; i < sURLVariables.length; i++) {
		  sParameterName = sURLVariables[i].split('=');

		  if (sParameterName[0] === sParam) {
			return sParameterName[1] === undefined ? true : sParameterName[1];
		  }
		}
	};
	var page = getUrlParameter('page');
	if (page !== 'undefined' && $('body').hasClass('page-search')) {
		var start = (page * 10) + 1;
		$('ol.search-results').attr('start', start);
	}

// add ID to Views Filter div so it can be expand/collapse	
	$('#discussions-filter .view-filters').attr('id', 'filter-box');
	$('.view-id-discussions_new .view-filters').addClass('collapse');
// Toggle +/- on the expand collapse
	$('#expand-btn a').click(function() {
		$(this).closest('#expand-btn').find('.glyphicon').toggleClass('glyphicon-remove');
	});
// Smooth scroll back to top
	$('.scrollToTop').click(function(){
		$('body,html,document').animate({scrollTop:0}, 'slow');
		return false;
	});
// Hamburger menu to X and Menu text change to Close
	$('.navbar-toggle').on('click', function () {
		$(this).toggleClass('active');
		($('.nav-menu-title').text() === 'MENU') ? $('.nav-menu-title').text('CLOSE') : $('.nav-menu-title').text('MENU');
	});
// Search Clear Field
	$('.clearField').click(function(){
        $('#edit-search-block-form--2').val('');
		$('.searchField-Tablet #edit-search-block-form--2').val('');
    });
// Stats Counter	
	$('.counter').counterUp({
        delay: 10,
        time: 1000
    });
// Nav becomes fixed to top after scrolling past header​
	$(function() {
		$('#r2r-nav-fixed').affix({
        	offset: { top: $('#r2r-nav-fixed').offset().top }
    	});
	});
// Learning Communities Box Heights
//	var $window = $(window);
//	function checkWidth() {
//		var windowsize = $window.width();
//		$('.lc-text').css('height','auto');	
//		if (windowsize > 992) {
//			var maxHeight = -1;
//			$('.lc-text').each(function() {
//				if ($(this).height() > maxHeight) {
//					maxHeight = $(this).height();
//				}
//			});
//			$('.lc-text').height(maxHeight);
//		} else {
//			$('.lc-text').css('height','auto');	
//		}
//	}
	// Execute on load
//  checkWidth();
    // Bind event listener
//  $(window).resize(checkWidth);	
	
// Datepicker
	var fullmonth_array = $.datepicker.regional[""].monthNames;
	$('input[name="field_event_date_value[max][date]"]').datepicker(
	{
	   changeYear               : true,
   	   changeMonth              : true,
	   monthNamesShort          : fullmonth_array
	});
	$('input[name="field_event_date_value[min][date]"]').datepicker(
	{
	   changeYear               : true,
   	   changeMonth              : true,
	   monthNamesShort          : fullmonth_array
	});
// Hack fix to get the reset button to work
    $(document).delegate('.views-reset-button .form-submit', 'click', function (event) {
      window.location = window.location.href.split('?')[0];
      return false;
    });
}(jQuery));