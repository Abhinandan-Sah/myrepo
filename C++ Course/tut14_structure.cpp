#include<iostream>
using namespace std;

typedef struct employee{
    int code;
    float salary;
    char name;
}emp;
    // union can be only used for once at a time
union money{
    int rice;
    float pound;
    char  car;
};

int main(){
    enum meal{breakfast, lunch, dinner};
    meal m1 = breakfast;
     cout<<(m1==1);// --> The value is false
    // cout<<breakfast;
    // cout<<lunch;
    // cout<<dinner;

    // union money m1;
    // m1.rice = 34;
    // // m1.car = 'c';
    // cout<<m1.rice<<endl;
    // // emp harry;
    // struct employee bikash;
    // struct employee abhisek;
    // harry.code = 23;
    // harry.salary = 343.5;
    // harry.name = 'c';

    // cout<<"The value is "<<harry.code<<endl;
    // cout<<"The value is "<<harry.salary<<endl;
    // cout<<"The value is "<<harry.name<<endl;

    return 0;
}