#include<stdio.h>

int main()
{
    char a[100],b[100];
    int x[256]={0},y[256]={0};
    int i;

    printf("enter first string: ");
    fgets(a,100,stdin);

    printf("enter second string: ");
    fgets(b,100,stdin);

    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]!='\n')
            x[(int)a[i]]++;
    }

    for(i=0;b[i]!='\0';i++)
    {
        if(b[i]!='\n')
            y[(int)b[i]]++;
    }

    for(i=0;i<256;i++)
    {
        if(x[i]!=y[i])
        {
            printf("not anagrams");
            return 0;
        }
    }

    printf("anagrams");

    return 0;
}
