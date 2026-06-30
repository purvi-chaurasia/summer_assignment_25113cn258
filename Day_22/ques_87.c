#include<stdio.h>

int main()
{
    char s[100],ch;
    int i=0,c=0;

    printf("enter string: ");
    fgets(s,100,stdin);

    printf("enter character: ");
    scanf("%c",&ch);

    while(s[i]!='\0')
    {
        if(s[i]==ch)
            c++;

        i++;
    }

    printf("frequency = %d",c);

    return 0;
}
