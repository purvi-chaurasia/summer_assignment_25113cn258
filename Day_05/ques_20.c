#include<stdio.h>

int main()
{
    int n,d=2,m=0;

    printf("enter number: ");
    scanf("%d",&n);

    while(n>1)
    {
        if(n%d==0)
        {
            m=d;
            n=n/d;
        }
        else
        {
            d++;
        }
    }

    printf("largest prime factor = %d",m);

    return 0;
}
