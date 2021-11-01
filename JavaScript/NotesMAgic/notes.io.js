console.log("This is Notify ");
showcard();

var btn=document.getElementById("addbtn");

btn.addEventListener("click",function(e){

    var newtext=document.getElementById("addtext");
    var notes=localStorage.getItem("notes");

    if(notes==null)
{
    notesObj=[];
}
else{
  notesObj=JSON.parse(notes);
}

notesObj.push(newtext.value);
localStorage.setItem("notes",JSON.stringify(notesObj));
newtext.value="";
console.log(notesObj);

showcard();
});

function showcard(){

    var notes=localStorage.getItem("notes");
if(notes==null)
{
    notesObj=[];
}
else{
  notesObj=JSON.parse(notes);
}
var html="";

notesObj.forEach(function(element,index){
 html+=`<div  id="notescard" class="card my-2 mx-2" style="width: 18rem;">
 <div class="card-body">
   <h5 class="card-title">Note Card ${index+1}</h5>
   <p class="card-text">${element}</p>
   <button id="${index}"vonclick="deleteNote(this.id)" class="btn btn-sm btn-primary">Delete Note</button>
 </div>
</div>`
   });
 
   let newEle=document.getElementById("notescard-container");
   if(notesObj.length!=0)
   {
    newEle.innerHTML=html;
   }
   else
   {
     newEle.innerHTML="Empty..";
   }
}

function deleteNote(index)
{
  var notes=localStorage.getItem("notes");
  if(notes==null)
  {
      notesObj=[];
  }
  else{
    notesObj=JSON.parse(notes);
  }
  notesObj.splice(index,1);
 localStorage.setItem("notes",JSON.stringify(notesObj));
 showcard(); 
}