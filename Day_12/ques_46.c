#include<stdio.h>
#include<math.h>
int armstrong(int n)
{
    int temp,rem,sum=0,digits=0;
    temp=n;
    while(temp!=0)
    {
        digits++;
        temp/=10;
    }
    temp=n;
    while(temp!=0)
    {
        rem=temp%10;
        sum= sum+rem*rem*rem;
        temp=temp/10;
    }
    printf("digits=%d, sum=%d\n", digits,sum);
    if (sum==n)
      return 1;
    else
       return 0;
}
int main()
{
    int num;
    printf("enter a number:");
    scanf("%d",&num);
    if (armstrong (num))
       printf("%d is an armstrong number.\n",num);
    else
       printf("%d is not an armstrong number.\n",num);
    return 0;
}    
