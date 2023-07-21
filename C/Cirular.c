#include<stdio.h>
#include<stdlib.h>

struct node
{

    int data;
    struct node* next;

}* last;



void insertAtBeginning(int val)
{

    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    if(newNode==NULL)
    {
        printf("out of memory");
        return;
    }
    newNode -> data = val;
    if(last == NULL)
    {
        newNode -> next = newNode;
        last = newNode;
    }
    else
    {
        newNode -> next = last -> next;
        last -> next = newNode;
    }
}
void insertAtEnd(int val)
{

    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    if(newNode==NULL)
    {
        printf("out of memory");
        return;
    }
    newNode -> data = val;
    if(last == NULL)
    {
        newNode -> next = newNode;
        last = newNode;
    }
    else
    {
        newNode -> next = last -> next;
        last -> next = newNode;
        last = newNode;
    }
}
void display()
{
    if(last==NULL)
    {
        printf("the list is empty");
    }

    struct node* temp =  last -> next;

    do
    {
        printf("\n%d",temp->data);
        temp =  temp->next;
    }
    while(temp!=last->next);
}

void count()
{
    int count=0;
    if(last==NULL)
    {
        printf("the list is empty");
    }

    struct node* temp =  last -> next;

    do
    {
        count = count + 1;
        temp =  temp->next;
    }
    while(temp!=last->next);
    printf("%d",count);
}

void deleteAtBeginning()
{
    if(last==NULL)
    {
        printf("List is empty");
        return;
    }
    struct node* del;
    if(last -> next ==NULL)
    {
        del= last;
        last = NULL;
    }
    else
    {
        del = last -> next;
        last -> next  = last -> next -> next;
    }
    printf("\n delete %d",del->data);
    free(del);
}
void deleteAtEnd()
{
    if(last==NULL)
    {
        printf("List is empty");
        return;
    }
    struct node *del, *temp,*prev;
    if(last->next == last)
    {
        del= last;
        last = NULL;
    }
    else
    {
        temp = last -> next;

        while(temp!=last)
        {
            prev = temp;
            temp = temp -> next;

        }
        del=last;
        prev -> next = temp -> next;
        last = prev;


    }
    printf("\n delete %d",del->data);
    free(del);
}
int main()
{
    int choice,val;
    while(1)
    {


        printf("\n1. Insert at Beginning");
        printf("\n2. Display the list");
        printf("\n3. Insert at the End");
        printf("\n4. Delete from Beginning");
        printf("\n5. Delete from End");
        printf("\n6. Exit");
        printf("\nenter your choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            printf("enter the value: ");
            scanf("%d",&val);
            insertAtBeginning(val);
            break;

        case 2:
            display();
            break;

        case 3:
            printf("enter the value: ");
            scanf("%d",&val);
            insertAtEnd(val);
            break;

        case 4:
            deleteAtBeginning();
            break;

        case 5:
            deleteAtEnd();
            break;

        case 6:
           exit(0);
        default :
            printf("Wrong choice");
        }
    }
    return 0;
}
