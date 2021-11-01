#include<iostream>
#include<bits/stdc++.h>
using namespace std;

 

 
int main()
{
    
    // int n;
    // cout << "Enter Total No ELements ";ṇ
    // cin >> n;
    int arr[5]={2,5,7,8,13};
    int arr2[5]={1,4,6,10,17};
    int result[10];
    int k=0; int i=0;int j=0;
    while(i<5 && j<5)
    {
      //9 cout<<1;
       if(arr[i]<arr[j])
       {
           result[k]=arr[i]; i++;k++;
       }
       else
       {
           result[k]=arr2[j];j++;k++;
       }
    }
    
    for (int i = 0; i < 10; i++)
    {
        cout <<result[i];
    }
}