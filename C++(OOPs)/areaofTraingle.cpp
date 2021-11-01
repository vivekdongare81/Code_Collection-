#include<iostream>
using namespace std ;
/*
class Traingle 
{
    private:
    
    int length ,breath ;
    public:
    string name ;
    int getarea (int l , int b)
    {    
        length = l ;
        breath = b;
        int mult = length *breath;
        return mult;
    }

};
int main()
{    
    Traingle   obtraingle1 ;
    cout<<"Enter the name of TRaingle ";
    cin >> obtraingle1.name ;
    int  l , b ; 
     int area;
    cout<<"Enter the values of Length and Breath ";
    cin>> l >> b  ;
    area = obtraingle1.getarea(l,b);
    cout<< " The Rea of Traingle "<< obtraingle1.name<< " is "<< area;
     
}     */

class Traingle 
{
    private:
     string name ;
    int length ,breath ;
    public:
  
   
   Traingle(string aname , int x , int y)
   {   name = aname ;
       length= x;
       breath= y;
       string temp ;
       temp = name ;
   }
   string getname()
   {
       return name ;
   };
   int getarea()
   {
      return length *breath;

   };

};

int main()
{    int l,b;
   string name ;
  cout<<"Enter the Name of Traingle  ";
  cin >>name;
     cout<<"Enter the values of Length and Breath ";
    cin>> l >> b  ;

Traingle  t1(name , l , b);

    cout<< " The Area of Traingle "<< t1.getname()<< " is "<< t1.getarea();
}     