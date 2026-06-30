#include<stdio.h>

int main()
{
    int a,s=0;

    printf("1. capital of india?\n");
    printf("1.delhi 2.mumbai 3.chennai 4.kolkata\n");
    scanf("%d",&a);

    if(a==1)
        s++;

    printf("2. 5 + 7 = ?\n");
    printf("1.10 2.11 3.12 4.13\n");
    scanf("%d",&a);

    if(a==3)
        s++;

    printf("3. c language was developed by?\n");
    printf("1.bjarne stroustrup 2.dennis ritchie 3.james gosling 4.guido van rossum\n");
    scanf("%d",&a);

    if(a==2)
        s++;

    printf("score = %d/3",s);

    return 0;
}