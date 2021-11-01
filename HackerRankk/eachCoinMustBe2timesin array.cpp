#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter The Size Of Array";
    cin>>a;
    int arr[a];
    cout<<"Enter Elements ";
    for(int i=0;i<(a-1);i++)
    {
        cin>>arr[i];
    }
    // 5 7 2 7 5 2 5 
    int sum=0;
    for(int j=0;j<(a-1);j++)
    {   
        for(int k=0;k<(a-1);k++)
        { 
           if(arr[k]==arr[j])
           { sum++;} 
        }
        if(sum % 2 != 0)
        { cout<<arr[j]; }
    }


}