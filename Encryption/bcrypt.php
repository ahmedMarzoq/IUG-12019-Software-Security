<?php

$options = [
  'cost' => 11
];

$hashed =  password_hash('ahmedA@100', PASSWORD_BCRYPT, $options);
echo "<h3>".$hashed."</h3>";
echo "<br><br>";


if (password_verify('ahmedA@100', $hashed)) {
    echo 'Password is valid';
} else {
    echo 'Invalid password!!';
}

?>