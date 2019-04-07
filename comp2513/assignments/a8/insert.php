<?php
require_once('conn.php');
$fn= $_POST['firstname'];
$ln= $_POST['lastname'];
$addr= $_POST['address'];
$phone= $_POST['phonenum'];
$hcn = $_POST['healthcardnum'];

mysqli_query($mysqlic, "INSERT INTO patient_info (firstname, lastname, address, phonenum, healthcardnum) VALUES ('$fn', '$ln', '$addr', '$phone', '$hcn')");
// send a link back to the browser, and issue a REDIRECT (302)
header("location:rec_pat.php?action");
?>