#include<stdio.h>

int main()
{
    char s[100],m;
    int a[256]={0};
    int i,max=0;

    printf("enter string: ");
    fgets(s,100,stdin);

    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]!=' ' && s[i]!='\n')
            a[(int)s[i]]++;
    }

    for(i=0;i<256;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
            m=i;
        }
    }

    printf("maximum occurring character = %c",m);

    return 0;
}
