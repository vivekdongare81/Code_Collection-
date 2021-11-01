#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "Enter Total No ELements ";
    cin >> n;
    int arr[n];
    cout << endl
         << "Enter values of Elements";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // sorting array in accending order logic
    for (int i = 0; i < n - 1; i++)
    {
        int flag = 0;
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                int temp;
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                flag = 1;
            }
        }
        if (flag == 0)
        {
            break;
        }
    }
    cout << endl
         << "Sorted Array is ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
}
