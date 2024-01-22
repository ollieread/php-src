--TEST--
PDO_sqlite: Testing sqliteCreateAggregate()
--EXTENSIONS--
pdo_sqlite
--FILE--
<?php

$db = new PDO('sqlite::memory:');

$db->query('CREATE TABLE test_pdo_sqlite_createaggregate (id INT AUTO INCREMENT, name TEXT)');

$db->query('INSERT INTO test_pdo_sqlite_createaggregate VALUES (NULL, "PHP"), (NULL, "PHP6")');

$db->sqliteCreateAggregate('testing', function(&$a, $b) { $a .= $b; return $a; }, function(&$v) { return $v; });


foreach ($db->query('SELECT testing(name) FROM test_pdo_sqlite_createaggregate') as $row) {
    var_dump($row);
}

?>
--EXPECT--
array(2) {
  ["testing(name)"]=>
  string(2) "12"
  [0]=>
  string(2) "12"
}
