#include<iostream>
using namespace std;
class common{
    int a;
    public:
    common(){
        a=0;
    }
    common(int num){
        a=num;
    }

    /* When there is no copy constructor in function 
     then compiler supply its own copy constructor.
     */
    common(common &obj){
        cout<<"copy constructor call"<<endl;
        a=obj.a;
    }
    void display(){
        cout<<"The number for this object is "<<a<<endl;
    }
};
int main(){
    common x(33), y, z(45);
    x.display();
    y.display();
    z.display();

    common z1(x);//copy constructor invoked
    z1.display();

    //z2 = z;// Copy constructor not called

    common z2 = z;// Copy constructor invoked
    z2.display();
    return 0;
}