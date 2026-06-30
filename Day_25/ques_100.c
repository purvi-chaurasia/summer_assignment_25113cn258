#include<stdio.h>
#include<string.h>

int main()
{
    char a[20][50],t[50];
    int n,i,j;

    printf("enter number of words: ");
    scanf("%d",&n);
    getchar();

    printf("enter words:\n");

    for(i=0;i<n;i++)
    {
        fgets(a[i],50,stdin);
        a[i][strcspn(a[i],"\n")]='\0';
    }

    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(strlen(a[i])>strlen(a[j]))
            {
                strcpy(t,a[i]);
                strcpy(a[i],a[j]);
                strcpy(a[j],t);
            }
        }
    }

    printf("sorted words:\n");

    for(i=0;i<n;i++)
        printf("%s\n",a[i]);

    return 0;
}
