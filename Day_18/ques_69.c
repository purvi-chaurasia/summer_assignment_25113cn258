#include<stdio.h>

int main()
{
    int nums[100], total, x, y, swap;

    printf("Enter number of elements: ");
    scanf("%d",&total);

    printf("Enter elements: ");
    for(x=0;x<total;x++)
        scanf("%d",&nums[x]);

    for(x=0;x<total-1;x++)
    {
        for(y=0;y<total-x-1;y++)
        {
            if(nums[y]>nums[y+1])
            {
                swap=nums[y];
                nums[y]=nums[y+1];
                nums[y+1]=swap;
            }
        }
    }

    printf("Sorted array: ");

    for(x=0;x<total;x++)
        printf("%d ",nums[x]);

    return 0;
}
