<!DOCTYPE html>
<html>
<body>

<?php
$names = array("William Wambolt", "Billiam Humboldt", "Wilhelm Drumbold");
$arrlength = count($names);

for($x = 0; $x < $arrlength; $x++) {
    echo "My name is $names[$x] and the time is " . date("h:i:sa") . " on ". date("d/m/Y");
    echo "<br>";
}
?>

</body>
</html>