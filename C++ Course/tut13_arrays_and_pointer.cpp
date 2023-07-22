#include<iostream>
using namespace std;

int main(){
    // Array Example
    int marks[] = { 34, 64, 54, 47};
    
    // int marks[] = {343,654,756,86};
    // cout<<"These are marks"<<endl;
    // cout<<marks[0]<<endl;
    // cout<<marks[1]<<endl;
    // cout<<marks[2]<<endl;
    // cout<<marks[3]<<endl;

    //for mathmarks
    // int mathmarks[4];
    // mathmarks[0] = 45;
    // mathmarks[1] = 75;
    // mathmarks[2] = 49;
    // mathmarks[3] = 87;

    // cout<<"These are math marks"<<endl;
    // cout<<mathmarks[0]<<endl;
    // cout<<mathmarks[1]<<endl;
    // mathmarks[2]= 676;// -->You can change the value of an array
    // cout<<mathmarks[2]<<endl;
    // cout<<mathmarks[3]<<endl;

    // From for loop
    // for (int i = 0; i < 4; i++)
    // {
    //    cout<<marks[i]<<endl;
    // }
    
    // from while loop
    // int i = 0;-
    
    // // while (i<4)
    // // {
    // //     cout<<marks[i]<<endl;
    // //     i++;
    // // }
    
    // // from while loop
    // do
    // {
    //     cout<<marks[i]<<endl;
    //     i++;
    // } while (i<4);

    //pointer and array
    int *p = marks;
    cout<<*(p++)<<endl;
    cout<<*(++p);
    // cout<<"The value of marks[0] is "<<*p<<endl;
    // cout<<"The value of marks[1] is "<<*(p+1)<<endl;
    // cout<<"The value of marks[2] is "<<*(p+2)<<endl;
    // cout<<"The value of marks[3] is "<<*(p+3)<<endl;

    return 0;
}