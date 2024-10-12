#include<stdio.h>
int main()
{
   int  i,n,a[5][5],total=0;
    for((i=0; i<3; i++){
     for(n=0; n<3; n++){
	printf("enter a value[%d][%d]",i,n);
	scanf("%d"&a[i][n]);
	}
	}
      for(i=0; i<3; i++){
      for(n=0; n<3; n++){
     if(i==n)
        {
          printf("%d",a[i][n]);
	}
	else{
	 printf("%d",a[i][n]);
        total=total+i;
        }
       printf("\n total is %d",total);
      } 
    printf("\n");
    }
  } 
}