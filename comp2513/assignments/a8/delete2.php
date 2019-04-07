<?php
require_once('conn.php');
$idp= $_REQUEST['id'];
mysqli_query($mysqlic, "delete  FROM employee_info where id=$idp");
header("location:rec_emp.php?action");
?>