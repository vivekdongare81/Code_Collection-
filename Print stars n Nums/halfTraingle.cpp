#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the numb of lines of Square(n*n) u want ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}