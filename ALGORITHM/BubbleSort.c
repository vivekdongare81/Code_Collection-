#include <stdio.h>

// BUBBLE Sort .......

int main()
{
    int arr[8] = {5, 2, 4, 8, 1, 9, 3, 7};

    for (int j = 0; j <= 7; j++)
    {
        for (int i = 0; i <= 7; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
    }

    for (int j = 0; j <= 7; j++)
    {
        printf("%d\n", arr[j]);
    }

    return 0;
}
