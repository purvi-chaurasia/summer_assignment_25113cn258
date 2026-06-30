#include<stdio.h>

struct book
{
    int id;
    char name[50];
    char author[50];
};

int main()
{
    struct book b;

    printf("enter book id: ");
    scanf("%d",&b.id);

    printf("enter book name: ");
    scanf("%s",b.name);

    printf("enter author name: ");
    scanf("%s",b.author);

    printf("\nbook details\n");
    printf("id = %d\n",b.id);
    printf("book = %s\n",b.name);
    printf("author = %s\n",b.author);

    return 0;
}