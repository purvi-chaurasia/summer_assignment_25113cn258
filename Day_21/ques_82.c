#include<stdio.h>

int main()
{
    char a[100],t;
    int i=0,j;

    printf("enter string: ");
    fgets(a,100,stdin);

    while(a[i]!='\0' && a[i]!='\n')
        i++;

    for(j=0;j<i/2;j++)
    {
        t=a[j];
        a[j]=a[i-j-1];
        a[i-j-1]=t;
    }

    printf("reversed string = %s",a);

    return 0;
}
