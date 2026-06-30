#include<stdio.h>

int main()
{
    int a[10][10];
    int r,c,i,j,s;

    printf("enter rows and columns: ");
    scanf("%d%d",&r,&c);

    printf("enter matrix:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
            scanf("%d",&a[i][j]);
    }

    for(i=0;i<c;i++)
    {
        s=0;

        for(j=0;j<r;j++)
            s=s+a[j][i];

        printf("sum of column %d = %d\n",i+1,s);
    }


    return 0;
}
