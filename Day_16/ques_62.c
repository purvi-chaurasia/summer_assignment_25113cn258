#include<stdio.h>

int main()
{
    int data[100], n, i, j;
    int maxfreq = 0, answer;

    printf("Enter number of elements: ");
    scanf("%d",&n);

    printf("Enter elements: ");
    for(i=0;i<n;i++)
        scanf("%d",&data[i]);

    for(i=0;i<n;i++)
    {
        int count = 1;

        for(j=i+1;j<n;j++)
        {
            if(data[i]==data[j])
                count++;
        }

        if(count>maxfreq)
        {
            maxfreq=count;
            answer=data[i];
        }
    }

    printf("Maximum frequency element is %d",answer);

    return 0;
}
