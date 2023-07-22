#include<stdio.h>

int main(){
    int i, n;
    int *p;
    printf("Enter no, of element =");
    scanf("%d",&n);
    p=(int*)malloc(n*sizeof(int));
    if(p=NULL){
        printf("not enough memory");
        exit(0);
    }
    for(i=0; i<n; i++){
        
    }

    return 0;
}