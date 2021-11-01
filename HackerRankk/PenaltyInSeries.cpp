#include<bits/stdc++.h>
#include<iostream>
using namespace std;
class Penalty 
 {    public:
    void calPenalty(int ar[])
     {int sum =0;
     for(int i=0;i<5;i+=2)
     {
        
        sum=sum+(ar[i+1]-ar[i]);
      
     }  cout<< sum;
     }
 };
int main()
{   
    int ar[6]={5,2,3,8,6,1}; // 1 2 3 5 6 8 
                            //   1   2   2  = 5
     sort(ar,ar+6);
      for(int i=0;i<6;i++)
     {
        
       cout<< ar[i];
      
     }  
     Penalty P;
     P.calPenalty(ar);
     
    
}