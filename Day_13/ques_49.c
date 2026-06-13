#include<stdio.h>

int main()
{
    int a[100],x,i;

    printf("enter size: ");
    scanf("%d",&x);

    printf("enter elements:\n");
    for(i=0;i<x;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("array is:\n");
    for(i=0;i<x;i++)
    {
        printf("%d ",a[i]);
    }

    return 0;
}
