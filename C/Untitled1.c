#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node*next;
};
struct node*head=NULL;
void insert()
{
   struct node*newnode=(struct node*)malloc(sizeof(struct node));
   printf("Enter the value");
   int a;
   scanf("%d",&a);
   newnode->data=a;
   if(head==NULL)
   {
       newnode->next=NULL;
       head=newnode;
   }
   else
   {
       newnode->next=head;
       head=newnode;
   }
}
void display()
{

}
void deletefrombegining()
{

}
int main()
{
    int choice;
    while(1)
    {
        printf("Enter the choice");
        printf("1.insert\n 2.display\n 3.delete\n");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            printf("enter the value");
            insert();
            break;
        case 2:
            printf("The values in the list are");
            display();
            break;
        case 3:
            deletefrombegining();
            break;
        default:
            printf("enter the wrong values");
            break;

        }
    }

}

