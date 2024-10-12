#include<stdio.h>
int main()
{
   int a[5][5],i,j,diagonal=0, upper=0, lower=0;
	for(i=0; i<4; i++){
	for(j=0; j<4; j++){
	printf("enter a[%d][%d]",i,j);
	scanf("%d",&a[i][j]);
	   }
	}
 	   for(i=0; i<4; i++){
	    for(j=0; j<4; j++){
           printf("%d",a[j][i]);
   	   if(i==j){
         diagonal=diagonal+a[i][j];
	}
       else if(i<j){
	upper=upper+a[i][j];
          }
	else{
          lower=lower+a[i][j];  
	}
	}   
	printf("\n");
}
           printf("diagonal total is%d",diagonal);
	   printf("\n upper total is %d", upper);
	   printf("\n lower total is %d", lower);
 

}
 