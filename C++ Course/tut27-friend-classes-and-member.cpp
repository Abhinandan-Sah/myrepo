#include <iostream>
using namespace std;

class complex;
class calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }

    int sumRealcomplex(complex, complex);
    int sumCompcomplex(complex , complex );
};

class complex
{
    int a, b;
    friend int calculator::sumRealcomplex(complex, complex);
    friend int calculator::sumCompcomplex(complex, complex);

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    void printNumber()
    {
        cout << "Your complex number is " << a << " + " << b << "i" << endl;
    }
};

int calculator::sumRealcomplex(complex o1, complex o2)
{
    return (o1.a + o2.a);
}
int calculator::sumCompcomplex(complex o1, complex o2)
{
    return (o1.b + o2.b);
}
int main()
{
    complex o1, o2;
    o1.setNumber(1, 4);
    o2.setNumber(5, 7);
    calculator calc;
    int result = calc.sumRealcomplex(o1, o2);
    cout << "The sum of real part of o1 and o2 is " << result << endl;
    int result2 = calc.sumCompcomplex(o1, o2);
    cout << "The sum of real part of o1 and o2 is " << result2 << endl;
    return 0;
}