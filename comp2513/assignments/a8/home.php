<!DOCTYPE HTML>
<html>
<head>
  <!-- Theme Made By www.w3schools.com - No Copyright -->
  <title>Assignment 8 - FeelBetter Physiotherapy Clinic</title>
  <meta charset="utf-8">
  <meta name="viewport" content="width=device-width, initial-scale=1">
  <link rel="stylesheet" href="https://maxcdn.bootstrapcdn.com/bootstrap/3.3.7/css/bootstrap.min.css">
  <link href="https://fonts.googleapis.com/css?family=Montserrat" rel="stylesheet">
  <script src="https://ajax.googleapis.com/ajax/libs/jquery/3.3.1/jquery.min.js"></script>
  <script src="https://maxcdn.bootstrapcdn.com/bootstrap/3.3.7/js/bootstrap.min.js"></script>
		<link rel="stylesheet" href="main.css">

<?php
    // Start the session
    ob_start();
    session_start();

    // Check to see if actually logged in. If not, redirect to login page
    if (!isset($_SESSION['loggedIn']) || $_SESSION['loggedIn'] == false) {
        header("Location: index.php");
    }
?>

<body>

	<nav class="navbar navbar-inverse">
  <div class="container-fluid" style="padding-top:35px; padding-bottom:35px;">
    <div class="navbar-header">
      <a class="navbar-brand" href="#">FeelBetter Physiotherapy Clinic</a>
    </div>
    <ul class="nav navbar-nav">
      <li class="active"><a href="home.php">Home</a></li>
			<li><a href="about.php">About</a></li>
			<li><a href="contact.php">Contact</a></li>
			<li><a href="services.php">Services</a></li>
      <li><a href="rec_pat.php">Patient Records</a></li>
      <li><a href="rec_emp.php">Employee Records</a></li>
      <li><a href="rec_apt.php">Appointment Records</a></li>
    </ul>
  </div>
</nav>

<div class="container-fluid bg-2">
    <div class="row">
		    <div class="col-md-6">
				    <img src="img/gym.jpg" class="img-responsive img-circle margin" style="display:inline" alt="GYM">
				</div>
				<div class="col-md-6">
				    <p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Aliquam pulvinar vel dui ut tincidunt. Nulla nec pulvinar eros. Duis tellus nisl, placerat in commodo eu, auctor quis massa. Proin mattis quam elit, nec interdum neque pharetra nec. Nam pulvinar ac elit quis venenatis. Proin a pellentesque augue, quis tincidunt ligula. Curabitur porta at leo non pulvinar. Sed vitae mauris vitae odio efficitur ultricies. Morbi et mollis diam.

								Praesent ornare nisl nec porta maximus. Nunc a est nibh. Donec egestas, eros sit amet pulvinar lacinia, massa nunc consequat eros, quis euismod quam purus at libero. Nam consequat leo quis congue posuere. Suspendisse dignissim, dolor in cursus fermentum, mi risus bibendum diam, consectetur interdum elit nunc quis diam. Integer nisi nulla, bibendum a diam vitae, euismod congue lacus. Aenean non lectus eu lacus dignissim elementum eget sit amet eros. Nullam felis tortor, venenatis quis mauris non, vehicula fermentum tortor.

								Phasellus tortor tellus, convallis sit amet elit sit amet, suscipit porttitor lorem. Vivamus at justo sed lacus vestibulum posuere. Pellentesque habitant morbi tristique senectus et netus et malesuada fames ac turpis egestas. Orci varius natoque penatibus et magnis dis parturient montes, nascetur ridiculus mus. Mauris varius ullamcorper erat et molestie. Integer vel interdum arcu. Praesent interdum elementum condimentum. Vestibulum vehicula dui nec erat fringilla, at auctor tellus tristique.

								Phasellus mollis, erat eu ultricies viverra, risus odio malesuada est, vel blandit neque eros sed tortor. Ut ac orci mollis, varius turpis ac, dictum odio. Aenean fringilla viverra vestibulum. In efficitur ante sem, nec mollis lorem interdum eu. Aliquam in nulla fermentum nulla feugiat ornare. Quisque id vulputate odio. Quisque et feugiat libero. Proin mollis odio eget est maximus rutrum. Morbi convallis sem fermentum leo varius, in sagittis lacus pulvinar. Donec rhoncus est ante, vel tempus turpis vehicula ac.

								Aenean a rhoncus nulla. Aenean sodales leo id augue egestas, in mattis tellus lobortis. Curabitur sed purus pretium, dignissim turpis eget, imperdiet nisi. Vestibulum egestas pellentesque nulla facilisis gravida. Nulla porta sagittis erat, in euismod metus varius aliquet. Phasellus sed interdum mauris. Suspendisse tempor laoreet augue non ultrices. Nunc eget dignissim magna. Nunc sagittis urna sed posuere ultricies. Ut volutpat venenatis mauris, in mollis tellus sagittis tempor. Vestibulum risus sem, ultricies nec imperdiet non, dictum ut justo. Maecenas ipsum ante, accumsan eget mattis nec, suscipit eu sem. Duis enim felis, pellentesque at pellentesque ac, varius eu velit. Vivamus et eros tincidunt, porta risus at, convallis ligula. Donec dictum pellentesque magna, vitae rhoncus ligula consequat sit amet. Sed imperdiet imperdiet mauris, in blandit magna.</p>
				</div>
		</div>
</div>

</body>
</html>