$(document).ready(function(){
  $("#header").mouseenter(function()
  {
    $(this).fadeOut("slow").fadeIn("slow");
  });
  
  // 
  $("#header").mouseenter(function()
  {
    $(this).fadeOut("slow").fadeIn("slow");
  });
  
  // #4
  // Mouseover/hover events for each input 
  $(".input").hover(function()
  {
    $(this).css({"background-color": "lightgreen", "color": "black"});
  },
  function()
  {
    $(this).css({"background-color": "DarkSlateGrey", "color": "white"});
  });
  
  $("#num1").click(function()
	{
      $("#span1").fadeOut(50).fadeIn(50).fadeOut(50).fadeIn(50);
	});
	$("#num2").click(function()
	{
      $("#span2").fadeOut(50).fadeIn(50).fadeOut(50).fadeIn(50);
	});

  // #8
  // Function adapted from http://jsfiddle.net/tKQFN/
  $('#name1, #name2, #tool, #vehicle, #corp, #flav, #num1, #num2').bind('keyup', function() {
    if(allFilled())
	{
	  var store = $("#name1").val();
	  var city = $("#name2").val();
	  var tool = $("#tool").val();
	  var vehicle = $("#vehicle").val();
	  var corp = $("#corp").val();
	  var flav = $("#flav").val();
	  var int1 = $("#num1").val();
	  var int2 = $("#num2").val();
	  var int3 = int1 * int2;
	  // #6
	  if(isAlpha(store) && isAlpha(city) && isAlpha(tool) && isAlpha(vehicle)
		&& isAlpha(corp) && isAlpha(flav) && isNumeric(int1) && isNumeric(int2))
	  {
		  // #10, #2, #3
		  window.setTimeout(function()
		  {
			  alert("Calculation: " + int1 + " * " + int2 + " = " + int3
					+ ".\nThis result will be used in the Madlib.");
			  window.setTimeout(function()
			  {
				//#7, #8, #10
				$("#story").html("You quickly sift through the ruins of a dilapidated <span class='libtext'>" + store
								 + "</span> in <span class='libtext'>" + city
								 + "</span>, searching for a <span class='libtext'>" 
								 + tool
								 + "</span>. Finding nothing, you"
								 + " beat a hasty retreat to your <span class='libtext'>" + vehicle
								 +  "</span> and speed away at <span class='libtext'>" + int3 + "</span> MPH"
								 + " before the secret police of <span class='libtext'>"
								 + corp
								 + "</span> Megacorp can find you "
								 + "and inject you with <span class='libtext'>" 
								 + flav
								 + "</span>-flavoured nanomachines.");
				// #9
				$(".libtext").mouseenter(function()
				{
				  $(this).hide(5000).show(5000);
				});
			  }, 1000);
		  }, 1000);
	  }
	  else
        alert("Invalid input discovered");
	}
  });

  // #5
  function allFilled()
  {
    var filled = true;
	var inputtxt = /^[ a-zA-Z]*$/;
	var inputnums = /^[0-9]*$/;
    $('body input').each(function()
	{
        if($(this).val() == '')
		  filled = false;
    });
    return filled;
  }
  
  function isNumeric(n)
  {
    return !isNaN(parseFloat(n)) && isFinite(n);
  }

  function isAlpha(ch)
  {
	return ch.match(/^[a-z ]+$/i) !== null;
  }
});

