#include<iostream>
using namespace std;

int main()
{
   int n;
   cout<<"Enetr size of crosss";
   cin>>n;

   for(int i=1;i<=n;i++)
   {
     for(int j=1;j<=n;j++)
     {
         if(i==j || (n-j)==(i-1))
         { cout<<"*"; }
        else
         cout<<" ";
         
     }
     cout<<endl;

   }  
}