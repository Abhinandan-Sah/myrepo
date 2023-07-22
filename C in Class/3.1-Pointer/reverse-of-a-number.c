#include<stdio.h>

int main(){
    int a, ans=0, rem;
    int *a1, *ans1, *rem1;
    a1=&a;
    ans1=&ans;
    rem1=&rem;
    printf("Enter the value of a: ");
    scanf("%d", a1);
    while(*a1!=0){
        *rem1=*a1%10;
        *ans1=(*ans1)*10+rem;
        *a1=(*a1)/10;
    }
    printf("%d", *ans1);


    return 0;
}