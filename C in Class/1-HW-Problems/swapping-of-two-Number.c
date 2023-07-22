#include<stdio.h>

int main(){
    // int a=10;
    // int b=20;
    // int c;
    // c=a;
    // a=b;
    // b=c;
    // printf("The value of a is: %d\n", a);
    // printf("The value of b is: %d", b);
    // return 0;

    // int a, b, c;
    // printf("enter the values of a and b:");
    // scanf("%d%d",&a, &b);
    // printf("value before swap\n");
    // printf("a=%d\tb=%d",a,b);
    // c=a;
    // a=b;
    // b=c;
    // printf("\n");
    // printf("a=%d\tb=%d",a,b);
    // return 0;

    //solution without using 3rd variable
    int a, b;
    printf("enter the values of a and b:");
    scanf("%d%d",&a, &b);
    printf("value before swap\n");
    printf("a=%d\tb=%d",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\n");
    printf("a=%d\tb=%d",a,b);
    return 0;

}