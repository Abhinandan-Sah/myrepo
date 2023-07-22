#include<iostream>
using namespace std;

class complex{
    int a;
    int b;
    public:
    void setData(int v1, int v2){
        a =v1;
        b= v2;
    }

    void setDataBySum(complex o1, complex o2){
        a = o1.a + o2.a;
        b = o1.b + o2.b;
    }

    void printData(void){
        cout<<"Your complex number is "<<a<<" + "<<b<<"i"<<endl;
    }
};

int main(){
    complex c1, c2, c3;
    c1.setData(3, 4);
    c1.printData();

    c2.setData(7, 6);
    c2.printData();

    c3.setDataBySum(c1, c2);
    c3.printData();
    return 0;
}