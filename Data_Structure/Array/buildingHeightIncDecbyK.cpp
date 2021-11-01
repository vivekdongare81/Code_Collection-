#include<iostream>
using namespace std;


class Solution {
  public:
    int getMinDiff(int arr[], int n, int k) {
      int min =-1 ,max=0;
       for(int i=0;i<n;i++)
       { 
           if((arr[i]-k)<=0)
           { arr[i]=arr[i]+k; }
           else 
           {arr[i]=arr[i]-k;}
          
           if(min>arr[i] || min<0)
           {min=arr[i];}
           if(max<arr[i])
           { max=arr[i]; }


       } return (max-min);
    } 
};

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
    int k;cin>>k; 
    Solution S;
    S.getMinDiff(arr,n,k);
    for (int i = 0; i < n; i++)

    {
        cout << arr[i];
    }

    }