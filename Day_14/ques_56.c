#include<stdio.h>
int main()
{
    int total;
    printf("enter size: ");
    scanf("%d",&total);
    int box[total];
    printf("enter elements:\n");
    for(int a=0;a<total;a++)
    {
        scanf("%d",&box[a]);
    }
    printf("duplicate elements are:\n");
    for(int a=0;a<total;a++)
    {
        int flag=0;

        for(int b=0;b<a;b++)
        {
            if(box[a]==box[b])
            {
                flag=1;
                break;
            }
        }
        if(flag)
            continue;

        for(int b=a+1;b<total;b++)
        {
            if(box[a]==box[b])
            {
                printf("%d\n",box[a]);
                break;
            }
        }
    }
    return 0;
}