
#include<iostream>
using namespace std ;



class Book{
     public:
          string title;
          string author;
          int numPages;

          // we can create multiple constructors 


          Book(string atitle, string aauthor , int anumPages )
        {
               title = atitle;
               author = aauthor;
               numPages =anumPages ;
          }

         Book()
         {
             title = "NO tITLE";
               author = "no Author";
               numPages = 0 ;  
         }
};

int main(){
    // first  constructor is applicable to it as it has 3  arguments 
     Book book1("Harry Potter", "JK Rowling" , 300);
     cout << book1.title << endl;
     cout << book1.author << endl;
     cout << book1.numPages<< endl;

// first  constructor is applicable to it as it has 3  arguments 
     Book book2("Lord of the Rings", "JRR Tolkien" , 500);
     cout << book2.title << endl;
     cout << book2.author << endl;
     cout << book2.numPages<< endl;

 // second constructor is applicable to it as it has no arguments 
     Book book3;
     cout << book3.title << endl;
     cout << book3.author << endl;
     cout << book3.numPages<< endl;


     return 0;
}
