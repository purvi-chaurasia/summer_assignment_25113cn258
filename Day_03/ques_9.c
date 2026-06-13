#include<stdio.h>

int main()
{
    int p,i,flag=1;

    printf("enter number: ");
    scanf("%d",&p);

    if(p<=1)
    {
        flag=0;
    }
    else
    {
        for(i=2;i<p;i++)
        {
            if(p%i==0)
            {
                flag=0;
                break;
            }
        }
    }

    if(flag==1)
        printf("prime number");
    else
        printf("not prime number");

    return 0;
}
