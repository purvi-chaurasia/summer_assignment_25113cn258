#include<stdio.h>

int main()
{
    char a[100];
    int i,j;

    printf("enter string: ");
    fgets(a,100,stdin);

    for(i=0;a[i]!='\0' && a[i]!='\n';i++)
    {
        for(j=i+1;a[j]!='\0' && a[j]!='\n';j++)
        {
            if(a[i]==a[j])
            {
                printf("first repeating character = %c",a[i]);
                return 0;
            }
        }
    }

    printf("no repeating character");

    return 0;
}
