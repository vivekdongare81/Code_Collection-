#include<bits/stdc++.h>
#include<iostream>
using  namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
     cin>>arr[i];   
    }
    sort(arr,arr+n);
    for(int j=0;j<(n-1);j++)
    {
        if((arr[j+1]-arr[j])==1 || (arr[j+1]-arr[j])==0 )
        {}
        else
        {cout<<0; goto end;} 
    }
    cout<<1;
    end: {}
}