#include<iostream>
using namespace std;

int main(){
    // What is pointer? ---> data type which holds the address 
    // of other data type
    int a =4;
    int *b = &a;
    // // & ---> (Address of) operator
    // cout<<"The address of a is: "<<&a<<endl;
    // cout<<"The address of a is: "<<b<<endl;

    // // * ---> (Value at) Dereference operato
    // cout<<"The value at address of b is: "<<*b<<endl;

    // Pointer to pointer
    int **c = &b;
    // cout<<"The address of b is: "<<&b<<endl;
    // cout<<"The address of b is: "<<c<<endl;
    cout<<"The value at address c is "<<*c<<endl;
    cout<<"The value at address value_at(value_at(c)) is "<<**c<<endl;


    return 0;
}