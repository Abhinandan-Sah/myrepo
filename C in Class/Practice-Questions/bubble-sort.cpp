#include<iostream>
using namespace std;

void sort(int arr[], int n){
    int temp=0;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]>arr[j]){
                temp= arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }

    for(int i=0; i<5; i++){
        cout<<arr[i]<<" "<<endl;
    }
    
}
int main(){
    int arr[5]={5,4,3,2,1};
    sort(arr, 5);
    

    return 0;
}