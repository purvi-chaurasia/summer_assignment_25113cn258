#include<stdio.h>

int main()
{
    int a[100],n,i,ch,s=0,m;

    printf("enter size: ");
    scanf("%d",&n);

    printf("enter elements: ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    do
    {
        printf("\n1.display\n2.sum\n3.maximum\n4.exit\n");
        printf("enter choice: ");
        scanf("%d",&ch);

        if(ch==1)
        {
            for(i=0;i<n;i++)
                printf("%d ",a[i]);

            printf("\n");
        }
        else if(ch==2)
        {
            s=0;

            for(i=0;i<n;i++)
                s=s+a[i];

            printf("sum = %d\n",s);
        }
        else if(ch==3)
        {
            m=a[0];

            for(i=1;i<n;i++)
            {
                if(a[i]>m)
                    m=a[i];
            }

            printf("maximum = %d\n",m);
        }

    }while(ch!=4);

    return 0;
}
