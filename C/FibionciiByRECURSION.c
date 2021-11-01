  
#include<stdio.h>


 
  int main()
{
  
  int a =0 ,b =1 ,n ;
  printf("Enter how many First No.of Fabonci series you want ");
 scanf("%d",&n);
 printf("%d\n%d\n",a ,b);
for (int i =1 ; i<=n ;i++)
{
    printf("%d\n", fibioncii(i));
 }
 

  }
  
  int fibioncii(int n )
  { int c;
    
    if (n<=1)
    {
      return 1;
    }
    else
    {
      return fibioncii(n-1) + fibioncii(n-2) ;
    }
  }
  