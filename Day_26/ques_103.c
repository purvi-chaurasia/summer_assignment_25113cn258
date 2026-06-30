#include<stdio.h>

int main()
{
    int c;
    float b=10000,x;

    do
    {
        printf("\n1.balance\n2.deposit\n3.withdraw\n4.exit\n");
        printf("enter choice: ");
        scanf("%d",&c);

        if(c==1)
        {
            printf("balance = %.2f\n",b);
        }
        else if(c==2)
        {
            printf("enter amount: ");
            scanf("%f",&x);
            b=b+x;
        }
        else if(c==3)
        {
            printf("enter amount: ");
            scanf("%f",&x);

            if(x<=b)
                b=b-x;
            else
                printf("insufficient balance\n");
        }

    }while(c!=4);

    return 0;
}