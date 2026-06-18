#include<stdio.h>

int main()
{
    int nums[100], total, x;
    int expected = 0, actual = 0;

    printf("Enter number of elements: ");
    scanf("%d",&total);

    printf("Enter elements: ");
    for(x=0;x<total;x++)
    {
        scanf("%d",&nums[x]);
        actual += nums[x];
    }

    for(x=1;x<=total+1;x++)
        expected += x;

    printf("Missing number is %d", expected - actual);

    return 0;
}
