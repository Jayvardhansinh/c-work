#include<stdio.h>
void main(){
    int a,b,temp;
    printf("enter val of A and B:\n");
    scanf("%d %d",&a,&b);
    int *A,*B;
    A=&a,B=&b;
    temp=*A;
    *A=*B;
    *B=temp;
    printf("A=%d b=%d",*A,*B);
}