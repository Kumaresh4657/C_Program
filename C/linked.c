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
void delete_from_beggining()
{
    struct node *temp;
    temp=head;
    head=head->next;
    free(temp);
}
void insert_from_beggining()
{
    int value;
    struct node *newnode=malloc(sizeof(struct node));
    scanf("%d",&value);
    newnode->data=value;
    newnode->next=NULL;
    struct node *temp=newnode;
    temp->next=head;
    head=temp;
}
void insert_from_middle()
{
    int value,pos;
    printf("Enter the position:");
    scanf("%d",&pos);
    printf("Enter the value:");
    scanf("%d",&value);
    struct node*temp=head;
    struct node*newnode=malloc(sizeof(struct node));
    newnode->data=value;
    newnode->next=NULL;
    for(int i=1;i<pos;i++)
    {
        temp=temp->next;
    }
    newnode->next=temp->next;
    temp->next=newnode;


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
        printf("\n 1.Insert\n 2.Insert From Beggning\n 3.Delete From Beggning\n 4.display\n");
        printf("Enter the choice:");
        int choice;
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                insert();
                break;
            case 2:
                printf("Inserted elements in the linked list is:");
                insert_from_beggining();
                break;
            case 3:
                printf("Deleted elements in the linked list is:");
                delete_from_beggining();
                break;
            case 4:
                printf("Elements in the linked list are:");
                display();
                break;
            case 5:
                insert_from_middle;
            default:
                printf("Invalid choice...");
                break;
        }

    }

}
