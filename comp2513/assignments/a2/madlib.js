window.onload = start;

function start() {
	getLocation();
    var button = document.getElementById("submit");
    button.onclick = go_mad;
}

function isNumeric(n) {
  return !isNaN(parseFloat(n)) && isFinite(n);
}

function isAlpha(ch) {
	return ch.match(/^[a-z]+$/i) !== null;
}

function go_mad() {
	var car_name;
	var storytime;
	var calc;
	var count;
	inputs = document.getElementsByTagName("input");
	
	// #3
	if ((document.getElementById("radio1")).checked)
	{
	    car_name = "Ford";
	}
    else if ((document.getElementById("radio2")).checked)
	{
	    car_name = "Chevrolet";
	}
	
	// #2
	calc = (document.getElementById("num1").value
	       / document.getElementById("num2").value).toFixed(2);
	if (calc == 1)
	{
		count = "time"; // ensuring proper grammar
	}
	else
	{
	    count = "times"; // ensuring proper grammar
	}
	
	// #4
	for (i = 0; i < inputs.length; i++)
	{
	    if (inputs[i].value == "")
	    {
	        alert("Incorrect input.");
	        return;
	    }
	}
	
	// #5
	if (!isNumeric(inputs[4].value) || !isNumeric(inputs[5].value))
	{
		alert("Number is not numeric.");
	    return;
	}
	for (i = 0; i <= 3; i++)
	{
	    if (!isAlpha(inputs[i].value))
	    {
		    alert("Input is not alpha.");
	        return;
	    }
	}
	for (i = 6; i <= 9; i++)
	{
	    if (!isAlpha(inputs[i].value))
	    {
		    alert("Input is not alpha.");
	        return;
	    }
	}

	// #6, #8, #9
	storytime =   "<span class='mltext'>" + document.getElementById("exc").value + "</span>" + "! The "
				+ "<span class='mltext'>" + document.getElementById("adj1").value + "</span>" + ", "
				+ "<span class='mltext'>" + document.getElementById("adj2").value + "</span>" + " "
				+ "<span class='mltext'>" + document.getElementById("n1").value + "</span>"
				+ " did sick kickflips over the lazy dog "
				+ "<span class='mltext'>" + calc + "</span>" + " " 
				+ "<span class='mltext'>" + count + "</span>" + " and then hopped into its "
				+ "<span class='mltext'>" + document.getElementById("adj3").value + "</span>" + " "
				+ "<span class='mltext'>" + car_name + "</span>" + " "
				+ "<span class='mltext'>" + document.getElementById("n2").value + "</span>" + " "
				+ "and rode off into the sunset.";
    document.getElementById("story").innerHTML = storytime;
}

// Code provided by Dr. Silver
var x = document.getElementById("demo");

var position = {
      coords: {
        latitude: '',
        longitude: ''
      }
    };

function getLocation() {
	$.getJSON("http://ip-api.com/json", function(data, status){
        if(status === "success") {
            position.coords.latitude = data.lat;
            position.coords.longitude = data.lon;
            showPosition(position);
         }
    });
}     

function showPosition(position) {
    var latlon = position.coords.latitude.toFixed(4) + "," + position.coords.longitude.toFixed(4);
    var img_url = "http://maps.googleapis.com/maps/api/staticmap?center="+latlon+"&zoom=14&size=400x300&sensor=false";
    document.getElementById("mapholder").innerHTML = "<img src='"+img_url+"'>";
    
    x.innerHTML = "Latitude: " + position.coords.latitude + 
    "<br>Longitude: " + position.coords.longitude;
}

function showError(error) {
    switch(error.code) {
        case error.PERMISSION_DENIED:
            x.innerHTML = "User denied the request for Geolocation."
            break;
        case error.POSITION_UNAVAILABLE:
            x.innerHTML = "Location information is unavailable."
            break;
        case error.TIMEOUT:
            x.innerHTML = "The request to get user location timed out."
            break;
        case error.UNKNOWN_ERROR:
            x.innerHTML = "An unknown error occurred."
            break;
    }
}
