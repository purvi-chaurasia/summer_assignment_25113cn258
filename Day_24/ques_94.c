#include<stdio.h>

int main()
{
    char s[100];
    int i,j,c;

    printf("enter string: ");
    fgets(s,100,stdin);

    i=0;

    while(s[i]!='\0' && s[i]!='\n')
    {
        c=1;
        j=i+1;

        while(s[j]==s[i])
        {
            c++;
            j++;
        }

        printf("%c%d",s[i],c);

        i=j;
    }

    return 0;
}
