#include<stdio.h>

int main(){
    // Area of rectangle
    // int l,b;
    // int AreaOfRectangle;
    // printf("Enter the value of length and breadth\n");
    // scanf("%d%d",&l,&b);
    // AreaOfRectangle=l*b;
    // printf("Area of Rectangle is:%d",AreaOfRectangle);
    // return 0;

    //For triangle
    int breadth,h;
    float AreaOfTriangle;
    printf("Enter the value of breadth and height\n");
    scanf("%d%d",&breadth,&h);
    AreaOfTriangle=((float)1/2)*breadth*h;
    printf("Area of Triangle is:%f",AreaOfTriangle);
    return 0;
}