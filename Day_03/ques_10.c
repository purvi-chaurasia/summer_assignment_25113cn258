#include<stdio.h>

int main()
{
    int s,e,i,j,f;

    printf("enter starting number: ");
    scanf("%d",&s);

    printf("enter ending number: ");
    scanf("%d",&e);

    for(i=s;i<=e;i++)
    {
        if(i<2)
            continue;

        f=1;

        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
                f=0;
                break;
            }
        }

        if(f==1)
            printf("%d ",i);
    }

    return 0;
}
