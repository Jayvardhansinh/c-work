#include<stdio.h>
void main(){
    int arr[10],i,cp=0,cn=0;
    for(i=0;i<10;i++){
    printf("enter val into arr[%d]:",i);
    scanf("%d",&arr[i]);
    }
    for(i=0;i<10;i++){
        if(arr[i]>=0){
            cp++;
        }
        else{
            cn++;
        }
    }
    printf("pos = %d neg = %d",cp,cn);
}