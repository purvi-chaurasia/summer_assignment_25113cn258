#include<stdio.h>

int main()
{
    int arr[100], n, i, item;
    int start, end, center, flag=0;

    printf("Enter number of elements: ");
    scanf("%d",&n);

    printf("Enter sorted elements: ");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);

    printf("Enter element to search: ");
    scanf("%d",&item);

    start=0;
    end=n-1;

    while(start<=end)
    {
        center=(start+end)/2;

        if(arr[center]==item)
        {
            flag=1;
            break;
        }
        else if(arr[center]<item)
            start=center+1;
        else
            end=center-1;
    }

    if(flag)
        printf("Element found at position %d",center+1);
    else
        printf("Element not found");

    return 0;
}
