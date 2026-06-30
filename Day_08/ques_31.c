#include<stdio.h>

int main()
{
    int a,b,n;

    printf("enter rows: ");
    scanf("%d",&n);

    for(a=1;a<=n;a++)
    {
        for(b=0;b<a;b++)
            printf("%c",'A'+b);

        printf("\n");
    }

    return 0;
}
