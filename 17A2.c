#include<stdio.h>
void main(){
    int *a,A;
    float *b,B;
    double *c,C;
    char *d,D;
    printf("enter A: enter B: enter C: enter D:");
    scanf("%d %f %lf %c",&A,&B,&C,&D);
    *a = A,*b = B,*c = C,*d = D;
    printf("%d\n",*a);
    printf("%f\n",*b);
    printf("%lf\n",*c);
    printf("%c\n",*c);
}