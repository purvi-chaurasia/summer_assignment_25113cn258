#include<stdio.h>

int main()
{
    int x,i,s=0;

    printf("enter number: ");
    scanf("%d",&x);

    for(i=1;i<x;i++)
    {
        if(x%i==0)
            s=s+i;
    }

    if(s==x)
        printf("perfect number");
    else
        printf("not a perfect number");

    return 0;
}
