#include<stdio.h>
void main()
{
   int i=5,k;
 while(i>=1){
 k=5;
 while(k>=i){
  printf("%d",k);
    k--;
}
  printf("\n");
  i--; 
}
}