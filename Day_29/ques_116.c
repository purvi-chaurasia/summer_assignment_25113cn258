#include<stdio.h>

struct item
{
    int id;
    char name[50];
    int qty;
};

int main()
{
    struct item x;

    printf("enter item id: ");
    scanf("%d",&x.id);

    printf("enter item name: ");
    scanf("%s",x.name);

    printf("enter quantity: ");
    scanf("%d",&x.qty);

    printf("\ninventory details\n");
    printf("id = %d\n",x.id);
    printf("name = %s\n",x.name);
    printf("quantity = %d\n",x.qty);

    return 0;
}
