#include<iostream>
using namespace std;

// Function prototype
// type function-name (arguments);
// int sum(int a, int b);--> Acceptable
// int sum(int a,  b);--> Not Acceptable
// int sum(int , int );--> Acceptable

int main(){
    int num1, num2;
    cout<<"Enter the value of num1 "<<endl;
    cin>>num1;
    cout<<"Enter the value of num2 "<<endl;
    cin>>num2;
     cout<<"The sum of num1 and num2 is: "<<sum(num1 , num2)<<endl;
    return 0;
}

int sum(int a, int b){
    int c = a+b;
    return c;
}