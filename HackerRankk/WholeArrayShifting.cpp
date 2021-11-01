#include<iostream>
using namespace std ;

int main()
{
    int n , shift ;
    cin>>n;
    cin>>shift;
    int arr[n];
    for(int j=0;j<n;j++)
    {
        cin>>arr[j];
    }
    for(int j=0;j<shift;j++)
    {
    for(int i=0;i<(n-1);i++)
    {   int temp=arr[i];
       arr[i]=arr[i+1];
       arr[i+1]=temp;
       temp=arr[i+1]; 
    }
    }
    for (int k=0;k<n;k++)
    {
        cout<<arr[k]<<" ";
        }
}
