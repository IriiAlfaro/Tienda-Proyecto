(function ($) {
  jQuery(document).ready(function($) {

    $("#block-system-main-menu > h2").click(function() {
      $('#block-system-main-menu .content > .menu').toggleClass('show-menu');
    });

    $(".expanded > a").click(function(event) {
      event.preventDefault();
      $('.expanded ul').toggleClass('show-menu');
    });

  });
}(jQuery));
