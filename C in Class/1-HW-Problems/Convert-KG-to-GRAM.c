#include<stdio.h>

int main(){
    int kg;
    int gram;
    printf("Enter the value of kg\n");
    scanf("%d",&kg);
    gram=kg*1000;
    printf("The gram of %d kg is: %dgram",kg,gram);
    return 0;
}