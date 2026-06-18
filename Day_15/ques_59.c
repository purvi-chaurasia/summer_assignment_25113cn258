#include<stdio.h>

int main()
{
    int data[100], size, k, last;

    printf("Enter number of elements: ");
    scanf("%d",&size);

    printf("Enter elements: ");
    for(k=0;k<size;k++)
        scanf("%d",&data[k]);

    last=data[size-1];

    for(k=size-1;k>0;k--)
        data[k]=data[k-1];

    data[0]=last;

    printf("Array after right rotation: ");

    for(k=0;k<size;k++)
        printf("%d ",data[k]);

    return 0;
}
