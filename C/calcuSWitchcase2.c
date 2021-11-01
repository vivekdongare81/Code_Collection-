  
#include<stdio.h>
 
 
     int  main ()
    {
      float a ,b ;
      char operator ;
      printf ("Enter value of a and b ");
      scanf("%f%f",&a,&b);
     printf(" Enter operator you want to Operate\n");
     scanf("%c",&operator);
     switch (operator)
     {
        case'+':
              printf("a + b = %f",a+b);
              break;
        case '-':
              printf("a - b = %f",a-b);
              break;
        case '*':
              printf("a * b = %f",a*b); 
              break; 
        case '/':
              printf("a / b = %f",a/b);
              break;
        
        default :
             printf("Sorry ,can not calculated");
     }
    
    } 
      