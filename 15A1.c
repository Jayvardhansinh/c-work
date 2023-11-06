//copy all the elements of one array to another.
#include<stdio.h>
void main(){
    char a[100],b[100];
    printf("enter string of a:");
    gets(a);
    printf("enter string of b:");
    gets(b);
    int i;
    for(i=0;a[i]!=0;i++){
        a[i]=b[i];
    }
    a[i]='\0';
    printf("string a:");
    puts(a);
}