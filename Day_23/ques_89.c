#include<stdio.h>

int main()
{
    char s[100];
    int i,j,f;

    printf("enter string: ");
    fgets(s,100,stdin);

    for(i=0;s[i]!='\0' && s[i]!='\n';i++)
    {
        f=0;

        for(j=0;s[j]!='\0' && s[j]!='\n';j++)
        {
            if(i!=j && s[i]==s[j])
            {
                f=1;
                break;
            }
        }

        if(f==0)
        {
            printf("first non-repeating character = %c",s[i]);
            return 0;
        }
    }

    printf("no non-repeating character");

    return 0;
}