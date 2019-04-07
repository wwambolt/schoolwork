<?php
require_once('conn.php');
$idp= $_REQUEST['id'];
mysqli_query($mysqlic, "delete  FROM tbllogin where id=$idp");
header("location:home.php?action");
?>