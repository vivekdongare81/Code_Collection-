const express = require('express');
const app = express();

app.listen(3000,function(){
    console.log("Server started....!");
});

app.get("/",function(req,res){
     res.send("<h1>Home Page<h1>");
});

app.get("/contact",function(req,res){
    res.send("<h1>This is Contact Page<h1>");
});

