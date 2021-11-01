const mongoose =require("mongoose");

//..... Connect with MongoDB & Creating new /Using Existing DataBase (personsDB)
mongoose.connect("mongodb://localhost:27017/personsDB",{useNewUrlParser:true});

//..... Creating Schema for Collection 
const personSchema= new mongoose.Schema({
name: String,
age : Number,
LuckyNumber:Number 
});

//..... Creating Collection in personDB (person)
const Person =mongoose.model( "Person", personSchema );

//.....Creating Document For Collection
const personDoc1=new Person({
    name:"Vikk",
    age:{
        type:Number,
        min:12,
        max:30,
        required : [ true ,"Your Age is Must Required..."]
    },
    LuckyNumber:69
});

//...... Saving Document into Collection
// personDoc1.save();

const personDoc2=new Person({
    name:"Rikk",
    age:20,
    LuckyNumber:64
});
const personDoc3=new Person({
    name:"Nikk",
    age:18,
    LuckyNumber:61
});
const personDoc4=new Person({
    name:"Cikk",
    age:15,
    LuckyNumber:11
});

// Person.insertMany([personDoc2,personDoc3,personDoc4],function(err){
//     if(err){ console.log(err); }
//     else{ console.log("Doc Added Successfully in Collection..."); }
// });

// Displaying The Collection Created in DB 
// Person.find(function(err,Person){
//     if(err){ console.log(err); }
//     else{
//         mongoose.connection.close();

//         Person.forEach(function(element){
//             console.log(element.name);
//         });
//     }
// });

//...Updating Value of Age of Doc Having Specific Name 
// Person.updateOne({ name:"Nikk" },{ age:25 },function(err){
// if(err){ console.log("Check Value Properly"); }
// else{ console.log("Successfully Updated..."); }
// });

//...Deleting Doc in Collection Having Specific Name 
// Person.deleteOne({name:"Cikk"},function(err){
//     if(err){ console.log("Check Value Properly"); }
//      else{ console.log("Successfully Deleted..."); }
// });


