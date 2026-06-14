#include<stdio.h>
int main()
{
    int sz,item,pos=-1;
    printf("enter size: ");
    scanf("%d",&sz);
    int nums[sz];
    printf("enter elements:\n");
    for(int x=0;x<sz;x++)
    {
        scanf("%d",&nums[x]);
    }
    printf("enter element to search: ");
    scanf("%d",&item);
    for(int x=0;x<sz;x++)
    {
        if(nums[x]==item)
        {
            pos=x+1;
            break;
        }
    }
    if(pos==-1)
        printf("element not found");
    else
        printf("element found at position %d",pos);

    return 0;
}
