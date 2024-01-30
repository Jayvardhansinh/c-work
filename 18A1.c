#include<stdio.h>
int add();
void main(){
    int result=add();
    printf("%d\n",result);
}

int add()
{
    int n;
    printf("enter val to be added\n");
    scanf("%d",&n);
    int a[n],sum=0;
    for(int i=0;i<n;i++){
        printf("enter value:");
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    return sum;
}