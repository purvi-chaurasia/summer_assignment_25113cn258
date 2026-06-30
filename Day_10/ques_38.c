#include<stdio.h>

int main()
{
    int x,y,z,n;

    printf("enter rows: ");
    scanf("%d",&n);

    for(x=n;x>=1;x--)
    {
        for(y=1;y<=n-x;y++)
            printf(" ");

        for(z=1;z<=2*x-1;z++)
            printf("*");

        printf("\n");
    }

    return 0;
}
