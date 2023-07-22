#include <iostream>
using namespace std;
#include<math.h>

class Distance
{
    int x1, y1;
    int x2, y2;

public:
    void point1(int a, int b)
    {
        x1 = a;
        y1 = b;
    }
    void point2(int c, int d)
    {
        x2 = c;
        y2 = d;}
        void formula()
        {
            float h = ((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1));
            cout << "The distance between the two point is " << sqrt(h) << endl;
        }
    };
    int main()
    {
        int p, q, r, s;
        cout << "Enter the  coordinate of first axis " << endl;
        cin >> p >> q;
        cout << "Enter the  coordinate of second axis " << endl;
        cin >> r >> s;

        Distance o1;
        o1.point1(p, q);
        o1.point2(r, s);
        o1.formula();
        return 0;
    }