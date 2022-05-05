const db = require('../database');

const asiakas = {
  getById: function(id, callback) {
    return db.query('select * from asiakas where idAsiakas=?', [id], callback);
  },
  getAll: function(callback) {
    return db.query('select * from asiakas', callback);
  },
  add: function(asiakas, callback) {
    return db.query(
      'insert into asiakas (Nimi,Osoite,puhNum) values(?,?,?)',
      [asiakas.Nimi, asiakas.Osoite, asiakas.puhNum],
      callback
    );
  },
  delete: function(id, callback) {
    return db.query('delete from asiakas where idAsiakas=?', [id], callback);
  },
  update: function(id, asiakas, callback) {
    return db.query(
      'update asiakas set Nimi=?,Osoite=?, puhNum=? where idAsiakas=?',
      [asiakas.Nimi, asiakas.Osoite, asiakas.puhNum, id],
      callback
    );
  }
};
module.exports = asiakas;