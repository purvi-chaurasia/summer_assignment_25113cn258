#include<stdio.h>

int main()
{
    int a[10][10];
    int n,i,j,f=1;

    printf("enter order of matrix: ");
    scanf("%d",&n);

    printf("enter matrix:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i][j]!=a[j][i])
            {
                f=0;
                break;
            }
        }
    }

    if(f==1)
        printf("symmetric matrix");
    else
        printf("not a symmetric matrix");

    return 0;
}
