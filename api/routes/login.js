const express = require('express');
const router = express.Router();
const bcrypt = require('bcryptjs');
const login = require('../models/login_model');
const jwt = require('jsonwebtoken');
const dotenv = require('dotenv');


router.post('/', 
  function(request, response) {
    if(request.body.KortinNumero && request.body.PIN){
      const KortinNumero = request.body.KortinNumero; 
      const PIN = request.body.PIN;
        login.checkPIN(KortinNumero, function(dbError, dbResult) {
          if(dbError){
            response.json(dbError);
          }
          else{
            if (dbResult.length > 0) {
              bcrypt.compare(PIN,dbResult[0].PIN, function(err,compareResult) {
                if(compareResult) {
                  console.log("succes");
                  const token = generateAccessToken({ KortinNumero: KortinNumero });
                  response.send(token);
                }
                else {
                    console.log("wrong PIN");
                    response.send(false);
                }			
              }
              );
            }
            else{
              console.log("user does not exists");
              response.send(false);
            }
          }
          }
        );
      }
    else{
      console.log("KortinNumero or PIN missing");
      response.send(false);
    }
  }
);

function generateAccessToken(KortinNumero) {
  dotenv.config();
  return jwt.sign(KortinNumero, process.env.MY_TOKEN, { expiresIn: '180000s' });
}

module.exports=router;