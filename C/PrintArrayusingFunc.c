#include <stdio.h>

#include<string.h>


void print(char arr[],int size)
{
for (int i =0; size>i ;i++)
{
  printf(" %c",arr[i]);
  }
}



int main()
{

 char arr[] ="my name is vivek ";
  int size =sizeof(arr)/sizeof(arr[0]); 

  print(arr,size); 
    
  
    return 0;
}



//OR

/*

int main()
{


 char arr[17] ="My Name is Vivek";
  

  print(arr); 
    
  
   return 0;
}
 void print(char arr[])
{
  int i =0;
while( arr[i]!='\0')

{
  printf(" %c",arr[i]);
  i++;
  }
}
 */
