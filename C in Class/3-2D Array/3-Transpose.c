#include<stdio.h>

int main(){
    int a[3][3], i, j;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("enter the value of a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("elements of 2D matrix are \n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d %u\t", a[i][j]);
        }
        printf("\n");
    }

    printf("Transpose 2D matrix are \n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d %u\t", a[j][i]);
            // scanf("%d", &a[i][j]);
        }
        printf("\n");
    }

    return 0;
}