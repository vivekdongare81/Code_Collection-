/*    Zig-Zag Puzzle

A coding competition is going in a college. Vineeta is fond of solving problems so with that mindset she decides to participate in that competition.

Her teacher likes to give problem related to arrays. So today her teacher gives an array of distinct elements and asked to rearrange the elements of the array in a zig-zag fashion.

The converted array should be in form of: a<b>c<d>e<f.

Your task is write a code to solve this problem in a zig-zag fashion.

Input Format:

First line consists total no of elements in the array.

Second line consists the data of the array.

Output Format:

Converted array elements separated by spaces.*/

#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
  
    int n;
    cout << "Enter Total No ELements ";
    cin >> n;
    int arr[n];
    cout << endl
         << "Enter values of Elements";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }  
    //3964871
    for(int i=0;i<n-1;i++)
    {
        if(i%2==0)
        {
            if(arr[i]>arr[i+1])
            { swap(arr[i] ,arr[i+1]) ;}
        }
        if(i%2!=0)
        {
            if(arr[i]<arr[i+1])
            { swap(arr[i] ,arr[i+1]) ;}
        }
    }



/* using sorting 
    sort(arr,arr+n); 
//12345678
//13254768
    for(int j=2;j<n;j=j+2)
    { int temp=arr[j];
       arr[j]=arr[j-1];
       arr[j-1]=temp;
    }
       */
    for (int i = 0; i <n; i++)
    {  
        cout<<arr[i];
      
    }
}
