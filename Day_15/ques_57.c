#include<stdio.h>

int main()
{
    int nums[100], total, x, temp;

    printf("Enter number of elements: ");
    scanf("%d",&total);

    printf("Enter elements: ");
    for(x=0;x<total;x++)
        scanf("%d",&nums[x]);

    for(x=0;x<total/2;x++)
    {
        temp=nums[x];
        nums[x]=nums[total-1-x];
        nums[total-1-x]=temp;
    }

    printf("Reversed array: ");

    for(x=0;x<total;x++)
        printf("%d ",nums[x]);

    return 0;
}
