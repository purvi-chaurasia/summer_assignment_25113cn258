#include<stdio.h>

int add(int x,int y)
{
    return x+y;
}

int main()
{
    int a,b;

    printf("enter two numbers: ");
    scanf("%d%d",&a,&b);

    printf("sum = %d",add(a,b));

    return 0;
}
