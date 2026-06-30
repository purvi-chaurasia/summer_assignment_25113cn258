#include<stdio.h>

int main()
{
    int c;
    float bal=5000,amt;

    do
    {
        printf("\n1.balance\n2.deposit\n3.withdraw\n4.exit\n");
        printf("enter choice: ");
        scanf("%d",&c);

        if(c==1)
        {
            printf("balance = %.2f\n",bal);
        }
        else if(c==2)
        {
            printf("enter amount: ");
            scanf("%f",&amt);
            bal=bal+amt;
        }
        else if(c==3)
        {
            printf("enter amount: ");
            scanf("%f",&amt);

            if(amt<=bal)
                bal=bal-amt;
            else
                printf("insufficient balance\n");
        }

    }while(c!=4);

    return 0;
}