    
#include<stdio.h>
 
 
 //..........Grade by marking for 0to 100

int main ()
{
  int arr[50] ,n ,i =0;
  int a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0;
  printf("Enter no of all students ");
  scanf("%d",&n);
  for (i =0 ; i <n ; i++)
  {
    printf("Enter Marks of %d student",i);
    scanf("%d",&arr[i]);
    
  }
  for (i=0 ; i<n ; i++)
  {
  
  if (arr[i]>80)
  {
    a++;
  }
  if (arr[i]> 60)
  {
    b++;
  }
  if(arr[i]>40)
  {
  c++;
  }
  if( arr[i]<=40)
  {
   d++; 
  }
  if(81<arr[i]>100)
  {
    e++;
  }
  if(61<arr[i]>80)
  {
    f++;
  }
  if(41<arr[i]>60)
  {
    g++;
  }
  if(0<arr[i]>40)
  {
    h++;
  }
   }
  
  printf("Number of Students having grade A is %d\n",a);
  printf("Number of Students having grade B is %d\n",b);
  printf("Number of Students having grade C is %d\n",c);
  printf("Number of Students having grade D is %d\n",d);
   printf("Number of Students having grade E is %d\n",e);
   printf("Number of Students having grade F is %d\n",f);
   printf("Number of Students having grade G is %d\n",g);
   printf("Number of Students having grade H is %d\n",h);
  
  return 0;
}