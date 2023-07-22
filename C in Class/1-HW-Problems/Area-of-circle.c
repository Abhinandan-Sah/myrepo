#include<stdio.h>

int main(){
    int r;
    float Area;
    printf("Enter the value of radius\n");
    scanf("%d",&r);
    Area=(3.14)*r*r;
    printf("Area of circle is:%f",Area);
    return 0;
}