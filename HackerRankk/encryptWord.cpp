
#include<iostream>
using  namespace std;
int main()
{  
    string S;
   
    getline(cin, S);
     int arr[S.length()];
    for(int i=0;i<S.length();i++)
  {
        S[i]=S[i]+2;
   }
    for(int i=0;i<S.length();i++)
    {
        cout<<S[i];
    }

}