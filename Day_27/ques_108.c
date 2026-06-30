#include<stdio.h>

int main()
{
    char name[50];
    int a,b,c,total;
    float per;

    printf("enter name: ");
    scanf("%s",name);

    printf("enter marks of three subjects: ");
    scanf("%d%d%d",&a,&b,&c);

    total=a+b+c;
    per=total/3.0;

    printf("\nmarksheet\n");
    printf("name = %s\n",name);
    printf("total = %d\n",total);
    printf("percentage = %.2f\n",per);

    if(per>=40)
        printf("result = pass");
    else
        printf("result = fail");

    return 0;
}