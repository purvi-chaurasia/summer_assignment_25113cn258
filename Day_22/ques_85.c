#include<stdio.h>

int main()
{
    char s[100];
    int i=0,j,f=1;

    printf("enter string: ");
    fgets(s,100,stdin);

    while(s[i]!='\0' && s[i]!='\n')
        i++;

    for(j=0;j<i/2;j++)
    {
        if(s[j]!=s[i-j-1])
        {
            f=0;
            break;
        }
    }

    if(f==1)
        printf("palindrome string");
    else
        printf("not a palindrome string");

    return 0;
}
