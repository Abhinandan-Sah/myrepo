#include<stdio.h>

int main(){
    int a,b,c,d,e;
    float avg;
    printf("Enter the value of a, b, c, d, e\n");
    scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
    avg=(a+b+c+d+e)/5;
    printf("The average is: %f", avg);
    return 0;
}