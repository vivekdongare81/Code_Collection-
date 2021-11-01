#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter Total No ELements ";
    cin>>n; 
    int arr[n];
    cout<<endl<<"Enter values of Elements";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int target;
    cout<<endl<<"Enter Value TO Search ";
    cin>>target;
    int found=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==target)
        {
            cout<<endl<<"Element Found at position "<<i+1;
            found=1;
            break;
        }

    }
    if(found!=1)
    {
        cout<<endl<<"Element Not Found";
    }
}
