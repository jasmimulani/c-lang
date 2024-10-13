#include<stdio.h>
 int main()
{ 
   int a[]={ 11,12,13,14,15,16},n;
   int b[]={ 25,26,27,28,29,30};
 
   for(n=0; n<5; n++){
    printf("\n%d", a[n]);
    printf("\t%d",b[n]);
    printf("\t %d",(a[n]+b[n]));
}
}