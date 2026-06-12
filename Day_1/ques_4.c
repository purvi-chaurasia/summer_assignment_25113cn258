#include <stdio.h>

int main()
{
    int total,count = 0;
    printf("enter a number:");
    scanf("%d",&total);
    if(total==0)
    {
        count=1;
    }
    else
    {
 while(total!=0)
 {
  total=total/10;
   count++;
 }
 }
  printf("Number of digits = %d", count);
return 0;
}