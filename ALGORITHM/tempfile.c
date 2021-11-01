#include <stdio.h>

void main()
{
    int arr[100];
    int n, i, j, tmp;
    
    // Selection SORT .......
    
	
       printf("\n\nsort elements of array in ascending order :\n ");
       printf("----------------------------------------------\n");	

    printf("Input the size of array : ");
    scanf("%d", &n);


  // comparison loop for n elements upto n-1 as last element directly gets its posii

  for (int i = 0; i < (n-1); i++)
  {
    int min = i;

    // innner loop for comparing min element with each element after it

    for (int j = i + 1; j < n; j++)
    {
      if (arr[min] > arr[j])
      {
        min = j;
      }
    }
    // If any smaller element exist than min it should replaced at position of min
    if (min != i)
    {
      int temp = arr[i];
      arr[i] = arr[min];
      arr[min] = temp;
    }
  }

  // Printing array

  for (int j = 0; j <= 7; j++)
  {
    printf("%d\n", arr[j]);
  }

}