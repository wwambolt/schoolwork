<?php
require_once('conn.php');
$curr= $_POST['curr_dt'];
$pat= $_POST['patid'];
$phys= $_POST['physid'];
$tr= $_POST['treatment'];
$date= $_POST['appt_dt'];
$dur= $_POST['appt_dur'];

mysqli_query($mysqlic, "INSERT INTO appointment_info (curr_dt, patid, physid, treatment, appt_dt, appt_dur) 
             VALUES ('$curr', '$pat', '$phys', '$tr', '$date', '$dur')");
// send a link back to the browser, and issue a REDIRECT (302)
header("location:rec_apt.php?action");
?>