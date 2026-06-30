#include<stdio.h>

int main()
{
    int n,a[32],i=0,j;

    printf("enter decimal number: ");
    scanf("%d",&n);

    if(n==0)
    {
        printf("binary = 0");
        return 0;
    }

    while(n>0)
    {
        a[i]=n%2;
        n=n/2;
        i++;
    }

    printf("binary = ");

    for(j=i-1;j>=0;j--)
        printf("%d",a[j]);

    return 0;
}
