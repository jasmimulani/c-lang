#include<stdio.h>
int main()
{
        int i,n;
	for(i=0; i<3; i++)
	{
		for(n=0; n<3; n++)
	{    
   	    if(i==n)
	{
           printf("%d",1);
	}
	 else
	{
          printf("%d",0);
	}
	
      }
	printf("\n");
   }
}	