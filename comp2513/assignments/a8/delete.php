<?php
require_once('conn.php');
$idp= $_REQUEST['id'];
mysqli_query($mysqlic, "delete  FROM patient_info where id=$idp");
header("location:rec_pat.php?action");
?>