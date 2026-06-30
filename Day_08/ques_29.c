#include<stdio.h>

int main()
{
    int p,q,n;

    printf("enter rows: ");
    scanf("%d",&n);

    for(p=1;p<=n;p++)
    {
        for(q=1;q<=p;q++)
            printf("*");

        printf("\n");
    }

    return 0;
}
