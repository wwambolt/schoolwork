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
	
	<nav class="navbar navbar-inverse">
  <div class="container-fluid" style="padding-top:35px; padding-bottom:35px;">
    <div class="navbar-header">
      <a class="navbar-brand" href="#">FeelBetter Physiotherapy Clinic</a>
    </div>
    <ul class="nav navbar-nav">
      <li><a href="home.php">Home</a></li>
			<li><a href="about.php">About</a></li>
			<li><a href="contact.php">Contact</a></li>
			<li><a href="services.php">Services</a></li>
      <li><a href="rec_pat.php">Patient Records</a></li>
      <li class="active"><a href="rec_emp.php">Employee Records</a></li>
      <li><a href="rec_apt.php">Appointment Records</a></li>
    </ul>
  </div>
</nav>

<div id="header" class="container-fluid"	style="padding-top: 12px; padding-bottom: 12px; text-align:center;">
    <h1 style="margin-bottom:0;">Employee Records</h1>
    <!-- <h2 style="margin-bottom:0; margin-top:0;">William Wambolt, 097716w</h2>
    <h3 style="margin-top:0;">Last Modified: March 31, 2018</h3> -->
</div>

<script type="text/javascript">
function validateForm()
{
  var fn=document.form1.firstname.value;
  var ln=document.form1.lastname.value;
  var ad=document.form1.address.value;
  var ph=document.form1.phonenum.value;
  var pr=document.form1.payrate.value;
  //if(fn=="" && ln!="") {	  
  //  document.getElementById("errorMessage").innerHTML="Please enter first name";return false;	}
  //if(fn!="" && ln=="") {	  
  //  document.getElementById("errorMessage").innerHTML="Please enter last name"; return false;	}
  if(fn=="" || ln=="" || ad=="" || ph=="" || pr=="") {	 
    document.getElementById("errorMessage").innerHTML="Please fill all fields.";return false;	}
}
</script>
<body>

<?PHP 
if($_REQUEST['action']=='edit')
{
?>
<form id="form1" name="form1" method="post" action="update2.php?id=<?PHP echo $_REQUEST['id']; ?>" onSubmit="return validateForm();">
<div class="container-fluid" style="padding-bottom:0;">
  <div class="row">
	  <div class="col-md-5"></div>
    <div class="col-md-1">First Name</div>
    <div class="col-md-1"><label for="firstname"></label>
       <input type="text" name="firstname" id="firstname" value="<?PHP echo $_REQUEST['firstname']; ?>" /></div>
		<div class="col-md-5"></div>
   </div>
  <div class="row">
	  <div class="col-md-5"></div>
    <div class="col-md-1">Last Name</div>
    <div class="col-md-1"><label for="lastname"></label>
      <input type="text" name="lastname" id="lastname" value="<?PHP echo $_REQUEST['lastname']; ?>" /></div>
		<div class="col-md-5"></div>
  </div>
    <div class="row">
	  <div class="col-md-5"></div>
    <div class="col-md-1">Address</div>
    <div class="col-md-1"><label for="address"></label>
      <input type="text" name="address" id="address" value="<?PHP echo $_REQUEST['address']; ?>" /></div>
		<div class="col-md-5"></div>
  </div>
    <div class="row">
	  <div class="col-md-5"></div>
    <div class="col-md-1">Phone #</div>
    <div class="col-md-1"><label for="phonenum"></label>
      <input type="text" name="phonenum" id="phonenum" value="<?PHP echo $_REQUEST['phonenum']; ?>" /></div>
		<div class="col-md-5"></div>
  </div>
    <div class="row">
	  <div class="col-md-5"></div>
    <div class="col-md-1">Pay Rate</div>
    <div class="col-md-1"><label for="payrate"></label>
      <input type="text" name="payrate" id="payrate" value="<?PHP echo $_REQUEST['payrate']; ?>" /></div>
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
<form id="form1" name="form1" method="post" action="insert2.php" onSubmit="return validateForm();">
<div class="container-fluid" style="padding-bottom:0;">
  <div class="row">
	  <div class="col-md-5"></div>
    <div class="col-md-1">First Name</div>
    <div class="col-md-1"><label for="firstname"></label>
       <input type="text" name="firstname" id="firstname" value="" /></div>
		<div class="col-md-5"></div>
   </div>
  <div class="row">
	  <div class="col-md-5"></div>
    <div class="col-md-1">Last Name</div>
    <div class="col-md-1"><label for="lastname"></label>
      <input type="text" name="lastname" id="lastname" value="" /></div>
		<div class="col-md-5"></div>
  </div>
    <div class="row">
	  <div class="col-md-5"></div>
    <div class="col-md-1">Address</div>
    <div class="col-md-1"><label for="address"></label>
      <input type="text" name="address" id="address" value="" /></div>
		<div class="col-md-5"></div>
  </div>
    <div class="row">
	  <div class="col-md-5"></div>
    <div class="col-md-1">Phone #</div>
    <div class="col-md-1"><label for="phonenum"></label>
      <input type="text" name="phonenum" id="phonenum" value="" /></div>
		<div class="col-md-5"></div>
  </div>
    <div class="row">
	  <div class="col-md-5"></div>
    <div class="col-md-1">Pay Rate</div>
    <div class="col-md-1"><label for="payrate"></label>
      <input type="text" name="payrate" id="payrate" value="" /></div>
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
//Bootstrap equivalent of table
require_once('conn.php');
$result = mysqli_query($mysqlic, "SELECT * FROM employee_info ORDER BY employee_info.lastname ASC");
echo "<div class='container-fluid'>";
echo "<div class='row bg-1'>";
echo "<div class='col-md-2'></div>";
echo "<div class='col-md-1'>ID #</div>";
echo "<div class='col-md-1'>First Name</div>";
echo "<div class='col-md-1'>Last Name</div>";
echo "<div class='col-md-1'>Address</div>";
echo "<div class='col-md-1'>Phone Number</div>";
echo "<div class='col-md-1'>Pay Rate $/h</div>";
echo "<div class='col-md-2'></div>";
echo "</div>";
while($row=mysqli_fetch_array($result))
{ echo "<div class='row'>";
$idn=$row['id'];$first=$row['firstname'];$last=$row['lastname'];$addr=$row['address'];$phone=$row['phonenum'];$pr=$row['payrate'];
echo "<div class='col-md-2'></div>";
echo "<div class='col-md-1'>".$row['id']."</div>";
 echo "<div class='col-md-1'>".$row['firstname']." </div>";
   echo "<div class='col-md-1'>".$row['lastname']."</div>";
   echo "<div class='col-md-1'>".$row['address']."</div>";
   echo "<div class='col-md-1'>".$row['phonenum']."</div>";
   echo "<div class='col-md-1'>".$row['payrate']."</div>";
   echo "<div class='col-md-1'><a href='delete2.php?id=$idn'>Delete</a></div>";
   echo "<div class='col-md-1'><a href='rec_emp.php?id=$idn&action=edit&firstname=$first&lastname=$last&address=$addr&phonenum=$phone&payrate=$pr'>Edit</a></div>";
	 echo "<div class='col-md-2'></div>";
	echo "</div>";
	}
echo "</div>";
?>

</body>
</html>