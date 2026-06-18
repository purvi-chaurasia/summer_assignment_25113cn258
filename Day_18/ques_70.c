#include<stdio.h>

int main()
{
    int data[100], size, p, q, pos, temp;

    printf("Enter number of elements: ");
    scanf("%d",&size);

    printf("Enter elements: ");
    for(p=0;p<size;p++)
        scanf("%d",&data[p]);

    for(p=0;p<size-1;p++)
    {
        pos=p;

        for(q=p+1;q<size;q++)
        {
            if(data[q]<data[pos])
                pos=q;
        }

        temp=data[p];
        data[p]=data[pos];
        data[pos]=temp;
    }

    printf("Sorted array: ");

    for(p=0;p<size;p++)
        printf("%d ",data[p]);

    return 0;
}
