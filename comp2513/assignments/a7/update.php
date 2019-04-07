<?php
require_once('conn.php');
$idp= $_REQUEST['id'];
$un= $_POST['username'];
$pd= $_POST['psd'];
mysqli_query($mysqlic, "UPDATE tbllogin SET username='$un',psd='$pd' where id=$idp");
// send a link back to the browser, and issue a REDIRECT (302)
header("location:home.php?action");
?>