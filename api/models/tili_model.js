const db = require('../database');

const Tili = {
  getById: function(id, callback) {
    return db.query('select Saldo from tili where idTili=?', [id], callback);
  },
  update: function(id, Tili, callback) {
    return db.query(
      'update tili set Saldo=?, where idTili=?',
      [Tili.Saldo, id],callback);
  }
};
module.exports = tili;