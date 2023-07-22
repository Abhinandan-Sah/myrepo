#include<iostream>
using namespace std;

class constructor{
    int a, b;
    public:
    constructor(void);

    void printNumber(void){
        cout<<"Your number is "<<a<<" + "<<b<<endl;
    }

};
constructor:: constructor(void){
    cout<<"Namaste world"<<endl;
    a=0;
    b=0;

}
int main(){
    constructor c1;
    c1.printNumber();
    return 0;
}