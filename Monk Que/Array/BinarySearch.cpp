#include<iostream>
using namespace std;

int main()
{
   
    int n;
    cout<<"Enter Total No ELements ";
    cin>>n; 
    int arr[n];
    cout<<endl<<"Enter values of Elements";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
   cout<<endl<<"Enter the value of Target";
   int target; cin>>target;
    
    int start=0,end=n-1;
    int found=0;
 while(start<=end)
 {
    int mid=(start+end)/2;

    if(arr[mid]==target)
    {
      cout<<endl<<"Element found at Posi "<<mid+1;
      found=1;
      break;
    }
    if(arr[mid]>target)
    {
      end=mid-1;
    }
    if(arr[mid]<target)
    {
        start=mid+1;
    }
 }
 if(found==0)
 {cout<<endl<<"Element not Present";}
}
