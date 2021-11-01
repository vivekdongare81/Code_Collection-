#include<iostream>
using namespace std;
  
        // To replace present ele into sumof all ele after it 
int main()
{
    int n;

    cout<<endl<<"Enter size of an array";
    cin>>n;
        int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(int j=0;j<n;j++)
    {  int sum=0;
        for(int k=j+1;k<n;k++)
        {
            sum=sum+arr[k];
        }
        arr[j]=sum;
    }
 cout<<endl<<"After replacing all ele into sum of their next Elements";
cout<<endl<<"New array is";
    for(int i=0;i<n;i++)
    {
        cout<<endl<<arr[i];
    }
 
}

