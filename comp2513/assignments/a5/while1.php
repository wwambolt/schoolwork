<!DOCTYPE html>
<html>
<body>

<?php  
$x = 1;
date_default_timezone_set("America/Halifax");
 
while($x <= 1) {
	echo "While-Loop Ex 1.<br>";
  echo "My name is William Wambolt and the time is " . date("h:i:sa") . " on " . date("Y/m/d") . ".";
  $x++;
} 
?>  

</body>
</html>