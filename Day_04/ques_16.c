#include<stdio.h>
#include<math.h>
int main()
{
    int s,e,i,temp,r,d,sum;
    printf("enter starting number: ");
    scanf("%d",&s);
    printf("enter ending number: ");
    scanf("%d",&e);
    for(i=s;i<=e;i++)
    {
        d=0;
        sum=0;
        temp=i;
        while(temp!=0)
        {
            d++;
            temp=temp/10;
        }
        temp=i;
        while(temp!=0)
        {
            r=temp%10;
            sum=sum+pow(r,d);
            temp=temp/10;
        }
        if(sum==i)
        {
            printf("%d ",i);
        }
    }
    return 0;
}
