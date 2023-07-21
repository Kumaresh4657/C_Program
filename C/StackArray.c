#include<stdio.h>
#include<stdlib.h>
#define SIZE 5
int stack[SIZE];
int top=-1;

void push();
void pop();
void peek();
void display();

int main()
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
    int n,i,data;
    printf("Enter count: ");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
    printf("Enter data: ");
    scanf("%d",&data);
        if(top==SIZE-1)
        {
                printf("The stack is Overflow/n");
        }
        else
        {
            top++;
            stack[top]=data;
        }
    }
}

void pop()
{
    if(top==-1)
    {
        printf("Stack is in Underflow");
    }
    else
    {
        top--;
        printf("%d",stack[top]);
    }
}

void peek()
{
    printf("Element in the Stack is:%d",stack[top]);

}

void display()
{
    printf("The Elements are:");
    for(int i=top;i>=0;i--)
    {
        printf("%d ",stack[i]);
    }
}
