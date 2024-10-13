#include<stdio.h>
int loop4()
{
 int i,n;
	printf("enter value:");
	scanf("%d",&n);
	for(i=n; i>=1; i--){
	printf("\t%d",i);
	}
}
void main(){
	loop4();
}
