#include<iostream>
using namespace std;
    //    to check stocks of previous days 
    // how many pervious days stock less than present day
int main()
{
    int n;
    cout<<endl<<"Enter No. of Stocks";
    cin>>n;
    int arr[n];
    cout<<endl<<"Enter The Stocks ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    for(int i=0;i<n;i++)
    {  int count=1;
        for(int j=(i-1);j>=0;j--)
        {   
            if(arr[i]>=arr[j])
            {
                count++;
            }
            else{    break;}
        }
        cout<<endl<<"Before this day,continuous Total stocks less than it is :"<<count;
    }
}