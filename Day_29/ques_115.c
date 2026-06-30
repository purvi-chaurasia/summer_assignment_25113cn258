#include<stdio.h>
#include<string.h>

int main()
{
    char s[100];
    int ch;

    printf("enter string: ");
    fgets(s,100,stdin);

    do
    {
        printf("\n1.length\n2.reverse\n3.uppercase\n4.exit\n");
        printf("enter choice: ");
        scanf("%d",&ch);
        getchar();

        if(ch==1)
        {
            printf("length = %d\n",(int)strlen(s)-1);
        }
        else if(ch==2)
        {
            int i=0,j=strlen(s)-2;
            char t;

            while(i<j)
            {
                t=s[i];
                s[i]=s[j];
                s[j]=t;
                i++;
                j--;
            }

            printf("%s\n",s);
        }
        else if(ch==3)
        {
            int i=0;

            while(s[i]!='\0')
            {
                if(s[i]>='a' && s[i]<='z')
                    s[i]=s[i]-32;

                i++;
            }

            printf("%s\n",s);
        }

    }while(ch!=4);

    return 0;
}
