<?php
require_once('conn.php');
$idp= $_REQUEST['id'];
$fn= $_POST['firstname'];
$ln= $_POST['lastname'];
$addr= $_POST['address'];
$phone= $_POST['phonenum'];
$pr = $_POST['payrate'];

mysqli_query($mysqlic, "UPDATE employee_info SET firstname='$fn',lastname='$ln',address='$addr',phonenum='$phone',payrate='$pr' where id=$idp");
// send a link back to the browser, and issue a REDIRECT (302)
header("location:rec_emp.php?action");
?>