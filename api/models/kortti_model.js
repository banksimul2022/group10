const db = require('../database');
const bcrypt = require('bcryptjs');

const saltRounds=10;
const kortti = {
  getById: function(id, callback) {
    return db.query('select * from kortti where idKortti=?', [id], callback);
  },
  getAll: function(callback) {
    return db.query('select * from kortti', callback);
  },
  add: function(kortti, callback) {
      bcrypt.hash(kortti.PIN, saltRounds,function(err, hash){
        return db.query(
            'insert into kortti (KortinNumero,PIN,idAsiakas,idTili) values(?,?,?,?)',
            [kortti.KortinNumero, hash, kortti.idAsiakas, kortti.idTili, ],
            callback);
        });
  },
  delete: function(id, callback) {
    return db.query('delete from kortti where idKortti=?', [id], callback);
  },
  update: function(id, kortti, callback) {
    bcrypt.hash(kortti.PIN, saltRounds,function(err, hash){
      return db.query(
        'update kortti set KortinNumero=?,PIN=?,idAsiakas=?,idTili=? where idKortti=?',
        [kortti.KortinNumero, hash, kortti.idAsiakas, kortti.idTili, id],
        callback);
    });
  }
};
module.exports = kortti;