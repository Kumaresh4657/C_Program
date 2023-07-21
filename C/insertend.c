#include <stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
}*head,*tail;

void insert()
{
    int value;
    struct node *newnode=malloc(sizeof(struct node));
    scanf("%d",&value);
    newnode->data=value;
    newnode->next=NULL;
    if(head==NULL)
    {
        head=newnode;
        tail=newnode;
    }
    else
    {
        tail->next=newnode;
        tail=newnode;
    }
}

void display()
{
    struct node *temp;
    temp=head;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
}

void insert_from_last()
{
    int value;
    struct node*newnode=malloc(sizeof(struct node));
    newnode->data=value;
    newnode->next=NULL;
    struct node*temp=head;
    while(temp!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newnode;
}

void main()
{
    while(1)
    {
        printf("\n 1.Insert\n 2.display\n 3.Insert_from_last\n");
        printf("Enter the choice:");
        int choice;
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                insert();
                break;
            case 2:
                printf("Elements in the linked list are:");
                display();
                break;
            case 3:
                printf("insert element:");
                insert_from_last();
                break;
            default:
                printf("Invalid choice...");
                break;
        }

    }

}
