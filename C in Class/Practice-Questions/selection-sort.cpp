#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

void selectSort(vector<int> arr, int n){
    int temp=0;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" "<<endl;
    }

}

int main(){
    int n; 
    cout<<"Enter the value  of n: "<<endl;;
    cin>>n;
    vector<int>arr{6, 5, 4, 3, 2, 1};
    cout<<"Enter the values you want to sort"<<endl;
    // for(int i=0; i<n; i++){
    //     // cin>>arr[i]<<" ";
    // }

 
    
    selectSort(arr, 5);
    
    return 0;
}