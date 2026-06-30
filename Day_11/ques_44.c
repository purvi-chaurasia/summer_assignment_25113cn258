#include<stdio.h>

int fact(int t)
{
    int i,f=1;

    for(i=1;i<=t;i++)
        f=f*i;

    return f;
}

int main()
{
    int n;

    printf("enter number: ");
    scanf("%d",&n);

    printf("factorial = %d",fact(n));

    return 0;
}
