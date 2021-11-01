#include<iostream>
#include<vector>
using namespace std;

void add_at_last(vector<int>&v1)
{
  cout<<endl<<"Enter Element ";
  int n;
  cin>>n;
  v1.push_back(n); 
  cout<<endl<<"vector is";
  for(int i: v1)
   {
       cout<<" "<<i;
   }
}

void delete_at_last(vector<int>&v1)
{
   v1.pop_back(); 
  cout<<endl<<"vector is";
  for(int i: v1)
   {
       cout<<" "<<i;
   }
}


void insert_at(vector<int>&v1)
{ cout<<endl<<"Enter Posi to Enter ";
  int m;
  cin>>m;

  cout<<endl<<"Enter Element ";
  int n;
  cin>>n;
  v1.insert(v1.begin()+(m-1),n); 
  cout<<endl<<"vector is";
  for(int i: v1)
   {
       cout<<" "<<i;
   }
}


void capacity(vector<int>&v1)
{
  cout<<endl<<"Capacity is "<<v1.capacity()<<endl;
  for(int i: v1)
   {
       cout<<" "<<i;
   }
}

void size(vector<int>&v1)
{
   cout<<endl<<"Size of Vector is "<<v1.size()<<endl;
 
  for(int i: v1)
   {
       cout<<" "<<i;
   }
}



int main()
{
   vector<int>v1;
  while(1)
  {
      cout<<endl<<"choose Operation";
      cout<<endl<<"1. Add at last "<<endl<<"2. Remove From Last "<<endl<<"3. Insert At Specific posi"<<endl<<"4. capacity"<<endl<<"5. Size ";
      int n; cin>>n;
      switch(n)
      {
        case 1 : add_at_last(v1);
                    break; 
        case 2 : delete_at_last(v1);
                    break;
        case 3 : insert_at(v1);
                    break;
        case 4 : capacity(v1);
                    break;
        case 5 : size(v1);
                    break;
        default :cout<<endl<<" Invalid Input ";
      }
  }
   
 
}
