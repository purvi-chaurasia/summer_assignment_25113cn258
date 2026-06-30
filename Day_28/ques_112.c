#include<stdio.h>

struct contact
{
    char name[50];
    char phone[20];
};

int main()
{
    struct contact c;

    printf("enter name: ");
    scanf("%s",c.name);

    printf("enter phone number: ");
    scanf("%s",c.phone);

    printf("\ncontact details\n");
    printf("name = %s\n",c.name);
    printf("phone = %s\n",c.phone);

    return 0;
}