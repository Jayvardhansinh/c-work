#include<stdio.h>
void main(){
    int a,b;
    printf("enter val of A and B:\n");
    scanf("%d %d",&a,&b);
    int *A,*B;
    A=&a,B=&b;
    printf("%d",*A+*B);
}