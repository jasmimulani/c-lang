#include<stdio.h>
void setdata()
{
		int j,k,l;
		printf("enter maths marks");
		scanf("%d",&j);
		printf("enter science marks");
		scanf("%d",&k);
		printf("enter english marks");
		scanf("%d",&l);
}
void calc()
{
    int j,k,l, total=0;
    float per;

		total=j+k+l;
		per=(float)total/3;
		
}
 void display()
{
    int j,k,l,total=0;
    float per;
	printf("maths\tscience\tenglish\ttotal\tper");
	printf("\n%d \t%d \t%d \t%d \t%d \t%2.f",j,k,l,total,per);
	
}
 void main()
{
	   setdata();
	   calc();
	   display();
}	
	