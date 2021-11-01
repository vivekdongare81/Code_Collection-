
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* link;
};
struct node* root = NULL;
int len;
void append();
void addatbegin();
void addatafter();
int length(void);
void display();
void delete();
void reverse();
void main()
{   int ch;
while(1)
{

    printf("Single linked list operations are: \n");
    printf("1.Append\n");
    printf("2.AddAtBegin\n");
    printf("3.AddAtAfter\n");
    printf("4.length\n");
    printf("5.delete\n");
    printf("6.display\n");
    printf("7.Reverse\n");
    printf("8.Exit\n");
    printf("enter your choice: ");
    scanf("%d",&ch);
    printf("Your choice was: %d\n",ch);
           switch(ch)
           {
           case 1: append();
            break;
           case 2: addatbegin();
            break;
           case 3: addatafter();
            break;
           case 4: len = length();
                   printf("length is %d\n",len);
            break;
           case 5:  delete();
            break;
           case 6:  display(root);
            break;
           case 7:  reverse();
            break;
            case 8: exit(0);
            default : printf("invalid input\n");
           }
}
}
void append()
{
    struct node* temp;
    temp=(struct node*)malloc(sizeof(struct node));
    printf("Enter node data\n");
    scanf("%d",&temp->data);
    temp->link=NULL;
    if(root==NULL)
    {
        root= temp;
    }
    else
    {
        struct node* p;
        p=root;
        while(p->link!=NULL)
        {
            p=p->link;
        }
        p->link=temp;
    }


}
void display(struct node* temp)
{
    if(temp==NULL)
    {
        printf("list is empty\n");
    }
    else
    {
    printf("elements are: ");
    while (temp != NULL)
        {
        printf(" %d ", temp->data);
        temp = temp->link;
        }
    }
    printf("\n");
}

int length()
{
    struct node* temp;
    int count=0;
    temp=root;
    while(temp!=NULL)
    {
        count++;
        temp=temp->link;
    }
    return count;
}

void addatbegin()
{
printf("to be build\n");
}

void addatafter()
{
    struct node* temp;
    int loc;
    printf("Enter location after which, node to be inserted: \n");
    scanf("%d",&loc);
    if(loc>length())
    {
        printf("invalid input position: \n");
        printf("current list is having %d nodes only",length());
    }
    else
    {
        int i=1;
        struct node* p=root;
        while(i<loc)
        {
            p=p->link;
            i++;
        }

        temp=(struct node*)malloc(sizeof(struct node));  //new node creation
        printf("enter new node data: \n");
        scanf("%d",&temp->data);
        temp->link=NULL;
        //now just link this new node
        //first make right connection
        temp->link=p->link;  //right connection
        p->link=temp;  // left connection
    }
}

void delete()
{
    struct node* temp;
    int loc;
    printf("Enter node number to be delete: ");
    scanf("%d",&loc);
    if(loc>length())
        printf("invalid position input\n");
    else if (loc==1)
    {
        temp=root;
        root=temp->link;
        temp->link=NULL;
        free(temp);
    }
    else
    {   int i=1;
        struct node* p=root;
        struct node* q=p;
        while(i<loc-1)
        {
            p=p->link;
            i++;
        }
        q=p->link;
        p->link=q->link;
        q->link=NULL;
        free(q);
    }
}




void reverse()
{

    struct node* p=root;
    struct node* q=root;
    int i=0,temp, j=length()-1;
    while(i<j)
    {
        int k=0;
        while(k<j)
        {
            q=q->link;
            k++;
        }
        temp=p->data;
        p->data=q->data;
        q->data=temp;
        p-p->link;
        q=root;
        i++;
        j--;
    }
}