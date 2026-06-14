#include<stdio.h>
int main()
{
    int len,val,freq=0;
    printf("enter size: ");
    scanf("%d",&len);
    int data[len];
    printf("enter elements:\n");
    for(int p=0;p<len;p++)
    {
        scanf("%d",&data[p]);
    }
    printf("enter element: ");
    scanf("%d",&val);
    for(int p=0;p<len;p++)
    {
        if(data[p]==val)
        {
            freq++;
        }
    }
    printf("frequency = %d",freq);
    return 0;
}