var button=document.getElementById("btn");
var text=document.getElementById("data");
var target=document.getElementById("target");

button.addEventListener("click",function()
{
  var newEle=document.createElement("li");
   newEle.innerHTML=text.value;
 target.appendChild(newEle);
 text.value="";
});