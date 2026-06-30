#include<stdio.h>

int main()
{
    int x,y,n;

    printf("enter rows: ");
    scanf("%d",&n);

    for(x=1;x<=n;x++)
    {
        for(y=1;y<=x;y++)
            printf("%d",y);

        printf("\n");
    }

    return 0;
}
