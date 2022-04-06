const db = require('../database');

const tilitapahtumat = {
  getById: function(id, callback) {
    return db.query('select * from tilitapahtumat where idTilitapahtumat=?', [id], callback);
  },
  getAll: function(callback) {
    return db.query('select * from tilitapahtumat', callback);
  },
  add: function(tilitapahtumat, callback) {
    return db.query(
      'insert into tilitapahtumat (Tilinumero, KortinNumero, PVM, Tapahtuma, Summa) values(?,?,?,?,?)',
      [tilitapahtumat.Tilinumero, tilitapahtumat.KortinNumero, tilitapahtumat.PVM, tilitapahtumat.Tapahtuma, tilitapahtumat.Summa],
      callback
    );
  },

  update: function(id, tilitapahtumat, callback) {
    return db.query(
      'update tilitapahtumat set Tilinumero=? ,KortinNumero=?, PVM=?, Tapahtuma=?, Summa=? where idtilitapahtumat=?',
      [tilitapahtumat.Tilinumero, tilitapahtumat.KortinNumero, tilitapahtumat.PVM, tilitapahtumat.Tapahtuma, tilitapahtumat.Summa],
      callback
    );
  }
};
module.exports = tilitapahtumat;