#include<stdio.h>

int main()
{
    float basic,hra,da,total;

    printf("enter basic salary: ");
    scanf("%f",&basic);

    hra=basic*0.20;
    da=basic*0.10;
    total=basic+hra+da;

    printf("hra = %.2f\n",hra);
    printf("da = %.2f\n",da);
    printf("total salary = %.2f",total);

    return 0;
}