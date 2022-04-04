const db = require('../database');

const kortti = {
  getById: function(id, callback) {
    return db.query('select * from kortti where idKortti=?', [id], callback);
  },
  getAll: function(callback) {
    return db.query('select * from kortti', callback);
  },
  add: function(kortti, callback) {
    return db.query(
      'insert into kortti (KortinNumero,PIN) values(?,?)',
      [kortti.KortinNumero, kortti.PIN],
      callback
    );
  },
  delete: function(id, callback) {
    return db.query('delete from kortti where idKortti=?', [id], callback);
  },
  update: function(id, kortti, callback) {
    return db.query(
      'update kortti set KortinNumero=?,PIN=? where idKortti=?',
      [kortti.KortinNumero, kortti.PIN, id],
      callback
    );
  }
};
module.exports = kortti;