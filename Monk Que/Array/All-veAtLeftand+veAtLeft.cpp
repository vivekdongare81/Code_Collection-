#include <iostream>
using namespace std;


int main() {
	int arr[6]={-2,1,-5,6,3,-8};
	
	 /*   int low =0,high=0;
    while(high<=5)
	{
	    if(arr[high]<=0) //-1 -5 2 6 3 -8
	    {
	        swap(arr[low],arr[high]);
	        low++;high++;
	    }
	    else
	    {
	        high++;
	    }
	    
	}*/
    int low =0,high=5;
    while(low<high)
    {
        while(arr[low]<0)
        { low++; }
        while(arr[high]>0)
        { high--; }
        if(low<high)
        { swap(arr[low],arr[high]); }
    }

	for(int i=0;i<6;i++)
	{cout<<arr[i];}
	return 0;
}