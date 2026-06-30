#include<stdio.h>

int main()
{
    int a,b,n;

    printf("enter rows: ");
    scanf("%d",&n);

    for(a=n;a>=1;a--)
    {
        for(b=1;b<=a;b++)
            printf("*");

        printf("\n");
    }

    return 0;
}
