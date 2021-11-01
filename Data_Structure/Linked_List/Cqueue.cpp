#include<iostream>
using namespace std;
#define CAPACITY 5

int cqueue[CAPACITY];
int front=-1;
int tail=-1;

void push()
{
   if(tail==CAPACITY-1 || tail==front-1)
   {cout<<"Queue is Full";}
   else if (tail==-1 && front ==-1)
   {
       cout<<endl<<"Enter the Element";
       tail++;

       cin>>cqueue[tail];
       cout<<endl<<queue[tail]<< " entered";
       
   }
   else if()
   {

   }
}

void pop()
{
   if(tail==0)
   {cout<<"Stack is EMpty";}
   else{
       int ele =cqueue[front];
       for(int i=0;i<tail;i++)
       {
           queue[i]=cqueue[i+1];
       }
       tail--;
   }
   
}

void display()
{
  if(tail==0)
  {cout<<"queue  is Empty";}
  else{
      int  i=0;
      for(i=0;i<tail;i++)
      {
          cout<<cqueue[i];
      }
  }
}
void lenght()
{

  if(tail==0)
  {cout<<"queue  is Empty";}
  else{ int len=0;
      int  i=0;
      for(i=0;i<tail;i++)
      {
          len++;
      } cout<<endl<<" Length is "<<len;
  }
}
int main()
{
   while(1)
   {
       cout<<endl<<"ENter the Choice"<<endl<<"1 : push \n"<<"2 : pop\n"<<"3 : display\n"<<"4 : length\n"<<"5 : Exit\n"<<endl;
       int chr ;cin>>chr;
       switch(chr)
       {
           case 1: push();
           break;
           case 2 : pop();
           break;
           case 3: display();
           break;
           case 4 : lenght();
           break;
           case 5 : exit(1);

       }
   }
}