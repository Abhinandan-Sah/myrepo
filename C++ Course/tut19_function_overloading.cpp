#include<iostream>
using namespace std;


int sum(float a , int b ){
    return  a+b;
}
int sum(int a , int b, int c){
    return  a+b+c;
}
// Calculate volume of a cylinder
int volume(double r, int h){
    return(3.14*r*r*h);
}

// Calculate volume of a cube
int volume(int a){
    return(a*a*a);
}

//Rectangular box
int volume(int l, int b, int h){
    return (l*b*h);
}
int main(){
    cout<<"The sum of 4 and 5 is "<<sum(4,5)<<endl;
    cout<<"The sum of 4, 5 and 6 is "<<sum(4,5,6)<<endl;
    cout<<"The volume of cube of length 4 is "<<volume(4)<<endl;
    cout<<"The volume of cylinder  of radius 3 and 5 is "<<volume(4,5)<<endl;
    cout<<"The volume of rectangular box of length 2, breadth 5 and height 6 is "<<volume(2, 5, 6)<<endl;

    return 0;
}