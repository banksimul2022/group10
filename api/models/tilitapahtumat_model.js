const db = require('../database');

const tilitapahtumat = {
  getTilitapahtumat: function(id, callback) {
    return db.query('select * from tilitapahtumat where idTili=?', [id], callback);
  },
  getAll: function(callback) {
    return db.query('select * from tilitapahtumat', callback);
  },
  get5Tapahtumaa: function(id, callback) {
    return db.query('SELECT * FROM tilitapahtumat WHERE idTili=? ORDER BY idTilitapahtumat DESC limit 5;',
     [id], callback);
  },
  get5EkaaTapahtumaa: function(id, callback) {
    return db.query('SELECT * FROM tilitapahtumat WHERE idTili=? ORDER BY idTilitapahtumat limit 5;',
     [id], callback);
  },
  add: function(tilitapahtumat, callback) {
    return db.query(
      'insert into tilitapahtumat (Tilinumero, KortinNumero, PVM, Tapahtuma, Summa, idKortti, idTili) values(?,?,?,?,?,?,?)',
      [tilitapahtumat.Tilinumero, tilitapahtumat.KortinNumero, tilitapahtumat.PVM, tilitapahtumat.Tapahtuma, tilitapahtumat.Summa, tilitapahtumat.idKortti, tilitapahtumat.idTili],
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