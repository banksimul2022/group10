const db = require('../database');

const login={
  checkPIN: function(KortinNumero, callback) {
      return db.query('SELECT PIN FROM kortti WHERE KortinNumero = ?',[KortinNumero], callback); 
    }
};
          
module.exports = login;