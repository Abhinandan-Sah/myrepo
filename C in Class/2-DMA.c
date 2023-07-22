#include<stdio.h>

// int main(){
//     int n;
//     int *ptr;
//     int sum =0;
//     int i =0;
//     if(ptr == NULL){
//         printf("Error");
//     }
//     else{
//         printf("Enter the elements in array");
//     }
//     for(i=0; i<n; i++){
//         scanf("%d", *(ptr+i));
//     }

//     printf("Array elements are ");
//     for(i=0; i<n; i++){
//         printf("%d\n", *(ptr+i));
//     }

#include<stdio.h>

int main(){
    int arr[]={2, 3, 4, 5, 6};
    int n=5;
    int s=0;
    int e=n-1;
    int temp;
    while(s<=e){
        temp=arr[s];
        arr[s]=arr[e];
        arr[e]=temp;
        s++;
        e--;
    }
    for(int i=0; i<n; i++){
        printf("%d", arr[i]);
    }
    return 0;
}

    


