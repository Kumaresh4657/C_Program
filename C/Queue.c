#include<stdio.h>
#include<stdlib.h>
#define N 5
int rear=-1;
int front=-1;
int choice;
int Q[N];
int main(){

while(1){

    printf("\n 1.Enqueue");
    printf("\n 2.Dequeue");
    printf("\n 3.Peek");
    printf("\n 4.Display");
    printf("\n Enter the Choice");
    scanf("%d",&choice);
    switch(choice){

case 1:
    Enqueue();
    break;
case 2:
    Dequeue();
    break;
case 3:
    peek();
    break;
case 4:
    display();
    break;
default :
    printf("\nWrong Option");



    }
}
}
void Enqueue()
{
    int m,num;
    scanf("%d",&m);
    if(rear==N-1)
    {
        printf("\nOver Flow");
    }
for(int i=0;i<m;i++){
printf("Enetr Num");
    scanf("%d",&num);
if(front==-1&& rear==-1){
    front=rear=0;
    Q[rear]=num;
}
else{
    rear++;
    Q[rear]=num;
}
}}
void Dequeue(){
    if(front==-1&&rear==-1)
    {
        printf("Q is MT");
    }
    else if(front==0&& rear==0)
        {
       printf("%d is deleted",Q[front]);
       front=rear=-1;
    }
    else
    {
         printf("%d is deleted",Q[front]);
        front++;
    }
}
void peek(){
    printf("%d\n",Q[front]);
}

void display(){
    int i;
    if(front==-1&&rear==-1)
    {
        printf("Q is MT");
    }
    else{
        for(i=front;i<=rear;i++)
            {
            printf("%d ",Q[i]);
        }
    }
}
