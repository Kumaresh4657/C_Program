#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
}*temp,*front,*rear,*newnode;
void eq();
void dq();
void peek();
void display();
int main(){
    int choice;
    do{
        printf("Enter your choice:");
        scanf("%d",&choice);
        switch(choice){
        case 1:
            eq();
            break;
        case 2:
            dq();
            break;
        case 3:
            peek();
            break;
        case 4:
            display();
            break;
        }
    }while(choice!=0);
}
void eq(){
    int n,i;
    printf("Enter no. of ele to be inserted into the queue:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter the data to be inserted:");
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        if(front==NULL && rear==NULL){
            front=rear=newnode;
        }
        else{
            rear->next=newnode;
            rear=newnode;
        }
    }
}
void dq(){
    if(front==-1&&rear==-1)
    {
        printf("Q is MT");
    }
    else if(front==0&& rear==0){

    }
}
void peek(){
    printf("%d\n",Q[front]);
}
void display(){
    int i;
    if(front==-1&&rear==-1)
    {
        printf("Q is
    }
    else{
        for(i=0;i<=rear;i++)
            {
            printf("%d",&Q[i]);
        }
    }
}

MT");
