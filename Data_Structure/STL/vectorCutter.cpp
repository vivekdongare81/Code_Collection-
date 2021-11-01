
// C++ program to illustrate
// map::insert({key, element})
#include <bits/stdc++.h>
using namespace std;
using namespace std;


int main() {
    vector<int> v1;
    int i;cin>>i;
    for(int k=0;k<i;k++)
    {int temp;
        cin>>temp;
        v1.push_back(temp);
    }
    int first;
    cin>>first;
    // auto itr=v1.begin();
    // advance(itr,first-1);
    v1.erase(v1.begin()+first-1);
    
    int s1;cin>>s1;
    int s2;cin>>s2;
     v1.erase(v1.begin()+s1-1,v1.begin()+s2-1);
     cout<<v1.size()<<endl;
     for(auto p:v1)
     {
         cout<<p<<" ";
     }
    
    
    
    
    return 0;
}
