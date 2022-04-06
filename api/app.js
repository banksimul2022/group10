var express = require('express');
var path = require('path');
var cookieParser = require('cookie-parser');
var logger = require('morgan');
const helmet = require('helmet');
const cors = require('cors');

var indexRouter = require('./routes/index');
var tiliRouter = require('./routes/tili');
var korttiRouter = require('./routes/kortti');
var asiakasRouter = require('./routes/asiakas');
var tilitapahtumatRouter = require('./routes/tilitapahtumat');



var app = express();

app.use(helmet());
app.use(cors());
app.use(logger('dev'));
app.use(express.json());
app.use(express.urlencoded({ extended: false }));
app.use(cookieParser());
app.use(express.static(path.join(__dirname, 'public')));

app.use('/', indexRouter);
app.use('/tili', tiliRouter);
app.use('/kortti', korttiRouter);
app.use('/asiakas', asiakasRouter);
app.use('/tilitapahtumat', tilitapahtumatRouter);
module.exports = app;
