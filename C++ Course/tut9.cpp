#include<iostream>
using namespace std;

int main(){
    int age;
    cout<<"Tell me your age"<<endl;
    cin>>age;

    // Selection control structure: If else if else ladder
    // if((age<18) && (age>0)){
    //     cout<<"You can not go to the party"<<endl;
    // }
    // else if(age==18){
    //     cout<<"you are a kid and you will get a kid pass to the party"<<endl;
    // }
    // else if(age<1){
    //    cout<<"You are not yet born"<<endl; 
    // }
    // else{
    //     cout<<"you can come to the party"<<endl;
    // }

    // Selection control structure: Switch case statements
    switch (age)
    {
    case 18:
        cout<<"You are 18"<<endl;
        break;
    case 22:
        cout<<"You are 22"<<endl;
        break;    
    case 3:
        cout<<"You are 3"<<endl;
        break;
    default:
        cout<<"No special cases"<<endl;
        break;
    }
    return 0;
}