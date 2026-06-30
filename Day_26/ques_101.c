#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int n,g;

    srand(time(0));
    n=rand()%100+1;

    do
    {
        printf("guess the number (1-100): ");
        scanf("%d",&g);

        if(g>n)
            printf("too high\n");
        else if(g<n)
            printf("too low\n");
        else
            printf("correct guess\n");

    }while(g!=n);

    return 0;
}