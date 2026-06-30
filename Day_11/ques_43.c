#include<stdio.h>

int prime(int z)
{
    int i;

    if(z<=1)
        return 0;

    for(i=2;i<z;i++)
    {
        if(z%i==0)
            return 0;
    }

    return 1;
}

int main()
{
    int n;

    printf("enter number: ");
    scanf("%d",&n);

    if(prime(n))
        printf("prime number");
    else
        printf("not a prime number");

    return 0;
}
