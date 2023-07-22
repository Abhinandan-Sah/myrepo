#include<iostream>
using namespace std;

//Call by reference
void swapPointer(int *a, int *b){
    int temp =*a;
    *a = *b;
    *b = temp;
}

int main(){
    int X= 4, Y=5;
    cout<<"The value of X is "<<X<<" and the value of Y is "<<Y<<endl;
    swapPointer(&X, &Y);
    cout<<"The value of X is "<<X<<" and the value of Y is "<<Y<<endl;

    return 0;
}