#include<iostream>
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

    // Insertion Sort in Accending  2346
    for(int i=1;i<n;i++)
    {   int j=i-1;
    int temp=arr[i];
        while(j>=0 && temp<arr[j] )
        {
            arr[j+1]=arr[j]; 
            j--;
        }
        arr[j+1]=temp;
    }

    
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }

     

}
