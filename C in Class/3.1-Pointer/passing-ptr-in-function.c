#include<stdio.h>

void aoc(float *, float *);
int main(){
    float radius, area; 
    scanf("%f", &radius);
    aoc(&radius, &area);
    return 0;
}

void aoc(float *r, float *a){
    *r=7;  //changing the value of r by 7
    *a=3.14 * (*r) * (*r);
    printf("area =%.2f", *a);
}