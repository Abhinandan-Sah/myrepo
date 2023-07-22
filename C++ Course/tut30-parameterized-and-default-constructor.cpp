#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
     complex(int, int);// constructor declaration

    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
    
};
    complex::complex(int x, int y)
    {
        a = x;
        b = y;
    } 
int main()
{
    complex a(5, 6);
    a.printNumber();

    complex b(8, 1);
    b.printNumber();
    return 0;
}