#include<stdio.h>

int main()
{
    int a,b,c,n;

    printf("enter rows: ");
    scanf("%d",&n);

    for(a=1;a<=n;a++)
    {
        for(b=1;b<=n-a;b++)
            printf(" ");

        for(c=1;c<=2*a-1;c++)
            printf("*");

        printf("\n");
    }

    return 0;
}
