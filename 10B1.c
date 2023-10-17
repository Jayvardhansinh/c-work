#include<stdio.h>
void main(){
    int n,i=1,sum=0;
    printf("enter val of n:");
    scanf("%d",&n);
    while(i<n){
    if (n%i==0){
        sum=sum+i;
    }
    i++;
    }
    if(sum==n){
        printf("%d it is a perfect num",n);
    }
    else{
        printf("%d it is not a perfect num",n);
    }
}