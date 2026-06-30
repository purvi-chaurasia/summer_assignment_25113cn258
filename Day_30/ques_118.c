#include<stdio.h>

struct book
{
    int id;
    char name[50];
    char author[50];
};

int main()
{
    struct book b[10];
    int n,i;

    printf("enter number of books: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("\nbook %d\n",i+1);

        printf("enter id: ");
        scanf("%d",&b[i].id);

        printf("enter name: ");
        scanf("%s",b[i].name);

        printf("enter author: ");
        scanf("%s",b[i].author);
    }

    printf("\nbook records\n");

    for(i=0;i<n;i++)
    {
        printf("\nid = %d\n",b[i].id);
        printf("name = %s\n",b[i].name);
        printf("author = %s\n",b[i].author);
    }

    return 0;
}
