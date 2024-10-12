#include<stdio.h>
int main(){
    int k, i ,j;
    printf("enter k:");
    scanf("%d",&k);
    for(i=k ; i>=1; i--){
        for(j=1; j<=i; j++)
        { 
            printf("%d",j);
        }
        printf("\n");
    }
}