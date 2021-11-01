#include <stdio.h>

  //.....Print Star Pattern using Nested loop

/*   int main()
{
  int i ,j ,n ,k;
  printf("Enter No of Rows");
  scanf("%d",&n);
//  printf("Enter No.of Columns");
//  scanf("%d",&k);
  for (i=1;i<=n ;i++)
  {
    for (j=1 ;j<=i; j++)
    {
      
      printf("*");  //or "\t*" for printing triangle
    }
    printf("\n");
  }
} */
  
  
  
  //.........Print Triangle using Nested loop
 
 
 
  /*
 int main()
 {
    int i ,j ,n ,k;
  printf("Enter No of Rows");
  scanf("%d",&n);
//  printf("Enter No.of Columns");
//  scanf("%d",&k);
  for (i=0;i<=n ;i++)
  {
   for (j=n; j>=i;j--)
    {
    
      printf(" ");
    }
   for ( k=1;k<=(2*i+1); k++)

    {
      printf("*");
    }
    printf("\n");
  }
  return 0;
}  
*/


//..........Diamond by nested loops 


/* int main()
 {
    int i ,j ,n ,k ;
  printf("Enter Height of Daimond \n");
  scanf("%d",&n);
  

//First Pyramid
  for (i=0;i<=n ;i++)
  {
   for (j=n; j>=i;j--)
    {
   
      printf(" ");
    }
    for ( k=1;k<=(2*i+1); k++)
    {
      printf("*");
    }
    printf("\n");
  }
  
  //Invert Pyramid 

  for (i=n;i>=0;i--)
  {
   for (j=0; j<=(n-i);j++)
    {
    
      printf(" ");
    }
   for ( k=1;k<=(2*i+1); k++)

    {
      printf("*");
    }
    printf("\n");
  }
  return 0;
}  

  */
  
  
  // Ma'am s logic (put conditions as per printing*)
     
 /* 
  int main()
  {
    int i,j ,n ,m ;
    printf("Enter no.of rows ");
    scanf("%d",&n);
    printf("Enter no.of columns");
    scanf("%d",&m);
    for (i=1;i<=n;i++)
    {
      for(int j=1; j<=m ; j++)
      {
        if(j>=6-i && j<=4+i)
        printf("*");
        else
        printf(" ");
      }
      printf("\n");
      
      
    }
    return 0;
  }
  */
 


 
 
 // ......Check Armstrong Number


 

/*
int main()
{
  int num , remainder, original,cube, sum;
  sum= 0 ;
  printf("Enter any Number to check ");
  scanf("%d",&num );
  original= num;
  
  while (num > 0 )
 {
   remainder = num%10;
   cube= remainder*remainder*remainder;
   sum= sum + cube ;
   num= num/10;
 }
  if(original==sum)
  {
     printf("Number you entered %d is Armstrong whose cube sum is %d", original , sum );
  }  
   else
{  
  printf("Number you entered %d is NOT Armstrong whose cube sum is %d ", original ,sum );
}
  return 0;
} */
  
  
  
  //....... Check Palindrome Number
  

/*

int main()
{
  int num , remainder, original, reversed ;
  reversed= 0 ;
  printf("Enter any Number");
  scanf("%d",&num );
  original= num;
  
  while (num > 0 )
 {
   remainder = num%10;
   reversed = reversed*10 +remainder;
   num= num/10;
 }
  if(original==reversed)
  {
    
  
  
    printf("Number you entered %d is Palindrome", original);
  }  
   else
{
 
  
  printf("Number you entered %d is NOT Palindrome", original);
}
  return 0;
} */
  
  
  
// ........ Table using Nested loop




/*   int main()
{
  int i ,j ,n;
  printf("Enter upto which you want table");
  scanf("%d",&n);
  for (i=1;i<=n ;i++)
  {
    for (j=1 ;j<=10; j++)
    {
      
      printf(" %d X %d = %d \n",i,j,i*j);
    }
    printf("\n");
  }
}
   */


  
   //..... formation of array by calloc ,realloc


/*      

     
     int main  ()
     {
       int *ptr ;

       int i ,n;
       
       //Forming array by calloc
       printf("Enter size of row you want ");
       scanf("%d",&n);
       ptr =(int *)calloc(n ,sizeof(int));
       
       printf("Entet a  elements in array of size %d",n);
      for (i=0;i<n ;i++) 
      {
        scanf("%d",&ptr[i]);
      }
     
      printf("Array you entered is\n " );
      for (i=0;i<n ;i++)
      {
        printf("%d\n",ptr[i]);
      }
      
      //Resizing array by malloc
       int m;
      printf(" Enter the how much size you want to increase/decrease");
      scanf("%d\n",&m);
      n=n+m;
      
       ptr =(int*)realloc(ptr,n*sizeof(int));
      if(m>0)
      {
  printf("Enter elements you want to add\n");
   
      for (i=0;i<n ;i++) 
      {
        scanf("%d\n",&ptr[i]);
      }
      printf("New Array is\n " );
      for (i=0;i<n ;i++)
      {
        printf("%d\n",ptr[i]);
      }
      
      
       }
       else 
       {
         printf("Your array is shorted into");
      for (i=0;i<n ;i++)
      {
        printf("%d\n",ptr[i]);
      }
      
       }
     
    } 
    
    */

/*
    // MATRIX MULTIPLICATION.....

    int main()
{
  
  int i,j,k;

  
  // Input 1st Matrix 
 
 printf("Enter size of 1st Matrix ");
 int a ,b ;
 scanf("%d%d\n",&a,&b);
 printf("Enter matrix elements respectively");
 
  int arr1[a][b];
    
  
 for(i=0;i<=2;i++)
  {
    for(j=0;j<=2;j++)
    { 
      scanf("%d " ,&arr1[i][j]);
      
     }
     printf("\n");
  }
 
 
 
 // Input 2nd Matrix

printf("Enter size of 2nd Matrix ");
 int c ,d ;
 scanf("%d%d\n",&c,&d);
 printf("Enter matrix elements respectively");
 
 
                  
  int arr2[c][d] ;
  
  for(i=0;i<=2;i++)
  {
    for(j=0;j<=2;j++)
    { 
      scanf("%d " ,&arr2[i][j]);
      
     }
    printf("\n");
  }
    
                  
   // MULTIPLYING Matrix 
 
 // here size of multmatrix will be a x d              
                  
  int multarr[a][d];
     int sum =0;
   
  
  for(i=0;i<=2;i++)
  {
    for(j=0;j<=2;j++)
    {
      for(k=0; k<=2;k++)
      {
       int  eachmult=arr1[i][k]*arr2[k][j];
         sum=sum+eachmult ;
        
      } 
        multarr[i][j] = sum ; 
    }
  }
  

// PRINTING MULTIPlied Matrix

printf("Multiplied matrix is \n");
for(i=0;i<=2;i++)
  {
    for(j=0;j<=2;j++)
    { 
      printf("%d " ,multarr[i][j]);
      
     }
     printf("\n");
  }
 }
*/
    
    
    
  
    
    
     
     