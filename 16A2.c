#include<stdio.h>
void main(){
    int a[3][3],i,j,countp=0,countn=0,zero=0;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("enter val of a[%d][%d]:",i,j);
            scanf("%d",&a[i][j]);
            if(a[i][j]>0){
                countp++;
            }
            else if(a[i][j]<0){
                countn++;
            }
            else if(a[i][j]==0){
                zero++;
            }
        }
    }
    printf("count of positive %d\n",countp);
    printf("count of negative %d\n",countn);
    printf("count of zero %d\n",zero);
}