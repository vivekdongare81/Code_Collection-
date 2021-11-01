#include<iostream>

#include <algorithm>
using namespace std;

int main()
{
   int n;
    cout << "Enter Total No Packets ";
    cin >> n;
    int arr[n];
    cout << endl
         << "Enter values of Packets (No of Troffees)";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
   int stud;
    cout << "Enter Total No Students ";
    cin >> stud;

    //Sort The Array Of packets
    sort(arr,arr+n);
     for (int i = 0; i < n; i++)
    {
        cout<< arr[i];
    }
    int min=INT_MAX;
    for(int i=0;i+stud<n;i++)
    {  
        int temp=arr[i+stud-1]-arr[i];
        if(temp<min)
        { min=temp;}
      
    }
    cout<<endl<<min;
  

}
