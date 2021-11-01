 
 #include<stdio.h> 
 
 //........Form fibonacii series

       int main()
    {
      int a ,b ,c,n ,i;
      a=0 ,b=1;
      printf("Enter upto how many no.of Fibonacii series you want ");
      scanf("%d",&n);
     
      for (i=1 ;i<=n; i++)
      {
         
        printf("%d\n",a);
        
     c=a+b;
      a=b;
      b=c; 
   
     }
    }
      
        
  