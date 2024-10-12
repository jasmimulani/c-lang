#include<stdio.h>
void main()
{
   int i=1,n, total=0;
   printf("enter a any number");
   scanf("%d",&n);
   while(i<=n){

       if(i%2==0){

       total = total + i;
       printf("%d",i);
     }
       i++;
  }
   printf("total is %d",total);
}    
