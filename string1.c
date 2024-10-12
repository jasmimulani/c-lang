
#include<stdio.h>
 int main()
{ 
     char str[20],a[20];
	 
	int j,k;
	printf("enter string:");
	gets(str);
	printf("your string is: %s",str);
	int i=0;
	while(str[i]!='\0'){
	i++;
	j=i;
	}
	for(k=0; k<i; k++){
	a[k]=str[--j];
	}
	a[k]='\0';
	printf("\nlenghth: %s",a);
}