#include<stdio.h>

int main()
{
    int values[100], count, a, b=0, temp[100];

    printf("Enter number of elements: ");
    scanf("%d",&count);

    printf("Enter elements: ");
    for(a=0;a<count;a++)
        scanf("%d",&values[a]);

    for(a=0;a<count;a++)
    {
        if(values[a]!=0)
        {
            temp[b]=values[a];
            b++;
        }
    }

    while(b<count)
    {
        temp[b]=0;
        b++;
    }

    printf("Array after moving zeroes: ");

    for(a=0;a<count;a++)
        printf("%d ",temp[a]);

    return 0;
}
