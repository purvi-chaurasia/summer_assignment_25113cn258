#include<stdio.h>

int main()
{
    char a[200];
    int i=0,w=0;

    printf("enter sentence: ");
    fgets(a,200,stdin);

    while(a[i]==' ')
        i++;

    if(a[i]!='\0' && a[i]!='\n')
        w=1;

    while(a[i]!='\0')
    {
        if(a[i]==' ' && a[i+1]!=' ' && a[i+1]!='\0' && a[i+1]!='\n')
            w++;

        i++;
    }

    printf("words = %d",w);

    return 0;
}
