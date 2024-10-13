#include<stdio.h>
 int loop7()
{
 int i,n;
 	printf("enter value:");	
	scanf("\t%d",&n);
	for(i=2; i<=10; i+=2){
	printf("\n%d",i);
	}
}
void main(){
       loop7();
}