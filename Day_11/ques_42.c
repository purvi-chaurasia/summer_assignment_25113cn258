#include<stdio.h>

int big(int p,int q)
{
    if(p>q)
        return p;

    return q;
}

int main()
{
    int m,n;

    printf("enter two numbers: ");
    scanf("%d%d",&m,&n);

    printf("maximum = %d",big(m,n));

    return 0;
}
