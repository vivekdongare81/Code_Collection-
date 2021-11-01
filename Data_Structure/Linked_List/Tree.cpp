#include<iostream>
using namespace std;
 
 struct node
 {
     struct node* right;
     struct node* left;
     int data ;

 };
struct node *root= NULL;

 void insert()
    { struct node * temp;
    temp=new struct node ();
    cout<<endl<<"Enter the data in child"<<endl;
    cin>>temp->data;
    temp->left=NULL;
    temp->right==NULL;
   
    if(root==NULL)
    {
        root=temp;
    }
    else{
        struct node * parent , *current ;
        current=root;
        while(current)
        {
            parent=current;
            if(current->data>temp->data)
            {current=current->left;}
            else
            {current=current->right;}
        }
        if(parent->data>temp->data)
        {  parent->left=temp;

        }
        else{parent->right=temp;}
        delete current;
    }
    }

    void display()
    { 
       if(root==NULL)
       {cout<<"Tree is Empty";}
       else{ 
           struct node* current=root;
           cout<<current->data;
           while(current==NULL)
           {
               if(current->right!=NULL)
               {
                   cout<<endl<<current->data;
                   current=current->right;
               }
               
               if(current->left!=NULL)
               {
                   cout<<endl<<current->data;
                   current=current->left;
               }

           }
       }
    }

int main()
{
    insert();
    cout<<"OK inserted";
     insert();
     cout<<"OK inserted";
      insert();
      cout<<"OK inserted";
       insert();
       cout<<"OK inserted";

    display();
    
}