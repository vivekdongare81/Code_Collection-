// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
	public:
		int binary_to_decimal(string str)
	{
		    int n = str.length();
		     int sum=0;
		     string str2="1";
		    
	//	   for(int k =0;k<(n-1) ;k++)
	//	 {cout<<str[k]<<pow(2,2);}
		    for(int j =(n-1);j>=0;j--)
		    {
		       // sum=pow(2,(n-j));
		        if(str[j]==str2[0])
		        { 
		        sum+=pow(2,(n-j));
		        }//cout<<str[j];
		       
		    }
		     return sum;
		}
};

// { Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	string str;
    	cin >> str;
    	Solution ob;
    	int  ans = ob.binary_to_decimal(str);
    	cout << ans <<"\n";
    }
	return 0;
}