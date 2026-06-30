#include<stdio.h>

int main()
{
    int x,n,i,r=1;

    printf("enter base: ");
    scanf("%d",&x);

    printf("enter exponent: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
        r=r*x;

    printf("answer = %d",r);

    return 0;
}
