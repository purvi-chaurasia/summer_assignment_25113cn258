#include<stdio.h>
#include<string.h>

int main()
{
    char a[100],b[100],c[200];

    printf("enter first string: ");
    fgets(a,100,stdin);

    printf("enter second string: ");
    fgets(b,100,stdin);

    a[strcspn(a,"\n")]='\0';
    b[strcspn(b,"\n")]='\0';

    strcpy(c,a);
    strcat(c,a);

    if(strstr(c,b)!=NULL)
        printf("rotation string");
    else
        printf("not a rotation string");

    return 0;
}
