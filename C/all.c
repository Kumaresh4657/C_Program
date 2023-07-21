#include<stdio.h>
#include<stdlib.h>
void create();
void display();
void displaytotal();
struct node
{
    int data;
    struct node*next;
}*head,*temp;
void main()
{
    int option;
    while(1)
    {
        printf("\n 1.create\n");
        printf("\n 2.display\n");
        printf("\n 3.displaytotal");
        scanf("%d",&option);
        switch(option)
        {
            case 1 : create();
            break;
            case 2 : display();
            break;
            case 3 : displaytotal();
            break;
        }
    }
}
void create()
{
    int n;
    printf("enter the no of value: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        struct node*newnode = (struct node*)malloc(sizeof(struct node));
        printf("enter the data: ");
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        if(head==NULL)
        {
            head=newnode;
            temp=newnode;
        }
        else
        {
            temp->next=newnode;
            temp=temp->next;
        }
    }

}
void display()
{
    temp=head;
    while(temp!=NULL)
    {
        printf("%d\n",temp->data);
        temp=temp->next;
    }
}
void displaytotal()
{
    temp=head;
    int count=0;
    while(temp!=NULL)
    {
        temp=temp->next;
        count++;
    }
    printf("%d",count);
}

