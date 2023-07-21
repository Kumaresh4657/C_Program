#include<stdio.h>
int main()
{
    int i,j;
    char ch[90];
    scanf("%s",ch);
    char c[90];
    scanf("%s",c);
    int n=strlen(ch);
    int temp=0;
    for(i=0;i<n;i++)
    {
        if(ch[i]!=ch[i+1])
       {
         temp=ch[i+1];
         ch[i+1]=ch[i];
         ch[i]=temp;

        }
        }
    for(int i=0;i<n;i++)
    {
        if(ch[i]==c[i])
    {
        printf("true");
        break;
    }
    else
    {
        printf("false");
        break;
    }
}


    }
