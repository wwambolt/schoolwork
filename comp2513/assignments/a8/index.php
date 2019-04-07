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
    // Login source code found here and slightly modified
		// https://www.youtube.com/watch?v=1UA6vC3kRYQ

    // Start the session
    session_start();

    // Defines username and password. Retrieve however you like,
		// Retrieving from JSON file.
		$url = 'credentials.json'; // path to json file
		$data = file_get_contents($url); // assign it to a variable
		$creds = json_decode($data); // decode json file
    $username = $creds->UID; // access UID
    $password = $creds->PWD; // access PWD

    // Error message
    $error = "";

    // Checks to see if the user is already logged in. If so, redirect to correct page.
    if (isset($_SESSION['loggedIn']) && $_SESSION['loggedIn'] == true) {
        $error = "success";
        header('Location: home.php');
    } 
        
    // Checks to see if the username and password have been entered.
    // If so and are equal to the username and password defined above, log them in.
    if (isset($_POST['username']) && isset($_POST['password'])) {
        if ($_POST['username'] == $username && $_POST['password'] == $password) {
            $_SESSION['loggedIn'] = true;
            header('Location: home.php');
        } else {
            $_SESSION['loggedIn'] = false;
            $error = "Invalid username and password!";
        }
    }
?>
    
    <body>
		<div class="container-fluid" style="text-align:center;">
		<h1 style="color:#6b4a1f;">Assignment 8 - FeelBetter Physiotherapy Clinic</h1>
		<h2 style="color:#6b4a1f;">Please login.</h2>
		<h3 style="color:#6b4a1f; font-size:16px;">Username = Tom</h3>
		<h3 style="color:#6b4a1f; font-size:16px;">Password = t1234</h3>
		<br>
		
        <!-- Output error message if any -->
        <?php echo $error; ?>
        
        <!-- form for login -->
        <form method="post" action="index.php">
            <label for="username">Username:</label><br/>
            <input type="text" name="username" id="username"><br/>
            <label for="password">Password:</label><br/>
            <input type="password" name="password" id="password"><br/>
            <input type="submit" value="Log In!">
        </form>
			</div>
    </body>
</html>