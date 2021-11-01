
#include<stdio.h>
 
 
 //........Calculator using Switch Statement

    
      int main ()
    {
      int a ,b ;
      int x ;
      printf ("Enter value or a and b ");
      scanf("%d%d",&a,&b);
     printf(" Choose which operation to operate\n 1.sum \n2.sub\n3.mult\n 4.div\n 5.mod");
     scanf("%d",&x);
     switch (x)
     {
        case 1:
              printf("a + b = %d",a+b);
              break;
        case 2:
              printf("a - b = %d",a-b);
              break;
        case 3:
              printf("a * b = %d",a*b); 
              break; 
        case 4:
              printf("a / b = %d",a/b);
              break;
        case 5:
               printf("a % b = %d",a%b);
               break;
        default :
             printf("Sorry ,can not calculated");
     }
    
    }
  