#include<stdio.h>
int main()
{
	   int a[4][4],i,j;
	   for(i=0; i<3; i++){
	   for(j=0; j<3; j++){
	   printf("enter a [%d][%d]",i,j);
	  scanf("%d",&a[i][j]);
	  }
        }
          for(i=0; i<3; i++){
	  for(j=0; j<3; j++){
           if(a[i][j]==0)
         {
	printf("");
         } 
       else{
	printf("\t%d",a[i][j]);
       }
   printf("\t\n");
     }		
   }	
} 
                                   