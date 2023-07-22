#include<iostream>
using namespace std;

int fib(int n){
    if(n<=1){
        return 1;
    }
    return fib(n-2) + fib(n-1);
}
int factorial(int n){
    if(n<=1){
        return 1;
    }
    return (n * factorial(n-1)) ;
}
int main(){
    int a;
    cout<<"Enter the value of a "<<endl;
    cin>>a;
    //cout<<"The factorial of "<<a<<" is "<<factorial(a)<<endl;
    cout<<"The term in fibonacci sequence at position "<<a<<" is "<<fib(a)<<endl;

    return 0;
}