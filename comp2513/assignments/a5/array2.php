<!DOCTYPE html>
<html>
<body>

<?php
$associations = array("William"=>"Wambolt", "Year"=>"2018", "Month"=>"March", "Day"=>"19");
echo "My name is William " . $associations['William'] . " and the time is " . date("h:i:sa") . " on "
     . $associations['Year'] . "/" . $associations['Month'] . "/" . $associations['Day'] . ".";
?>

</body>
</html>