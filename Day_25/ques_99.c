#include<stdio.h>
#include<string.h>

int main()
{
    char a[20][50],t[50];
    int n,i,j;

    printf("enter number of names: ");
    scanf("%d",&n);
    getchar();

    printf("enter names:\n");

    for(i=0;i<n;i++)
    {
        fgets(a[i],50,stdin);
        a[i][strcspn(a[i],"\n")]='\0';
    }

    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(strcmp(a[i],a[j])>0)
            {
                strcpy(t,a[i]);
                strcpy(a[i],a[j]);
                strcpy(a[j],t);
            }
        }
    }

    printf("sorted names:\n");

    for(i=0;i<n;i++)
        printf("%s\n",a[i]);

    return 0;
}
