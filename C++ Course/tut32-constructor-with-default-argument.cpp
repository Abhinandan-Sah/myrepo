#include<iostream>
using namespace std;

class simple{
    int data1;
    float data2;
    int data3;
    public:
    simple(int x, float y=2.3, int z = -4){
        data1=x;
        data2=y;
        data3=z;
    }
    void printdata();
};
void simple:: printdata(){
    cout<<"The value of data1, data2 and data3 is "<<data1<<" , "<<data2<<" and "<<data3<<endl;

}
int main(){
    simple a(2);
    a.printdata();
    return 0;
}