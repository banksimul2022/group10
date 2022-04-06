const mysql = require('mysql');
const connection = mysql.createPool({
  host: 'localhost',
  user: 'root',
  password: 'akbaba00',
  database: 'pankkiautomaatti'
});
module.exports = connection;