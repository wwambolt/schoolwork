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
      <li><a href="rec_emp.php">Employee Records</a></li>
      <li class="active"><a href="rec_apt.php">Appointment Records</a></li>
    </ul>
  </div>
</nav>

<div id="header" class="container-fluid"	style="padding-top: 12px; padding-bottom: 12px; text-align:center;">
    <h1 style="margin-bottom:0;">Appointment Records</h1>
</div>

<script type="text/javascript">
function validateForm()
{
  var cr=document.form1.curr_dt.value;
  var pid=document.form1.patid.value;
  var phid=document.form1.physid.value;
  var tt=document.form1.treatment.value;
  var adt=document.form1.appt_dt.value;
  var adu=document.form1.appt_dur.value;
  if(cr=="" || pid=="" || phid=="" || tt=="" || adt=="" || adu=="") {	 
    document.getElementById("errorMessage").innerHTML="Please fill all fields.";return false;	}
}
</script>
<body>

<?PHP 
if($_REQUEST['action']=='edit')
{
	require_once('conn.php');
?>
<form id="form1" name="form1" method="post" action="update3.php?id=<?PHP echo $_REQUEST['id']; ?>" onSubmit="return validateForm();">
<div class="container-fluid" style="padding-bottom:0;">
  <div class="row">
	  <div class="col-md-5"></div>
    <div class="col-md-1">Current Date</div>
    <div class="col-md-1"><label for="curr_date"></label>
       <input type="text" name="curr_dt" id="curr_dt" value="<?PHP echo $_REQUEST['curr_dt']; ?>" /></div>
		<div class="col-md-5"></div>
   </div>
  <div class="row">
	  <div class="col-md-5"></div>
    <div class="col-md-1">Patient ID #</div>
    <div class="col-md-1"><label for="patid"></label>
      <select name="patid" id="patid" value="<?PHP echo $_REQUEST['patid']; ?>" />
    <?php
				$result = mysqli_query($mysqlic, "SELECT id FROM patient_info");
				while($row = mysqli_fetch_array($result))
        {    
          echo '<option value='.$row['id'].'>'.$row['id'].'</option>';
        }
    ?>
    </select>
		<div class="col-md-5"></div>
		</div>
	  </div>

  <div class="row">
	  <div class="col-md-5"></div>
    <div class="col-md-1">Physician ID #</div>
    <div class="col-md-1"><label for="physid"></label>
      <select name="physid" id="physid" value="<?PHP echo $_REQUEST['physid']; ?>" />
    <?php
				$result = mysqli_query($mysqlic, "SELECT id FROM employee_info");
				while($row = mysqli_fetch_array($result))
        {    
          echo '<option value='.$row['id'].'>'.$row['id'].'</option>';
        }
    ?>
    </select>
		<div class="col-md-5"></div>
		</div>
	  </div>
    <div class="row">
	  <div class="col-md-5"></div>
    <div class="col-md-1">Treatment Type</div>
    <div class="col-md-1"><label for="treatment"></label>
      <input type="text" name="treatment" id="treatment" value="<?PHP echo $_REQUEST['treatment']; ?>" /></div>
		<div class="col-md-5"></div>
  </div>
    <div class="row">
	  <div class="col-md-5"></div>
    <div class="col-md-1">Appointment Date</div>
    <div class="col-md-1"><label for="appt_dt"></label>
      <input type="text" name="appt_dt" id="appt_dt" value="<?PHP echo $_REQUEST['appt_dt']; ?>" /></div>
		<div class="col-md-5"></div>
  </div>
      <div class="row">
	  <div class="col-md-5"></div>
    <div class="col-md-1">Appointment Duration</div>
    <div class="col-md-1"><label for="appt_dur"></label>
      <input type="text" name="appt_dur" id="appt_dur" value="<?PHP echo $_REQUEST['appt_dur']; ?>" /></div>
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
	require_once('conn.php');
?>
<form id="form1" name="form1" method="post" action="insert3.php?id=" onSubmit="return validateForm();">
<div class="container-fluid" style="padding-bottom:0;">
  <div class="row">
	  <div class="col-md-5"></div>
    <div class="col-md-1">Current Date</div>
    <div class="col-md-1"><label for="curr_dt"></label>
       <input type="text" name="curr_dt" id="curr_dt" value="" /></div>
		<div class="col-md-5"></div>
   </div>
  <div class="row">
	  <div class="col-md-5"></div>
    <div class="col-md-1">Patient ID #</div>
    <div class="col-md-1"><label for="patid"></label>
      <select name="patid" id="patid" value="<?PHP echo $_REQUEST['patid']; ?>" />
    <?php
				$result = mysqli_query($mysqlic, "SELECT id FROM patient_info");
				while($row = mysqli_fetch_array($result))
        {    
          echo '<option value='.$row['id'].'>'.$row['id'].'</option>';
        }
    ?>
    </select>
		<div class="col-md-5"></div>
		</div>
	  </div>

  <div class="row">
	  <div class="col-md-5"></div>
    <div class="col-md-1">Physician ID #</div>
    <div class="col-md-1"><label for="physid"></label>
      <select name="physid" id="physid" value="<?PHP echo $_REQUEST['physid']; ?>" />
    <?php
				$result = mysqli_query($mysqlic, "SELECT id FROM employee_info");
				while($row = mysqli_fetch_array($result))
        {    
          echo '<option value='.$row['id'].'>'.$row['id'].'</option>';
        }
    ?>
    </select>
		<div class="col-md-5"></div>
		</div>
	  </div>
    <div class="row">
	  <div class="col-md-5"></div>
    <div class="col-md-1">Treatment Type</div>
    <div class="col-md-1"><label for="treatment"></label>
      <input type="text" name="treatment" id="treatment" value="" /></div>
		<div class="col-md-5"></div>
  </div>
    <div class="row">
	  <div class="col-md-5"></div>
    <div class="col-md-1">Appointment Date</div>
    <div class="col-md-1"><label for="appt_dt"></label>
      <input type="text" name="appt_dt" id="appt_dt" value="" /></div>
		<div class="col-md-5"></div>
  </div>
      <div class="row">
	  <div class="col-md-5"></div>
    <div class="col-md-1">Appointment Duration</div>
    <div class="col-md-1"><label for="appt_dur"></label>
      <input type="text" name="appt_dur" id="appt_dur" value="" /></div>
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
$result = mysqli_query($mysqlic, "SELECT appointment_info.*
        , patient_info.firstname, patient_info.lastname
				, employee_info.firstname AS emp_first
				, employee_info.lastname AS emp_last
				, (employee_info.payrate * appointment_info.appt_dur) AS cost
    FROM appointment_info
		LEFT JOIN patient_info ON patient_info.id=appointment_info.patid
		LEFT JOIN employee_info ON employee_info.id=appointment_info.physid
		ORDER BY appointment_info.appt_dt ASC");
echo "<div class='container-fluid'>";
echo "<div class='row bg-1'>";
echo "<div class='col-md-2'></div>";
echo "<div class='col-md-1'>ID #</div>";
echo "<div class='col-md-1'>Current Date</div>";
echo "<div class='col-md-1'>Patient Name</div>";
echo "<div class='col-md-1'>Physician Name</div>";
echo "<div class='col-md-1'>Treatment Type</div>";
echo "<div class='col-md-1'>Appointment Date</div>";
echo "<div class='col-md-1'>Appointment Duration (h)</div>";
echo "<div class='col-md-1'>Cost of Appointment ($)</div>";
echo "</div>";
while(($row=mysqli_fetch_array($result)))
{ echo "<div class='row'>";
$idn=$row['id'];$curr=$row['curr_dt'];$pat=$row['patid'];$phys=$row['physid'];$tr=$row['treatment'];$date=$row['appt_dt'];$dur=$row['appt_dur'];$first=$row['firstname'];$last=$row['lastname'];$efirst=$row['emp_first'];$elast=$row['emp_last'];$cost=$row['cost'];
echo "<div class='col-md-2'></div>";
echo "<div class='col-md-1'>".$row['id']."</div>";
 echo "<div class='col-md-1'>".$row['curr_dt']." </div>";
		 echo
	    "<div class='col-md-1'>"
					.$row['lastname'] . " , " . $row['firstname'].
	    "</div>";
   
	    echo
	    "<div class='col-md-1'>"
					.$row['emp_last'] . " , " . $row['emp_first'].
	    "</div>";
			
   echo "<div class='col-md-1'>".$row['treatment']."</div>";
   echo "<div class='col-md-1'>".$row['appt_dt']."</div>";
   echo "<div class='col-md-1'>".$row['appt_dur']."</div>";
	 echo "<div class='col-md-1'>".$row['cost']."</div>";
   echo "<div class='col-md-1'><a href='delete3.php?id=$idn'>Delete</a></div>";
   echo "<div class='col-md-1'><a href='rec_apt.php?id=$idn&action=edit&curr_dt=$curr&patid=$pat&physid=$phys&treatment=$tr&appt_dt=$date&appt_dur=$dur'>Edit</a></div>";
	echo "</div>";
	}
echo "</div>";
?>

</body>
</html>