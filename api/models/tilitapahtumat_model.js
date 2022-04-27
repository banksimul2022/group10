const db = require('../database');

const tilitapahtumat = {
  getTilitapahtumat: function(KortinNumero, callback) {
    return db.query('select * from tilitapahtumat JOIN kortti on tilitapahtumat.idKortti=kortti.idKortti where KortinNumero=? order by PVM LIMIT 10', [KortinNumero], callback);
  },
  getAll: function(callback) {
    return db.query('select * from tilitapahtumat', callback);
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