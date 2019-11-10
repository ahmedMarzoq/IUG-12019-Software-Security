<!DOCTYPE html>
<html>
	<head>
		<title>Search</title>
		<link rel="stylesheet" type="text/css" href="bootstrap.min.css" />

		<style type="text/css">
			body{
				padding: 20px;
			}
			form{
				padding: 20px;
			}
		</style>
	</head>

	<body class="row">
		<form class="col-lg-12" method="get" action="print.php">
			<div class="form-group">
				<label for="username">Search Key:</label>
				<input type="text" class="form-control" id="search-key" name="search-key">
			</div>

			<button type="submit" class="btn btn-default">Search</button>
		</form>
	</body>
</html>