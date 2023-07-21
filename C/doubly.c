#include<stdio.h>
#include<stdlib.h>
void create();
void display();
void insertfront();
void insertend();
void insertmid();
void deletefront();
void deleteend();
void deletemid();
void count();
void search();
struct node
{
    int data;
    struct node *next;
    struct node *prev;
}*head, *temp, *newnode, *nextnode, *tail;
int main()
{
    int option;
    while(1)
    {
        printf("\n\n***DOUBLY LINKED LIST***\n\n");
        printf("1.Create\n");
        printf("2.Display\n");
        printf("3.Insert at front\n");
        printf("4.Insert at end\n");
        printf("5.Insert at middle\n");
        printf("6.Deletion at front\n");
        printf("7.Deletion at end\n");
        printf("8.Deletion at middle\n");
        printf("9.Count the elements\n");
        printf("10.Search the element\n");
        printf("11.Exit\n");
        printf("Enter your choice (1,2,3,4,5,6,7,8,9): ");
        scanf("%d",&option);
        switch(option)
        {
            case 1: create();
                    break;
            case 2: display();
                    break;
            case 3: insertfront();
                    break;
            case 4: insertend();
                    break;
            case 5: insertmid();
                    break;
            case 6: deletefront();
                    break;
            case 7: deleteend();
                    break;
            case 8: deletemid();
                    break;
            case 9: count();
                    break;
            case 10: search();
                    break;
            case 11: exit(0);
            default: printf("Invalid choice");
                     break;
        }
    }
    return 0;
}
void create()
{
    int n,i;
    printf("Enter the size : ");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter the elements : ");
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        newnode->prev=NULL;
        if(head==NULL)
        {
            head=newnode;
            temp=newnode;
        }
        else
        {
            temp->next=newnode;
            newnode->prev=temp;
            temp=temp->next;
        }
    }
}
void display()
{
    temp=head;
    printf("Displayed the elements:\n");
    while(temp!=NULL)
    {
        printf("%d\n",temp->data);
        temp=temp->next;
    }
   // printf("%d\t",temp->data);
}
void insertfront()
{
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("\nEnter the data that you want to insert:");
    scanf("%d",&newnode->data);
    newnode->next=head;
    head->prev=newnode;
    head=newnode;
}
void insertend()
{
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("\nInsert the end element: ");
    int value;
    scanf("%d",&newnode->data);
    temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newnode;
    newnode->prev=temp;
    newnode->next=NULL;

}
void insertmid()
{
    int pos,j;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("\nInsert the middle element: ");
    scanf("%d",&newnode->data);
    printf("Position= ");
    scanf("%d",&pos);
    temp=head;
    for(j=0; j<pos-1; j++)
    {
        temp=temp->next;
    }
    newnode->next=temp->next;
    newnode->prev=temp;
    temp->next=newnode;
}
void deletefront()
{
    temp=head;
    head=head->next;
    free(temp);
}
void deleteend()
{
    temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp=temp->prev;
    nextnode=temp->next;
    temp->next=NULL;
    free(nextnode);
}
void deletemid()
{
    printf("\nDELETION AT THE MIDDLE");
    int pos,j;
    printf("Position= ");
    scanf("%d",&pos);
    temp=head;
    for(j=1;j<pos;j++)
    {
        temp=temp->next;
    }
    temp->prev->next = temp->next;
    temp->next->prev = temp->prev;
    free(temp);
}
void count()
{
    int count=0;
    temp=head;
    while(temp!=NULL)
    {
        count++;
        temp=temp->next;
    }
    printf("\nTotal number of elements in the list: %d", count);
}
void search()
{
    int find, index=0;
    printf("Enter an element to search in the list:");
    scanf("%d",&find);
    temp=head;
    while(temp!=NULL)
    {
        if(temp->data == find)
        {
            index++;
        }
        temp=temp->next;
    }
    if(index==1)
    {
        printf("\nElement is there");
    }
    else
    {
        printf("\nElement is not there");
    }
}
