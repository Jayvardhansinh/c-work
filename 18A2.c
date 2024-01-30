#include<stdio.h>
int comp(int a, int b);
void main(){
    int a,b;
    printf("enter values of a and b\n");
    scanf("%d %d",&a,&b);
    int result=comp(a,b);
    if(result==1){
        printf("value of a is greater");
    }
    else{
        printf("value of b is greater");
    }
}
    int comp (int a, int b){
        if(a<b){
            return 0;
        }
        else{
            return 1;
        }
    }