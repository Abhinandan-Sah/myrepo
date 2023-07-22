#include<stdio.h>

int main(){
    int a, b, c; 
    printf("enter the value of a and b");
    scanf("%d%d",&a, &b);
    // c=a>b?a:b;
    // printf("%d is greater ",c);

    a>b?printf("%d is greater", a):printf("%d is greater ", b);
    return 0;
}