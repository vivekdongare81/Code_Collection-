
const express = require("express");
const bodyParser = require("body-parser");
const ejs = require("ejs");
const mongoose = require('mongoose');

const app = express();

app.set('view engine', 'ejs');

app.use(bodyParser.urlencoded({ extended: true }));
app.use(express.static("public"));


//Connecting & Creating new DataBase on Localhost
mongoose.connect("mongodb://localhost:27017/wikiDB", { useNewUrlParser: true });

//Creating Schema For New Collection (Replacement for Arrays)
const articlesSchema = new mongoose.Schema({
  Title: String,
  Content: String
});

//Creating New Collection
const articles = mongoose.model("articles", articlesSchema);


//Merging all Route Requests using app.route();
app.route("/articles")                         //second & final Method..........

  .get(function (req, res) {
    articles.find({}, function (err, foundedDocs) {
      if (err) { res.send(err); }
      else { res.send(foundedDocs); }
    });
  })

  .post(function (req, res) {
    let inputTitle = req.body.inputTitle;
    let inputContent = req.body.inputContent;

    const newArticles = new articles({
      Title: inputTitle,
      Content: inputContent
    });
    newArticles.save();
  })
  .delete(function (req, res) {

    articles.deleteMany({}, function (err) {
      if (err) { console.log("Some Error occurs"); }
      else { console.log("Successfully deleted all Docs"); }
    });

  });



// Geting Article according to Request from  Routing parameters 
app.route("/articles/:articleName")

  .get(function (req, res) {
    let articleName = req.params.articleName;

    articles.findOne({ Title: articleName }, function (err, foundedArticle) {
      if (err) { res.send("Article not found "); }
      else { res.send(foundedArticle); }
    });
  })

  .put(function (req, res) {
    let replaceDoc = req.params.articleName;

    articles.findOneAndUpdate({ Title: replaceDoc },   //doc query to find to update 
      { Title: req.body.inputTitle, Content: req.body.inputContent }, // new doc
      { overwrite: true },
      function (err) {
        if (err) { res.send("Doc not Found or any error "); }
        else { res.send("Succesfully Updated"); }
      });

  })

  .patch(function (req, res) {
    let changeDoc = req.params.articleName;

    articles.findOneAndUpdate(
      { Title: changeDoc },   //doc query to find to update 
      { $set: req.body }, // object with changes in doc
      function (err) {
        if (err) { res.send("Doc not Found or any error "); }
        else { res.send("Succesfully Updated"); }
      });
  })

  .delete(function (req, res) {
    let deleteDoc = req.params.articleName;
    
    articles.deleteOne( {Title:deleteDoc}, function (err) {
      if (err) { console.log("Some Error occurs"); }
      else { console.log("Successfully deleted all Docs"); }
    });

  });


app.listen(process.env.PORT || 3000, function () {
  console.log("Server started .....");
});


// //........GET

// //featuring all articles
// app.get("/articles", function (req, res) {
//   articles.find({}, function (err, foundedDocs) {
//     if (err) { res.send(err); }
//     else { res.send(foundedDocs); }
//   });
// });


// //Creating new article by taking request from frontend using POSTMAN
// app.post("/articles", function (req, res) {
//   let inputTitle = req.body.inputTitle;
//   let inputContent = req.body.inputContent;

//   const newArticles = new articles({
//     Title: inputTitle,
//     Content: inputContent
//   });

//   newArticles.save();
//   res.redirect("/articles");
// });

// //Delete all Articles (Docs) in Collection using by getting request from DELETE verb
// app.delete("/articles", function (req, res) {

//   articles.deleteMany({}, function (err) {
//     if (err) { console.log("Some Error occurs"); }
//     else { console.log("Successfully deleted all Docs"); }
//   });

// });









