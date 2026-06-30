#include<stdio.h>

int rev=0;

void reverse(int k)
{
    if(k==0)
        return;

    rev=rev*10+k%10;
    reverse(k/10);
}

int main()
{
    int n;

    printf("enter number: ");
    scanf("%d",&n);

    reverse(n);

    printf("reverse = %d",rev);

    return 0;
}
