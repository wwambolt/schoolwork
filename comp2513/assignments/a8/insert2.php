<?php
require_once('conn.php');
$fn= $_POST['firstname'];
$ln= $_POST['lastname'];
$addr= $_POST['address'];
$phone= $_POST['phonenum'];
$pr = $_POST['payrate'];

mysqli_query($mysqlic, "INSERT INTO employee_info (firstname, lastname, address, phonenum, payrate) VALUES ('$fn', '$ln', '$addr', '$phone', '$pr')");
// send a link back to the browser, and issue a REDIRECT (302)
header("location:rec_emp.php?action");
?>