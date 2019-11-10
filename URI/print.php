<!DOCTYPE html>
<html>
<head>
	<title></title>
</head>
<body>

<h1><?php echo htmlentities($_GET['search-key']); // <script>any JS code</script> ?></h1> 
<!-- http://localhost/URIAttack/print.php?search-key=%3Cscript%3Ealert%28%22ANY%22%29%3B%3C%2Fscript%3E
 -->
</body>
</html>