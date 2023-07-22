#include<stdio.h>

int main(){
    int feet, inches,i;
    printf("Enter the value in inches=");
    scanf("%d", &inches);
    feet=inches/12;
    i=inches%12;
    printf("Output=%d\"%d\'",feet,i);
    return 0;
}