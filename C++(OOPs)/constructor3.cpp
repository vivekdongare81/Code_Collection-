
#include <iostream>
using namespace std;

class student
{
public:
    string name;
    string sub;
    int gpa;
    string handicap;

    student(string forname, string forsub, int forgpa)
    {
        name = forname;
        sub = forsub;
        gpa = forgpa;
    }
    student(string ishandicap)
    {
        cout << "this stud is handicap";
    }
    student()
    {
        cout << "hey i am empty";
    }
};
int main()
{
    student stud1("vivek", "sem2", 7);
    cout << stud1.name;
cout<<endl;
    student stud2("handi");

cout<<endl;
    student stud3;
    
}
