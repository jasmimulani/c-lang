#include<stdio.h>
int main()
{
   int  i,n,j,a[5][5],total=0;
    for(i=0; i<3; i++){
     for(j=0; j<3; j++){
	printf("enter a value[%d][%d]",i,n);
	scanf("%d",&a[i][n]);
	}
	}
      for(i=0; i<3; i++){
      for(j=0; j<3; j++){
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
 