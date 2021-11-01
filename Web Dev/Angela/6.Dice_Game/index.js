
var randomNum= Math.floor(Math.random()*6)+1;
console.log(randomNum);
var randomNum2= Math.floor(Math.random()*6)+1;
console.log(randomNum2);

var srcimg="images/dice"+randomNum+".png";
document.querySelector(".img1").setAttribute("src",srcimg);
var srcimg2="images/dice"+randomNum2+".png";
document.querySelector(".img2").setAttribute("src",srcimg2);

if(randomNum>randomNum2)
{
    document.querySelector(".container h1").innerText="🏁 Winner is Player 1";
}
else if(randomNum===randomNum2)
{    document.querySelector(".container h1").innerText="Draw";
}
else {
   document.querySelector(".container h1").innerText="Winner is Player 2 🏁";  
}
