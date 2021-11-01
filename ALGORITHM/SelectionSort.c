#include <stdio.h>


// Selection SORT .......



int main()
{
  int arr[8] = {5, 2, 4, 7, 8, 9, 1, 6};

  // comparison loop for n elements upto n-1 as last element directly gets its posii

  for (int i = 0; i < 7; i++)
  {
    int min = i;

    // innner loop for comparing min element with each element after it

    for (int j = i + 1; j < 8; j++)
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