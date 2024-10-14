#include<stdio.h>
void main()
{
   int i=1, total=0;
   while(i<=5)
{
   total = total + i;
   printf("%d",i);
   i++;
}
 printf("total is %d",total);
}