const express = require("express");
const app =express();

const bodyParser =require("body-parser");
app.use(bodyParser.urlencoded({extended:true}));

const request = require('request');

app.listen(3000,function(req,res){
   console.log("Bitcoin Server is Running.... ");    
});

app.get("/",function(req,res){
  res.sendFile(__dirname+"/bitcoin.html");
});

app.post("/",function(req,res){
   var cryptoid=req.body.crypto;
   var currencyid=req.body.currency;
   
   //API id with unique apikey
   var API="https://api.nomics.com/v1/currencies/ticker?key=c871a75b340ba9742f6d4fc1b8ddee9f8294814e&ids="+cryptoid+"&interval=1d,30d&convert="+currencyid+"&per-page=100&page=1";
  
  request(API,function(error,response,body){
   var jsObj =JSON.parse(body);
  var priceofcrypto =jsObj[0].price;

 res.send("<h2>The Live Price of "+cryptoid+" is "+priceofcrypto+" in "+currencyid+".</h2>");
    
  });
});
