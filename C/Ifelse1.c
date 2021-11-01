#include<stdio.h>

//......Find greatest from 3 numbers using if else


int main (){
  int num1,num2,num3;
  printf(" Input any 3 numbers to compare largest among them ");
  scanf("%d%d\n%d",&num1,&num2,&num3);
  if (num1>num2 && num1>num3)
  {
    printf("The greatest number is %d",num1);
  }
  else if (num2>num1 && num2>num3)
  {
    printf("The greatest number is %d",num2);
  }
  else if (num3>num1 && num3>num2)
  {
    printf("The greatest number is %d",num3);
  }
  return 0;
  } 
  
  
  
  

