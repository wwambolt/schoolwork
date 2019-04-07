var output;
var api_url = "library.json";

$(document).ready(function() {
	$.post(api_url, "", function(data) {
		output = data;
		$.each(output, function(item) {
			$("#album-list").append("<h3 id=\"" + item + "\">" + output[item].title + "</h3>");
		})
		$("h3").click(function(e) {
			e.preventDefault();
			var album = output[$(this).attr("id")];
			var album_size = 0;
			$("#album-view").append("<h2>" + album.title + "</h2>");
			$("#album-view").append("<h3>" + album.date + "</h3>");
			$.each(album.photos, function(item) {
				album_size++;
				var pic = album.photos[item];
				$("#album-view").append("<img src=\"" + pic.url + "\" alt=\"" + pic.title + " - " + pic.date + "\" />");
			});
			
			$("img").click(function() {
				$("#img-view").append("<h4 id=\"prev-img\">Previous</h4><h4 id=\"album-back\">Return to album</h4><h4 id=\"next-img\">Next</h4>");
				$("#img-view").append("<img src=\"" + $(this).attr("src") + "\" class=\"single-view\"/>");
				$("#img-view").append("<h4 id=\"img-meta\">" + $(this).attr("alt") + "</h4>");
				
				$("#prev-img").click(function()
				{
					$("#img-view").append("<h4 id=\"prev-img\">Previous</h4><h4 id=\"album-back\">Return to album</h4><h4 id=\"next-img\">Next</h4>");
				$("#img-view").append("<img src=\"" + $(this).attr("src") + "\" class=\"single-view\"/>");
				$("#img-view").append("<h4 id=\"img-meta\">" + $(this).attr("alt") + "</h4>");
				}
				);
				$("#next-img").click();
				$("#album-back").click(function() {
					$("#img-view").fadeOut(function() {
						$("#album-view").fadeIn();
						$(this).html("");
					});
				});
				
				$("#album-view").fadeOut(function() {
					$("#img-view").fadeIn();
				});
			});
			
			$("#album-view").append("<h3 class=\"meta-data\">" + album_size + " Photos</h3>");
			
			$("#album-list").fadeOut(function() {
				$("#list-back").fadeIn();
				$("#album-view").fadeIn();
			});
		});		
	});
	
	$("#list-back").click(function(e) {
		e.preventDefault();
		$(this).fadeOut();
		$("#album-view").fadeOut(function() {
			$("#album-list").fadeIn();
			$(this).html("");
		});
		$("#img-view").fadeOut(function() {
			$("#album-list").fadeIn();
			$(this).html("");
		});
	});
});