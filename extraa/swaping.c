#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter a:");
    scanf("%d",&a);
    printf("enter b:");
    scanf("%d",&b);
    c=a;
    a=b;
    b=c;
    printf("\n a value is %d",a);
    printf("\n b value is %d",b);
}