<!DOCTYPE html>
<html>
<body>

<?php
function familyName($fname, $year) {
    echo "My name is $fname Wambolt and the time is " . date("h:i:sa") . " on $year" . date("/m/d") . ".";
}

familyName("William","2018");
?>

</body>
</html>