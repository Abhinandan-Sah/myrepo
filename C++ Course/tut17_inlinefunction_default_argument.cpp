#include<iostream>
using namespace std;

// inline int product(int a, int b){
//     //Not recommended to use below lines with inline functions
//     // static int c=0; //--> This executes only once
//     // c = c + 1;// ---> Next time this function is run, the value of c will be retained
//     return a*b;
// }

float moneyreceived(int money, float factor= 1.04){
    return money * factor;
}
int main(){
    // int a, b;
    // cout<<"Enter the value of a and b "<<endl;
    // cin>>a>>b;
    // cout<<"The product of a and b is "<<product(a, b)<<endl;
    int money = 100000;
    cout<<"If you have "<<money<<" RS in your bank account, you will receice "<<moneyreceived(money)<<" Rs after 1 year";
    cout<<"For VIP: If you have "<<money<<" RS in your bank account, you will receice "<<moneyreceived(money,1.20)<<" Rs after 1 year";

    return 0;
}