#include<stdio.h>
#include<stdlib.h>

struct node
{
int data;
struct node* next;

}*top=NULL,*temp,*newnode;

void push();
void pop();
void peek();
void display();

void main()
{
    int option;
    while(1)
    {
        printf("\n\n**Stack Linked List**\n\n");
        printf("1.Push\n");
        printf("2.Pop\n");
        printf("3.Peek\n");
        printf("4.Display\n");
        printf("5.Exit\n");
        printf("Enter your Choice:(1,2,3,4,5)\n");
        scanf("%d",&option);
        switch(option)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            peek();
            break;
        case 4:
           display();
            break;
        case 5:
            exit(0);
            break;
        }
    }
}
void push()
{
 int n,i;
 printf("enter count: ");
 scanf("%d",&n);
 for(i=0; i<n; i++)
 {
newnode=(struct node*)malloc(sizeof(struct node));
   printf("enter data: ");
   scanf("%d",&newnode->data);
   newnode->next =NULL;
   if(top==NULL)
   {
       top=newnode;
       temp=newnode;
   }
   else
   {

       newnode->next=top;
       top=newnode;
   }
 }
}
 void pop()
 {

     if(top==NULL)
     {
         printf("It is Empty");
     }
     else
     {   printf("%d",top->data);
         temp=top;
         top=top->next;
         free(temp);
     }
 }
 void peek()
 {
     temp=top;
     if(top==NULL)
     {
         printf("It is Empty");
     }
     else{
        printf("The Peek Element is %d",top->data);
     }
 }
 void display()
 {

     temp=top;
     while(temp!=NULL)
     {
         printf("%d ",temp->data);
         temp=temp->next;

     }
 }

