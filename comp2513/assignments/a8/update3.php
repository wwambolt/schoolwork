<?php
require_once('conn.php');
$idp= $_REQUEST['id'];
$curr= $_POST['curr_dt'];
$pat= $_POST['patid'];
$phys= $_POST['physid'];
$tr= $_POST['treatment'];
$date= $_POST['appt_dt'];
$dur= $_POST['appt_dur'];

mysqli_query($mysqlic, "UPDATE appointment_info SET curr_dt='$curr',patid='$pat',physid='$phys',treatment='$tr',appt_dt='$date',appt_dur='$dur' where id=$idp");
// send a link back to the browser, and issue a REDIRECT (302)
header("location:rec_apt.php?action");
?>