#include<stdio.h>

int total(int a)
{
    if(a==0)
        return 0;

    return a%10+total(a/10);
}

int main()
{
    int n;

    printf("enter number: ");
    scanf("%d",&n);

    printf("sum = %d",total(n));

    return 0;
}
