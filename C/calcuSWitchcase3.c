    
#include<stdio.h>
 
 
 //....,.,... Calculator using switch
      


int main()
{
    char op;
    float num1, num2;

    printf("Enter operator either + or - or * or /: ");
    scanf("%c",&op);

    printf("Enter two operands: ");
    scanf("%f%f",&num1,&num2);

    switch(op)
    {
        case '+':
            printf(" For Addition=%f", num1+num2);
            break;

        case '-':
            printf(" For Sub=%f", num1-num2);
             break;

        case '*':
            printf(" For Mul=%f", num1*num2);
            break;
              
         default:
           printf("Calculation not performed");
           }      
        } 

  
  
  