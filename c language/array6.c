#include<stdio.h>
  int main()
{
 	 int a[6],i,oddtotal=0,eventotal=0;
 	 for(i=0;i<6;i++){
  	printf("enter a valu [%d]",i);
  	scanf("%d",&a[i]);
	}
  	for(i=0;i<6;i++){
        if(i%2!=0){
         oddtotal=oddtotal+a[i];
	printf("\n odd number is %d",a[i]);
}
    else{
	 eventotal=eventotal+a[i];
	 printf("\t\t even number is %d",a[i]);
} 
}
    printf("\noddtotal is%d",oddtotal);
     printf("\t\teventotal is%d",eventotal);
 }
