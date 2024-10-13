#include<stdio.h>
  int loop11()
{
 int i,n,total=0;
	printf("enter value:");
	scanf("\t%d",&n);
	for(i=2; i<=10; i+=2){
	total=total+i;
	printf("%d",i);
	}
	printf("\n total is: %d",total);
}
 void main(){
	loop11();
}