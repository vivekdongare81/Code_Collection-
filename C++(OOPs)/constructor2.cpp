#include <iostream>
using namespace std;

class Book
{
public:
  string title;
  string author;
  int numPages;
  Book()
  {
  }
  Book(string name)
  {
    cout<<name;
  }
};

int main()
{

  Book book1;
  book1.title = "Harry Potter";
  book1.author = "JK Rowling";
  book1.numPages = 500;

  cout << book1.title << endl;

  Book book2;
  book2.title = "Lord of the Rings";
  book2.author = "JRR Tolkien";
  book2.numPages = 300;

  cout << book2.title << endl;

// we can also give name to object inside it by defining its constructors
// while defining object book3 the matched constructor executes

  Book book3("ok  \n");
  { 
    book3.title = " hobbit";
    book3.author = "JRR Tolkien";
    book3.numPages = 300;

    cout << book3.title << endl;
  }

  return 0;
}
