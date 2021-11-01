#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter HEight of Butterfly Pattern";
    cin>>n;

    for(int i=1;i<=(n-1);i++)
    {  
         for(int k=1;k<=(2*i-2);k++)
         {
             cout<<" ";
         }
        for(int j=(n-i+1);j>=1; --j )
        {
          cout<<"*";
        }
        cout<<endl;
    }
       
       
    for(int i=1;i<=n;i++)
    {  
         for(int k=1;k<=(2*n-2*i);k++)
         {
             cout<<" ";
         }
        for(int j=1;j<=i; j++ )
        {
          cout<<"*";
        }
        cout<<endl;
    }
        
    
}