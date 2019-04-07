<html>
<head>
  <!-- Theme Made By www.w3schools.com - No Copyright -->
  <title>Assignment 7 - Simple Database Application using PHP MySQLi</title>
  <meta charset="utf-8">
  <meta name="viewport" content="width=device-width, initial-scale=1">
  <link rel="stylesheet" href="https://maxcdn.bootstrapcdn.com/bootstrap/3.3.7/css/bootstrap.min.css">
	<link rel="stylesheet" href="main.css">
  <link href="https://fonts.googleapis.com/css?family=Montserrat" rel="stylesheet">
  <script src="https://ajax.googleapis.com/ajax/libs/jquery/3.3.1/jquery.min.js"></script>
  <script src="https://maxcdn.bootstrapcdn.com/bootstrap/3.3.7/js/bootstrap.min.js"></script>

<div id="header" class="container-fluid"	style="padding-top: 12px; padding-bottom: 12px; text-align:center;">
    <h1 style="margin-bottom:0;">Assignment 7 - Simple Database Application using PHP MySQLi</h1>
    <h2 style="margin-bottom:0; margin-top:0;">William Wambolt, 097716w</h2>
    <h3 style="margin-top:0;">Last Modified: March 31, 2018</h3>
</div>

<script type="text/javascript">
function validateForm()
{ var un=document.form1.username.value;
  var pd=document.form1.psd.value;
  if(un=="" && pd!="") {	  
    document.getElementById("errorMessage").innerHTML="Please enter username";return false;	}
  if(un!="" && pd=="") {	  
    document.getElementById("errorMessage").innerHTML="Please enter password"; return false;	}
  if(un=="" && pd=="") {	 
    document.getElementById("errorMessage").innerHTML="Please enter username & password";return false;	}
}
</script>
<body>

<?PHP 
if($_REQUEST['action']=='edit')
{
?>
<form id="form1" name="form1" method="post" action="update.php?id=<?PHP echo $_REQUEST['id']; ?>" onSubmit="return validateForm();">
<div class="container-fluid" style="padding-bottom:0;">
  <div class="row">
	  <div class="col-md-5"></div>
    <div class="col-md-1">Username</div>
    <div class="col-md-1"><label for="username"></label>
       <input type="text" name="username" id="username" value="<?PHP echo $_REQUEST['un']; ?>" /></div>
		<div class="col-md-5"></div>
   </div>
  <div class="row">
	  <div class="col-md-5"></div>
    <div class="col-md-1">Password</div>
    <div class="col-md-1"><label for="psd"></label>
      <input type="text" name="psd" id="psd" value="<?PHP echo $_REQUEST['pd']; ?>" /></div>
		<div class="col-md-5"></div>
  </div>
  <div class="row">
	  <div class="col-md-5"></div>
    <div class="col-md-1"><input type="submit" name="submit" id="submit" value="Submit" /></div>
    <div class="col-md-1"><input type="reset" name="Reset" id="Reset" value="Reset" /></div>
    <div class="col-md-5"></div>
	</div>
</div>

</form>
<?PHP
}
else
{
?>
<form id="form1" name="form1" method="post" action="insert.php" onSubmit="return validateForm();">
<div class="container-fluid" style="padding-bottom:0;">
  <div class="row">
	  <div class="col-md-5"></div>
    <div class="col-md-1">Username</div>
    <div class="col-md-1"><label for="username"></label>
       <input type="text" name="username" id="username" value="" /></div>
		<div class="col-md-5"></div>
   </div>
  <div class="row">
	  <div class="col-md-5"></div>
    <div class="col-md-1">Password</div>
    <div class="col-md-1"><label for="psd"></label>
      <input type="text" name="psd" id="psd" value="" /></div>
		<div class="col-md-5"></div>
  </div>
  <div class="row">
	  <div class="col-md-5"></div>
    <div class="col-md-1"><input type="submit" name="submit" id="submit" value="Submit" /></div>
    <div class="col-md-1"><input type="reset" name="Reset" id="Reset" value="Reset" /></div>
    <div class="col-md-5"></div>
	</div>
</div>

</form>
<?PHP } ?>
<div class="container-fluid" style="text-align:center; padding-bottom:0; padding-top:0;">
<p id="errorMessage" style="color:#C00; font-style:italic;"></p>

<!-- The following could be a separate php function similar to insert and update -->
</div>

<?php
/*require_once('conn.php');
$result = mysqli_query($mysqlic, "SELECT * FROM tbllogin");
echo "<table border='2'>";
echo "<th>Username</th><th>Password</th>";
while($row=mysqli_fetch_array($result))
{ echo "<tr>";
$idn=$row['id'];$un=$row['username'];$pd=$row['psd'];
 echo "<td>".$row['username']." </td>";
   echo "<td>".$row['psd']."</td>";
   echo "<td><a href='delete.php?id=$idn'>Delete</a></td>
   <td><a href='home.php?id=$idn&action=edit&un=$un&pd=$pd'>Edit</a></td>";
	echo "</tr>";
	}
echo "</table>";*/

//Bootstrap equivalent of table
require_once('conn.php');
$result = mysqli_query($mysqlic, "SELECT * FROM tbllogin");
echo "<div class='container-fluid'>";
echo "<div class='row'>";
echo "<div class='col-md-4'></div>";
echo "<div class='col-md-1'>Username</div>";
echo "<div class='col-md-1'>Password</div>";
echo "<div class='col-md-6'></div>";
echo "</div>";
while($row=mysqli_fetch_array($result))
{ echo "<div class='row'>";
$idn=$row['id'];$un=$row['username'];$pd=$row['psd'];
echo "<div class='col-md-4'></div>";
 echo "<div class='col-md-1'>".$row['username']." </div>";
   echo "<div class='col-md-1'>".$row['psd']."</div>";
   echo "<div class='col-md-1'><a href='delete.php?id=$idn'>Delete</a></div>";
   echo "<div class='col-md-1'><a href='home.php?id=$idn&action=edit&un=$un&pd=$pd'>Edit</a></div>";
	 echo "<div class='col-md-4'></div>";
	echo "</div>";
	}
echo "</div>";
?>

</body>
</html>