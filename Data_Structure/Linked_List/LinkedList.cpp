#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *link;
};

void append(node * &nameofLL)     //nameofLL 
{
    node *temp = new node();
    cout<<"Enter Data for New Node";
    cin>>temp->data;
   temp->link=NULL;
    if (nameofLL == NULL)
    {
        nameofLL= temp;
        return;
    }
    else
    {
      node* ptr=nameofLL;
      while(ptr->link !=NULL)
      {  
         ptr=ptr->link;
      }
      ptr->link=temp;
      
    }
}

void display(node* &root)
{
    node*ptr=root;
    cout<<endl;
    while(ptr != NULL)
    {    cout<<"->"<<ptr->data;
        ptr=ptr->link;
    }
    
}

void addAtstart(node * &root)
{
    node *temp = new node();
    cout<<"Enter Data for New Node";
    cin>>temp->data;
   temp->link=NULL;
    if (root== NULL)
    {
        root= temp;
        return;
    }
    else
    {  temp->link=root;
       root=temp;
    }
    
}


void lengthofLL(node* &root)
{
   if(root==NULL)
   {
      cout<<"Linked list have No Nodes";
   }
   else
   { node* ptr =root;
     int len =1;
     while(ptr->link!=NULL)
      {
          ptr=ptr->link;
          len++;
      }
      cout<<endl<<" Length of LL is "<<len<<endl;

   }

}

void addAfter(node * &root)
{
     node* temp;
     temp=new node();
     temp->link=NULL;
     cout<<endl<<"Enter the Node After which YOu want to Add Node ";
     int target ;cin>>target;
     cout<<endl<<" Enter the Data of New DAta ";
     cin>>temp->data ;

     if(root==NULL)
     {
         root=temp;
     }
     else 
     {
    node * ptr =root;
         while(ptr->data != target)
         {
             ptr=ptr->link;
         }
         temp->link=ptr->link;
         ptr->link=temp;
     }

}


int main()
{   node*root=NULL;
  
    while(1)
    {   int choice;
        cout<<endl<<"Enter the Choice from ";
        cout<<endl<< "1 : append"<<endl<<"2 : display"<<endl<<"3 : addAtstart"<<endl<<"4 : lengthofLL"<<endl<<"5 : addAfter "<<endl;
        cin>>choice;
        switch(choice)
        {
            case 1 : append(root);
                     display(root);
            break;
            case 2 : display(root);
            break;
            case 3 : addAtstart(root);
                     display(root);
            break;
            case 4 : lengthofLL(root);
                     display(root);
            break;
            case 5 : addAfter(root);
                     display(root);
            break;
        }
    }
}
    