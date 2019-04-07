<?php
require_once('conn.php');
$idp= $_REQUEST['id'];
$fn= $_POST['firstname'];
$ln= $_POST['lastname'];
$addr= $_POST['address'];
$phone= $_POST['phonenum'];
$hcn = $_POST['healthcardnum'];

mysqli_query($mysqlic, "UPDATE patient_info SET firstname='$fn',lastname='$ln',address='$addr',phonenum='$phone',healthcardnum='$hcn' where id=$idp");
// send a link back to the browser, and issue a REDIRECT (302)
header("location:rec_pat.php?action");
?>