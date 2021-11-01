#include<iostream>
using namespace std;

int main()
{
    int a;
    cout<<endl<<"Enter Size of Array";
   cin>>a;
    int arr[a];
    cout<<endl<<"Enter the Elements ";
   for (int i=0;i<a;i++)
    {cin>>arr[i];}
    cout<<endl<<"Enter Targetted Element";
    int target ;
    cin>>target;
    cout<<endl<<"Enter The lenght of Subscripts";
    int slot;
    cin>>slot;
    for(int j=0;j<a;j++)   
    {    if(j==0 || j % slot ==0)
        {  int start = j;int sum=0;
        for(int k= start;k<(start+slot);k++)
        {  
            if(arr[k] == target )
            { 
               sum=1;
            } 
            //cout<<arr[k];
            
        }  if(sum != 1){ cout<<0; goto print1;} 
          
        }
       
    } cout<<1;
    print1:  {}



}