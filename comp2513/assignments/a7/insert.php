<?php
require_once('conn.php');
$un= $_POST['username'];
$pd= $_POST['psd'];
mysqli_query($mysqlic, "INSERT INTO tbllogin (username, psd) VALUES ('$un', '$pd')");
// send a link back to the browser, and issue a REDIRECT (302)
header("location:home.php?action");
?>