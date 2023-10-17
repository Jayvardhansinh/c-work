#include<stdio.h>
void main(){
    int i,n;
    printf("enter nval of terms:");
    scanf("%d",&n);
    int a=0,b=1,c=a+b;
    for(i=0;1<=n;i++){
        c=a+b;
        a=b;
        b=c;
        printf("%d",&c);
    }
}