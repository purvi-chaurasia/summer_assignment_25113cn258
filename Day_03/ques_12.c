#include<stdio.h>

int main()
{
    int a,b,m,n,g;

    printf("enter two numbers: ");
    scanf("%d%d",&a,&b);

    m=a;
    n=b;

    while(n!=0)
    {
        g=n;
        n=m%n;
        m=g;
    }

    printf("lcm=%d",(a*b)/m);

    return 0;
}
