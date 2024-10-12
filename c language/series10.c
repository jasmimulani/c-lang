//0.5,1.2,5....
#include<stdio.h>
void main()
{
  float i=0.5, j=0.5;
  int n;
   printf("enter a any number");
    scanf("%d",&n);
    printf("%.1f",i);
do{
           i=i+j;
           printf("%.1f",i);
           i++;
}    while(i<=n);
}
