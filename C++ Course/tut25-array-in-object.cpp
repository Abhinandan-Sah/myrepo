#include<iostream>
using namespace std;

class Employee{
    int id;
    int salary;
    public:
    void getid(void){
        cout<<"Enter employee Id "<<endl;
        cin>>id;
    }
    void setid(void){
        cout<<"The id of employee is "<<id<<endl;
    }
};
int main(){
    Employee fb[4];
    for(int i=0; i<4; i++){
        fb[i].getid();
        fb[i].setid();
    }
    return 0;
}