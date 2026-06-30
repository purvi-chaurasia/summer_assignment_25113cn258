#include<stdio.h>

int main()
{
    int p[10][10],q[10][10],t[10][10];
    int m,n,i,j;

    printf("enter rows and columns: ");
    scanf("%d%d",&m,&n);

    printf("enter first matrix:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
            scanf("%d",&p[i][j]);
    }

    printf("enter second matrix:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
            scanf("%d",&q[i][j]);
    }

    printf("difference matrix:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            t[i][j]=p[i][j]-q[i][j];
            printf("%d ",t[i][j]);
        }
        printf("\n");
    }

    return 0;
}
