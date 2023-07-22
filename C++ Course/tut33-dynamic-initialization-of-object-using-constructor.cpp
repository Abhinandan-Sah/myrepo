#include <iostream>
using namespace std;

class bankDeposit
{
    int principle;
    int years;
    float interestrate;
    float returnValue;

public:
    bankDeposit() {}
    bankDeposit(int p, int y, float r);
    bankDeposit(int p, int y, int R);
    void show();
};
bankDeposit::bankDeposit(int p, int y, float r)
{
    principle = p;
    years = y;
    interestrate = r;
    returnValue = principle;
    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (interestrate + y);
    }
}
bankDeposit::bankDeposit(int p, int y, int R)
{
    principle = p;
    years = y;
    interestrate = float(R) / 100;
    returnValue = principle;
    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (interestrate + y);
    }
}
void bankDeposit::show()
{
    cout << "The principle amount was " << principle << "and the returnvalue after " << years << " years is " << returnValue << endl;
}

int main()
{
    bankDeposit d1, d2;
    int p, y;
    float r;
    int R;

    cout << "Enter principle, years and interest rate " << endl;
    cin >> p >> y >> r;
    d1 = bankDeposit(p, y, r);
    d1.show();

    cout << "Enter principle, years and interest rate " << endl;
    cin >> p >> y >> R;
    d2 = bankDeposit(p, y, R);
    d2.show();
    return 0;
}