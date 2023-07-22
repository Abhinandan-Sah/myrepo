#include<stdio.h>
#include<math.h>

int main(){
    int r; float area;
    int *r1;
    float *area1;
    r1=&r;
    area1=&area;
    printf("Enter the value of r");
    scanf("%d",r1);
    *area1= 3.14*pow(*r1, 2);
    printf("area = %f", *area1);
    printf("area = %f", area);
    return 0;
}