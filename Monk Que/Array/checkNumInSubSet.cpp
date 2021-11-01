#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<endl<<"size of array";
    cin>>n;
    int arr[n];
    cout<<endl<<"Enter Elements in Array";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<endl<<"Enter Value of Subsets";
    int subs;
    cin>>subs;
    cout<<endl<<"Enter Targeted Element ";
    int target;
    cin>>target;
    int j;
    int firstEle=0;
    int flag=0;
    for(int i=0;i<n;i++)
    {   
        if(i==0 || i%subs==0)
        {
            int start=i ;
            for(int j=start ; j<start+subs;j++)
            {    
                if(arr[j]==target)
                {
                    flag=1;
                    
                }
            }
            if(flag==0)
            { cout<<endl<<0<<" Means Not present all subsets"; goto end;}
            else{ flag=0;}
        }
    } cout<<endl<<1<<" Means present in all subsets";
    end:{}
}