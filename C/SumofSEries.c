
#include<stdio.h>
// ...sum of series  BY SIMPLE METHOD
  
  int main()
 {
   int n ,i,j;
   float factorial =1;
   float sum= 0;
   printf("Enter upto which no.u have to find sum in series");
   scanf("%d",&n);
     for ( i=1;i <= n ; i++)
   { float fact =1;
     for(j=1;j<=i ;j++)
     { 
       fact=fact *j;
     }
    float ratio = i/fact ;

    sum=sum+ratio;
   }
   printf( "Value of sum is %f",sum);
   return 0;
   
  
  }
  
  