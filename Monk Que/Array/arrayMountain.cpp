#include<iostream>
using namespace std;
        //    To cheak if array is Mountain or not 
        //  13456432
int main()
{
    int n;
    cout<<endl<<"Enter the size of array";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[n];
    }
   
    int peak=n/2;
    int flag=0;
    for(int j=0;j<peak;j++)
    { 
        if(arr[j]>arr[j+1])
        { flag=1;}
    }
    for(int k=peak;k<n;k++)
    {   
        if(arr[k]<arr[k+1])
        { flag=1;}
    }
    if(flag==1)
    {
        cout<<endl<<"Not mountain";
    }
    else
    cout<<endl<<"array is Mountain";

}