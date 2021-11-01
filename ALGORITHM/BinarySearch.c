
     #include<stdio.h>

// BINARY search ,.......


int main()
{ 
             // 0    1   2   3   4   5   6   7
  int arr[8] = {22, 33, 44, 55, 66, 77, 88, 99};
  int n = 8, start = 0, end = (n - 1);

  //to find 88
  int target;
   printf("Enter the number whose posii u want ");

  scanf("&d", &target);

 
  while (start <= end)
  {
    int mid = (start + end) / 2;

    if (target == arr[mid])
    {
      printf("\nTarget found at index position %d", mid);
      break;
    }
    if (target < arr[mid])
    {
      end = (mid - 1);
    }
    if (target > arr[mid])
    {
      start = (mid + 1);
    }
  }
}   


