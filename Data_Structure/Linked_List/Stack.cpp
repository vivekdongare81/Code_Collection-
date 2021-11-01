#include<iostream>
using namespace std;
#define CAPACITY 5
 int stack[CAPACITY];
    int top=-1;

void push()
{
   if(top==CAPACITY-1)
   {cout<<"Stack is Full";}
   else{
       top++;
       cout<<endl<<"Enter a New Element";
       cin>>stack[top];     
   }
}
void pop()
{   int poppedEle;
   if(top==-1)
   {cout<<"Stack is Empty";}
   else{
       poppedEle=stack[top];
       top--;
   }
}
int  peek()
{
    int poppedEle;
   if(top==-1)
   {cout<<"Stack is Empty";}
   else{
       poppedEle=stack[top];
       
   } return poppedEle;
}
void display()
{
   if(top==-1)
   {cout<<"Stack is Empty";}
   else
   {
     for(int i=top;i>=0;i--)
      { cout<<endl<<stack[i]; }
   }
   cout<<endl;
}
void length()
{
  
   if(top==-1)
   {cout<<"length of stack is" <<0;}
   else
   {    int len=0;
     for(int i=0;i<=top;i++)
      { len++;}
      cout<<endl<<"Length of stack is "<<len<<endl; 
   }
}

int main()
{       
   
//  push();push();push();push();
//       cout<<stack[2];
    while(1)
    {
        cout<<endl<<" Enter The Choice";
        cout<<endl<<"1 : push"<<endl<<"2 : pop"<<endl<<"3 : peek"<<endl<<"4 : display"<<endl<<"5 : length"<<endl;
        int ch;cin>>ch;
        switch(ch)
        {
           case 1:push();
           break;
           case 2:pop();
           break;
           case 3:cout<<endl<<peek();
           break;
           case 4:display();
           break;
           case 5:length();
           break;


        }
     
    }
}