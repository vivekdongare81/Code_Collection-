#include <iostream>
#include <string>
using namespace std;
class Human{
private:
 string name;
 int age;
public:
 Human(){
 name = "nonane";
 age = 0;
 cout << "constructor is called when u create an object of human"<<endl;
 }
 void display(){
 cout <<name<<endl<<age<<endl;
 }
};
int main()
{
 Human anil;
 anil.display();
 return 0;
}