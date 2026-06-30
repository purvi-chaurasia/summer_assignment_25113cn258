#include<stdio.h>

int main()
{
    char x[100];
    int i=0,v=0,c=0;

    printf("enter string: ");
    fgets(x,100,stdin);

    while(x[i]!='\0')
    {
        if((x[i]>='A'&&x[i]<='Z')||(x[i]>='a'&&x[i]<='z'))
        {
            if(x[i]=='a'||x[i]=='e'||x[i]=='i'||x[i]=='o'||x[i]=='u'||
               x[i]=='A'||x[i]=='E'||x[i]=='I'||x[i]=='O'||x[i]=='U')
                v++;
            else
                c++;
        }

        i++;
    }

    printf("vowels = %d\n",v);
    printf("consonants = %d",c);

    return 0;
}
