#include<stdio.h>

int main(){
    int p,r,t;
    float SI;
    printf("Enter the value of p, t and r\n");
    scanf("%d%d%d",&p,&t,&r);
    SI=(p*t*r)/100;
    printf("SI is:%f", SI);
    return 0;

}