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

    for(i=0;i<r;i++)
    {
        s=0;

        
        for(j=0;j<c;j++)
            s=s+a[i][j];

        printf("sum of row %d = %d\n",i+1,s);
    }

    return 0;
}