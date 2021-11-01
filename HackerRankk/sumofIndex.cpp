#include<iostream>
using namespace std;
int main()
{ 
    int arr[4]={2,6,4,3};
    int target ;
    cin>>target;
    for (int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            if((arr[i]+arr[j])==target)
            {
                cout<<"["<<i<<","<<j<<"]";
               
            }
           
        } break;
    }

}

