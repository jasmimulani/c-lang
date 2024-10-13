#include<stdio.h>
int loop12( int a)
{
   return a*a;
}
	int main(){
	int n;
	printf("enter n:");
	scanf("%d",&n);
	for(int i=1; i<=n; i++){
	printf("%d-%d\n",i,loop12(i));
	}
}