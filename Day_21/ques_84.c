#include<stdio.h>

int main()
{
    char p[100];
    int i=0;

    printf("enter string: ");
    fgets(p,100,stdin);

    while(p[i]!='\0')
    {
        if(p[i]>='a'&&p[i]<='z')
            p[i]=p[i]-32;

        i++;
    }

    printf("uppercase string = %s",p);

    return 0;
}
