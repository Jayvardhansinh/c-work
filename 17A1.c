#include<stdio.h>
void main(){
    int *ptr,a;
    printf("enter a val:");
    scanf("%d",&a);
    ptr=&a;
    printf("address=%d\n",ptr);
    printf("value=%d",*ptr);
}