/* Apartments with Flower Garden View

In Goa, there are n apartments in a line. You are given an integer array heights of size n that represents the heights of the apartment in the line.

The flower is to the right of the apartments. An apartment has a flower garden view if the apartment can see the flower garden without any obstructions. Formally, an apartment has a flower garden view if all the appartments to its right have a smaller height.

Return an integer array of indices of apartments that have a flower garden view, sorted in increasing order.

Input Format:

First line consists an integer n which gives the number of apartments. Second line consists n integers which gives the height of the apartments..

Output Format:

Array of indices of apartments sorted in increasing order.*/




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
    //4312
    int iarr[n];
    
    int max = arr[n - 1];
    iarr[n-1] = 1;
    for (int i = n - 2; i >= 0; i--)
    {
        if (arr[i] > max)
        {
            iarr[i]=1;

            max = arr[i];
        }
        else{ iarr[i]=0;}
    }

    for (int i = 0; i <n; i++)
    {  if(iarr[i]==1)
        { cout<<i;}
      
    }
}
