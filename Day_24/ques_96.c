#include<stdio.h>

int main()
{
    char s[100];
    int i,j,f;

    printf("enter string: ");
    fgets(s,100,stdin);

    for(i=0;s[i]!='\0';i++)
    {
        f=0;

        for(j=0;j<i;j++)
        {
            if(s[i]==s[j])
            {
                f=1;
                break;
            }
        }

        if(f==0)
            printf("%c",s[i]);
    }

    return 0;
}
