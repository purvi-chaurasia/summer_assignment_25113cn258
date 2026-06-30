#include<stdio.h>

int main()
{
    int p,r,t,f,j,a=0;

    printf("enter number: ");
    scanf("%d",&p);

    t=p;

    while(p>0)
    {
        r=p%10;
        f=1;

        for(j=1;j<=r;j++)
            f=f*j;

        a=a+f;
        p=p/10;
    }

    if(a==t)
        printf("strong number");
    else
        printf("not a strong number");

    return 0;
}
