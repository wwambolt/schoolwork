<!DOCTYPE html>
<html>
<body>

<?php
$association = array("Name"=>"William Wambolt", "Name2"=>"Gilliam Wumboldt", "Name3"=>"Willem Vumbold");

foreach($association as $x => $x_value) {
    echo "My name is " . $x_value . " and the time is "
		     . date("h:i:sa") . " on " . date("Y/m/d") . ".";
    echo "<br>";
}
?>

</body>
</html>