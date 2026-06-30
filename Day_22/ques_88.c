#include<stdio.h>

int main()
{
    char x[100];
    int i=0,j=0;

    printf("enter string: ");
    fgets(x,100,stdin);

    while(x[i]!='\0')
    {
        if(x[i]!=' ')
        {
            x[j]=x[i];
            j++;
        }

        i++;
    }

    x[j]='\0';

    printf("string = %s",x);

    return 0;
}
