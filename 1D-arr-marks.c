#include<stdio.h>
 int main()
{
   int arr[5],i;
  for(i=0; i<5; i++){
 	printf("enter any marks a[%d]",i);	
	scanf("%d",&arr[i]);
	}
        for(i=0; i<5; i++){
	printf("\na[%d]%d",i,arr[i]);
	}
}