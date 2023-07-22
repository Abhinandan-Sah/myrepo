#include<iostream>
using namespace std;

int count=0;
class num{
    public:
    num(){
        count++;
        cout<<"This is the first time when my constructor is called for object number1 "<<count<<endl;
    }
    
    ~num(){
        cout<<"This is the first time when my destructor is called for object number2 "<<count<<endl;
        count--;
    }
};
int main(){
    cout<<"We are in our main function"<<endl;
    cout<<"creating our first object number1"<<endl;
    num n1;
    {
        cout<<"Entering in the block"<<endl;
        cout<<"Creating two more objects"<<endl;
        num n2, n3;
        cout<<"Existing this block"<<endl;

    }
    cout<<"Back to the main function"<<endl;
    return 0;
}