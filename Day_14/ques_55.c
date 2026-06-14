#include<stdio.h>
int main()
{
    int n;
    printf("enter size: ");
    scanf("%d",&n);
    int arr[n];
    printf("enter elements:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int big=arr[0];
    int second=arr[1];
    if(second>big)
    {
        int t=big;
        big=second;
        second=t;
    }
    for(int i=2;i<n;i++)
    {
        if(arr[i]>big)
        {
            second=big;
            big=arr[i];
        }
        else if(arr[i]>second && arr[i]!=big)
        {
            second=arr[i];
        }
    }
    printf("second largest = %d",second);
    return 0;
}
