#include<stdio.h>
  int loop10()
{
 int i,n,total=0;
	printf("enter value:");
	scanf("\t%d",&n);
	for(i=1; i<=10; i++){
	total=total+i;
	printf("%d",i);
	}
	printf("\n total is :%d",total);
}
 void main(){
	loop10();
}