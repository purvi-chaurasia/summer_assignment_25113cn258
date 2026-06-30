#include<stdio.h>

struct student
{
    int roll;
    char name[50];
    float marks;
};

int main()
{
    struct student s[10];
    int n,i;

    printf("enter number of students: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("\nstudent %d\n",i+1);

        printf("enter roll: ");
        scanf("%d",&s[i].roll);

        printf("enter name: ");
        scanf("%s",s[i].name);

        printf("enter marks: ");
        scanf("%f",&s[i].marks);
    }

    printf("\nstudent records\n");

    for(i=0;i<n;i++)
    {
        printf("\nroll = %d\n",s[i].roll);
        printf("name = %s\n",s[i].name);
        printf("marks = %.2f\n",s[i].marks);
    }

    return 0;
}
