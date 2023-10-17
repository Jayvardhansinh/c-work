#include<stdio.h>
void main(){
    float p,r,t,SI;
    printf("enter val of p:");
    scanf("%f",&p);
    printf("enter val of r:");
    scanf("%f",&r);
    printf("enter val of t:");
    scanf("%f",&t);
    SI=(p*r*t)/100;
    printf("SI=%f",SI);
}