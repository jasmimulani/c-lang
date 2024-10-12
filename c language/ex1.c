#include<stdio.h>
   int f1()
{
   int r=0,n;
	printf("enter value");
	scanf("%d",&n);

	 	while(n!=0){

  		 r=r*10+n%10;
   		n/=10;
	}
	printf("%d", r);
}
 void main(){
       f1();
}
