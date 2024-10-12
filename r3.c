#include<stdio.h>
 int loop3()
{
  int i,n;
	printf("enter value");
	scanf("%d",&n);
	for(i=1; i<=n; i++){
	 printf("\t%d",i);
	}
}
void main(){
	loop3();
}