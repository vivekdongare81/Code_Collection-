#include<iostream>
#include<bits/stdc++.h>
using namespace std;

 void quicksort(int arr[] , int start ,int end)
{  // 617945
  //  ps   e    
 if(start<end)
 {
   int pivot= start;
   int s=start;
   int e=end;
while(s<e)
{  
  while(arr[s]<arr[pivot]  )
  { s++; }
  while(arr[e]>arr[pivot])
  { e--; }
   if(s<e)
   { 
       swap(arr[s],arr[e]);
   }  
}    // after end of this loop s and e are on same element which we have to exchange with pivot
     /* 615497                  
        p  s
           e   
 --------------------
        415697       This pivot got sorted i.e 6
        s  p
           e               
           
          */  
            
  swap(arr[s],arr[pivot]);
  

   quicksort(arr,start,s-1);
   quicksort(arr, s+1,end);
 }

}

 
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
    int start=0,end=n-1;
 // 213965
    quicksort(arr ,start,end);
    
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
}