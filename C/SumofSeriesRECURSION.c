 #include<stdio.h>

// ....,.....Program to first sumof n term of series

// .....BY RECURSION
  
  int main()
  {
    int j ,i ;
    float r=0 ,sum=0;
    printf("Enter a number upto which you have to calculate sum in series ");
    scanf("%d",&j);
    for ( i =1 ; i <= j;i++)
    {
      r=  fraction ( i);
     
      float ratio =i/r ;
     
      sum = sum + ratio;
    }
    printf("Sum of Series upto %d is %f",j,sum);
    
  return 0;
  }
  int  fraction(int i)
  {  int  factor =1;  
   
   if(i==0)
   {
     return 1;
   }
 else   {
      factor= i *(fraction(i-1));
    }
  
   
    return factor;
    
  }   
     