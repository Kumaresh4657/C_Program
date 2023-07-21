#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
}*new,*head,*temp;
void main()
{
    while(1){
            printf("\n 1.create\n 2.display\n 3.insert front\n 4.insert end\n");
    int a;
    scanf("%d",&a);
    switch(a)
    {
    case 1:
        create();
        break;
    case 2:
        display();
        break;
    case 3:
        insert_front();
        break;
    case 4:
        insert_end();
        break;
     case 5:
        insert_middle();
        break;

    }
}
}
void create()
{
    new=(struct node*)malloc(sizeof(struct node));
    printf("Enter the data :");
    scanf("%d",&new->data);
    new->next=NULL;
    if(head==NULL)
    {
        head=new;
        temp=new;
    }
    else
    {
        temp->next=new;
        temp=new;
    }

}
void display()
{
    temp=head;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }

}
void insert_front()
{
    new=(struct node*)malloc(sizeof(struct node));
    scanf("%d",&new->data);
    new->next=head;
    head=new;
}
void insert_end()
{
    new=(struct node*)malloc(sizeof(struct node));
    scanf("%d",&new->data);
    new->next=NULL;
    temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=new;
}
void insert_middle()
{
    new=(struct node*)malloc(sizeof(struct node));
    scanf("%d",&new->data);
    new->next=null;
    int pos;
    printf("Enter the position:");
    scanf("%d",&pos);
    for(int i=0;i<pos-1;i++)
    {
        temp=temp->next;
    }
    temp->next=new->next;
    temp->next=new;
}



