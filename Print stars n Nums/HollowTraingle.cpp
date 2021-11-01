#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the numb of lines of Square(n*n) u want ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {    for(int k=1;k<=(n-i);k++)
         {
           cout<<" ";
         }
        for(int j=1;j<=(2*i-1);j++)
        {   if((i==n && j%2!=0) || j==1 || j==(2*i-1))
            cout<<"*";
            else 
            cout<<" ";
        }
        cout<<endl;
    }
}