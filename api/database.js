const mysql = require('mysql');
const connection = mysql.createPool({
  host: 'localhost',
  user: 'username',
  password: 'password',
  database: 'pankkiautomaatti'
});
module.exports = connection;