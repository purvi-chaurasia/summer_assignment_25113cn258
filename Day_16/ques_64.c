#include<stdio.h>

int main()
{
    int arr[100], size, target, i, j;
    int found = 0;

    printf("Enter number of elements: ");
    scanf("%d",&size);

    printf("Enter elements: ");
    for(i=0;i<size;i++)
        scanf("%d",&arr[i]);

    printf("Enter required sum: ");
    scanf("%d",&target);

    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(arr[i]+arr[j]==target)
            {
                printf("Pair found: %d %d",arr[i],arr[j]);
                found=1;
                break;
            }
        }

        if(found)
            break;
    }

    if(!found)
        printf("No pair found");

    return 0;
}
