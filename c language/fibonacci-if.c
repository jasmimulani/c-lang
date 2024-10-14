#include<stdio.h>
int fib(int n)
{

	if (n==0)
	{
		return 1;
	}
	else if(n==1)
	{
		return 1;
	}
	else{
	   return fib(n-1)+fib(n-2);
	    }
}
  void  main()
{
		int i,j;
		printf("entere a number");
		scanf("%d", &j);
		for(i=0; i<j; i++){
		printf("%d",fib(i));
		}
	
}