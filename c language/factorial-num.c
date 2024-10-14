#include<stdio.h>
 int fact(int i)
{
	if (i==1)
	return 1;
	else
	return i* fact(i-1);
	}
  int main()
{
	int x= fact(5);
	printf("fact is :%d",x);
}