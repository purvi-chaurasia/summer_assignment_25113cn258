#include<stdio.h>

int main()
{
    char s[200],w[100],m[100];
    int i=0,j=0,k=0,max=0;

    printf("enter sentence: ");
    fgets(s,200,stdin);

    while(1)
    {
        if(s[i]==' ' || s[i]=='\0' || s[i]=='\n')
        {
            w[j]='\0';

            if(j>max)
            {
                max=j;

                for(k=0;k<=j;k++)
                    m[k]=w[k];
            }

            j=0;

            if(s[i]=='\0' || s[i]=='\n')
                break;
        }
        else
        {
            w[j]=s[i];
            j++;
        }

        i++;
    }

    printf("longest word = %s",m);

    return 0;
}
