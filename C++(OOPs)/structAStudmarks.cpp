#include<iostream>
using namespace std;

struct Marks {
    int roll ;
    string name ;
    int chem , phy , math;

};
int main()
{
    Marks s1[5];
    
        float percenta[5] ;
    for (int i = 0; i<5 ; i++)
    {
        cout << " Enter  RollNo..of "<<i+1<< "Student ";
        cin>> s1[i].roll;

        cout <<"Enter  name  of"<<i+1<< "Student ";;
        cin>> s1[i].name;

        cout << " Enter Marks of chem"<<i+1<< "Student ";;
        cin>> s1[i].chem;

          cout << " Enter Marks of phy"<<i+1<< "Student ";;
        cin>> s1[i].phy;

          cout << " Enter Marks of math"<<i+1<< "Student ";;
        cin>> s1[i].math;

        percenta[i]= (((s1[i].chem+s1[i].phy+s1[i].math)*100)/300);

        //cout<<"percentages of "<< i << " student is "<<percenta[i] <<endl;
  }
  cout<<"The Percentages of 5 students are ";
for (int i = 0; i<5 ; i++)
{
    cout<<"Percentages of Student "<<i+1<<" is "<<percenta[i]<<endl;
}
}
