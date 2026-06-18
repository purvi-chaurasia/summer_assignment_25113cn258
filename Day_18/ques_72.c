#include<stdio.h>

int main()
{
    int values[100], count, a, b, temp;

    printf("Enter number of elements: ");
    scanf("%d",&count);

    printf("Enter elements: ");
    for(a=0;a<count;a++)
        scanf("%d",&values[a]);

    for(a=0;a<count-1;a++)
    {
        for(b=a+1;b<count;b++)
        {
            if(values[a]<values[b])
            {
                temp=values[a];
                values[a]=values[b];
                values[b]=temp;
            }
        }
    }

    printf("Array in descending order: ");

    for(a=0;a<count;a++)
        printf("%d ",values[a]);

    return 0;
}
