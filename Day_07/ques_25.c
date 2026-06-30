#include<stdio.h>

int fact(int p)
{
    if(p==0 || p==1)
        return 1;

    return p*fact(p-1);
}

int main()
{
    int n;

    printf("enter number: ");
    scanf("%d",&n);

    printf("factorial = %d",fact(n));

    return 0;
}