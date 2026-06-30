#include<stdio.h>

int main()
{
    int p,q,r,n;

    printf("enter rows: ");
    scanf("%d",&n);

    for(p=1;p<=n;p++)
    {
        for(q=1;q<=n-p;q++)
            printf(" ");

        for(q=0;q<p;q++)
            printf("%c",'A'+q);

        for(r=p-2;r>=0;r--)
            printf("%c",'A'+r);

        printf("\n");
    }

    return 0;
}
