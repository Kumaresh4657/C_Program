#include<stdio.h>
int main()
{
    int n;
    printf("enter total product:");
    scanf("%d",&n);
    int a[n];
    printf("enter products:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                int temp = a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    int total=a[n-1]+a[n-2];
    printf("sum of highest two product: %d",total);
    return 0;
}
