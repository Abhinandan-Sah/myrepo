#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
    char * n; 
    int no, count=0, i;
    scanf("%d", &no);
    n=(char*)malloc(no*sizeof(char));
    fflush(stdin);
    gets(n);
    for(i=0; *(n+i)!='\0'; i++){
        count++;
    }
    printf("%d", count);
    // puts(n);
    free(n);
    return 0;
}