#include<stdio.h>

int main(){
    int a[100], i, n, sum=0;
    printf("Enter the no. of elements");
    scanf("%d", &n);
    printf("\nenter the element");
    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
        sum=sum+a[i];
    }
    printf("Sum= %d\n", sum);
    return 0;
}