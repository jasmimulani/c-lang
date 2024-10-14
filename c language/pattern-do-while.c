//nloop 8......
#include<stdio.h>
void main()
{
    int i=1,x=1,n;
    do{
         n=1;
           do{ 
                printf("%d",x++);
      n++;
  }while(n<=5);
    printf("\n");
     i++;
    }while(i<=5);
}