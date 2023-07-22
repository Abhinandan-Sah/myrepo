#include<iostream>
using namespace std;

void sort(int arr[], int n, int key){
    int s=0;
    int e=n-1;
    int mid=(e-s)/2+s;
    bool flag=false;
    while(s<=e){
        if(key == arr[mid]){
            flag=true;
            break;
        }
        else if(key > arr[mid]){
            s=mid+1;
        }
        else if(key < arr[mid]){
            e=mid-1;
        }
        mid=(s+e)/2;
    }


    if(flag){
        cout<<"key is found"<<endl;
    }
    else{
        cout<<"key is not found"<<endl;
    }

}

int main(){
    int a[10]={0,1,2,3,4,5,6,7,8,9};
    int key;
    cout<<"Enter key: ";
    cin>>key;
    sort(a, 10, key);

    return 0;

}