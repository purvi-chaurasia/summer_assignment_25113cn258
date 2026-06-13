#include<stdio.h>
#include<math.h>
int main()
{
    int x,r,d=0,temp;
    int total=0;
    printf("enter number: ");
    scanf("%d",&x);
    temp=x;
    while(temp!=0)
    {
        d++;
        temp=temp/10;
    }
    temp=x;
    while(temp!=0)
    {
        r=temp%10;
        total=total+pow(r,d);
        temp=temp/10;
    }
    if(total==x)
        printf("armstrong number");
    else
        printf("not armstrong number");
    return 0;
}
