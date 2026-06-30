#include<stdio.h>

int main()
{
    int ch;
    float a,b;

    do
    {
        printf("\n1.add\n2.subtract\n3.multiply\n4.divide\n5.exit\n");
        printf("enter choice: ");
        scanf("%d",&ch);

        if(ch>=1 && ch<=4)
        {
            printf("enter two numbers: ");
            scanf("%f%f",&a,&b);
        }

        if(ch==1)
            printf("answer = %.2f\n",a+b);
        else if(ch==2)
            printf("answer = %.2f\n",a-b);
        else if(ch==3)
            printf("answer = %.2f\n",a*b);
        else if(ch==4)
        {
            if(b!=0)
                printf("answer = %.2f\n",a/b);
            else
                printf("division by zero not possible\n");
        }

    }while(ch!=5);

    return 0;
}