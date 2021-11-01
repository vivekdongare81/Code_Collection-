     
#include<stdio.h>


//....... Check entered year is leap or not 
     
    int main ()
 {
   int year ;
   printf("Enter year to check it is leap or not");
   scanf("%d",&year);
   
    if (year%4==0 )
   {
     printf("year u entered %d is Leap ",year );
    } 
   else 
   {
     printf("year u entered %d is not leap ",year);
   }
      
     
     return 0;
     }
       
       