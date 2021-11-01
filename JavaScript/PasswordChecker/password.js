var password="vik6969";
var count=0;
var entered;
var limit=3;
var guess=true;
while(password!=entered && guess)
{  
if(count<limit)
{
    entered=window.prompt("Enter Your Password"); 
count++;  
}
else
{
  guess=false;
    break;
}
}
if(guess==false)
{
    alert("Account Blocked !");
}
else{
    alert("Yoo You Got It !");
}
