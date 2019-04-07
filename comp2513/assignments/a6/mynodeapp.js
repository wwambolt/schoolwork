var http = require("http");
var express = require('express');
var app = express();
var bodyParser = require('body-parser');
var urlencodedParser = bodyParser.urlencoded({ extended: true });
const fs = require('fs');
 
// Running Server Details.
var server = app.listen(8082, function () {
  var host = server.address().address
  var port = server.address().port
  console.log("Example app listening at %s:%s Port", host, port)
});
 
 
app.get('/form', function (req, res) {
  var html='';
  html +="<body>";
  html += "<form action='/thank'  method='post' name='form1'>";
  html += "Please input a .html filename:</p><input type= 'text' name='name'>";
  html += "<input type='submit' value='submit'>";
  html += "</form>";
  html += "</body>";
  res.send(html);
});
 
app.post('/thank', urlencodedParser, function (req, res){
     fs.readFile(req.body.name, (err, html) => {
        if(err){
            res.redirect('/error');
		} else {
            res.statusCode = 200;
            res.setHeader('Content-type', 'text/html');
            res.write(html);
            res.end();
        };
    });
 });
 
 app.get('/error', function (req, res) {
  var html='';
  html +="<body>";
  html += "File does not exist.";
  html += "</body>";
  
  res.redirect('/form');
});