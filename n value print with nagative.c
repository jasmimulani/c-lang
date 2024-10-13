#include<stdio.h>
 int loop5()
{
 int i,n;
	printf("enter value:");
	scanf("\t%d",&n);
	for(i=n; i>=-n; i--){
	printf("\t%d",-i);
	}
}
void main(){
	loop5();
}