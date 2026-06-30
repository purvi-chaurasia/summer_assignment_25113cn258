#include<stdio.h>

int main()
{
    int seats=50,book;

    printf("available seats = %d\n",seats);

    printf("enter seats to book: ");
    scanf("%d",&book);

    if(book<=seats)
    {
        seats=seats-book;
        printf("booking successful\n");
        printf("remaining seats = %d",seats);
    }
    else
    {
        printf("not enough seats available");
    }

    return 0;
}