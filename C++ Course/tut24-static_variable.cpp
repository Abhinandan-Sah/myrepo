#include <iostream>
using namespace std;

class employee
{
    int id;
    static int count;

public:
    void getid()
    {
        cout << endl
             << "Enter the id" << endl;
        cin >> id;
        count++;
    }

    void setid()
    {
        cout << "The id of employee is " << id << " and this is employee number " << count << endl;
    }

    static void getcount(){
        cout<<"The value of count is "<<count<<endl;
    }
};
// count is the static data member of class Employee
int employee::count;

int main()
{
    employee harry, rohan, lovish;
    harry.getid();
    harry.setid();
    employee ::  getcount();

    rohan.getid();
    rohan.setid();
    employee ::  getcount();

    lovish.getid();
    lovish.setid();
    employee ::  getcount();

    return 0;
}