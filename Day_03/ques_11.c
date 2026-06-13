#include<stdio.h>

int main()
{
    int x,y,t;

    printf("enter two numbers: ");
    scanf("%d%d",&x,&y);

    while(y!=0)
    {
        t=y;
        y=x%y;
        x=t;
    }

    printf("gcd=%d",x);

    return 0;
}
