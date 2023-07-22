#include<iostream>
using namespace std;

int glo = 6;
void sum(){
    int a;
    cout<<glo;
} 

int main(){ 
    int glo = 9;
    glo = 78;
    // int a = 4;
    // int b = 5;
    int a = 4, b=5;
    float  pi= 3.44;
    char  c= 'u';
    bool is_true = true;
    sum();
    cout<<glo<< is_true;
    // cout<<"This is my tutorial 4. \nHere the value of a is "<<a<<". \nThe value of b is "<<b;
    // cout<<"\nThe value of pie is: "<<pi;
    // cout<<"\nThe value of pie is: "<<c;

    return 0;
}