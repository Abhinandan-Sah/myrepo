#include<stdio.h>

int main(){
    int a[7],i, n;
    printf("enter the no. of element");
    scanf("%d", &n);
    printf("\n enter the element");
    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    printf("\nThe elements are \n");
    for(i=0; i<n; i++){
        printf("%d\t%u\n",a[i],&a[i]);
    } 
    return 0;
}