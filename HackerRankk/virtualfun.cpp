#include <iostream >
using namespace std;

class Person 
{  public:
    int age ;
    string name ;
    private:
    void getdata(){};
};

class professor :public Person
{
  int publications ,cur_id;  
  public:
  class Person::  getdata()
  {
      cin>>name>> age >> publications ; 
  }
  void putdata()
  {
      cout<<name << age << publications;
  }
  
};
class student : public Person
{   int marks[6] , cur_id ;
    void getdata()
      {
         cin>>name>>age ;
         for (int i =0;i<6:i++){
            cin>>marks[i];
         } 
      }
      void putdata()
      {
          cout<<name <<age<<sumofmark()<<cur_id;
      }
  
};

int main()
{

    int n, val;
    cin >> n; //The number of objects that is going to be created.
    Person *per[n];

    for (int i = 0; i < n; i++)
    {

        cin >> val;
        if (val == 1)
        {
            // If val is 1 current object is of type Professor
            per[i] = new Professor;
        }
        else
            per[i] = new Student; // Else the current object is of type Student

        per[i]->getdata(); // Get the data from the user.
    }

    for (int i = 0; i < n; i++)
        per[i]->putdata(); // Print the required output for each object.

    return 0;
}
