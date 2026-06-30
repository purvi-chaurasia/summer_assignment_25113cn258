#include<stdio.h>

struct employee
{
    int id;
    char name[50];
    float salary;
};

int main()
{
    struct employee e[10];
    int n,i;

    printf("enter number of employees: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("\nemployee %d\n",i+1);

        printf("enter id: ");
        scanf("%d",&e[i].id);

        printf("enter name: ");
        scanf("%s",e[i].name);

        printf("enter salary: ");
        scanf("%f",&e[i].salary);
    }

    printf("\nemployee records\n");

    for(i=0;i<n;i++)
    {
        printf("\nid = %d\n",e[i].id);
        printf("name = %s\n",e[i].name);
        printf("salary = %.2f\n",e[i].salary);
    }

    return 0;
}
