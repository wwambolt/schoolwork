<!DOCTYPE html>
<html>
<body>

<?php
function setYear($minyear = 2018) {
    echo "My name is William Wambolt and the time is " . date("h:i:sa") . " on " . date("d/m/") . "$minyear <br>";
}
setYear();
setYear(2019);
setYear(2099);
setYear(6000000);
?>

</body>
</html>