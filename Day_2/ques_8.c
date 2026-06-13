#include<stdio.h>
int main()
{
int n, temp, rem, reverse = 0;
    printf("enter a number: ");
    scanf("%d", &n);
    temp = n;
    while(n != 0)
    {
    rem = n % 10;
    reverse = reverse * 10 + rem;
    n = n / 10;
    }
if(temp == reverse)
    printf("palindrome number");
    else
    printf("not a palindrome number");
    return 0;
}