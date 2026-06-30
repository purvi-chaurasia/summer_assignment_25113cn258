#include<stdio.h>

int main()
{
    char a[100],b[100];
    int i,j,f[256]={0};

    printf("enter first string: ");
    fgets(a,100,stdin);

    printf("enter second string: ");
    fgets(b,100,stdin);

    printf("common characters: ");

    for(i=0;a[i]!='\0' && a[i]!='\n';i++)
    {
        for(j=0;b[j]!='\0' && b[j]!='\n';j++)
        {
            if(a[i]==b[j] && f[(int)a[i]]==0)
            {
                printf("%c ",a[i]);
                f[(int)a[i]]=1;
                break;
            }
        }
    }

    return 0;
}
