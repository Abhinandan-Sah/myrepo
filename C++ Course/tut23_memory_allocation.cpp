#include <iostream>
using namespace std;

class shop
{
    int itemId[100];
    int itemPrice[100];
    int counter;

public:
    void initcounter(void) { counter = 0; }
    void setprice(void);
    void display(void);
};
void shop ::setprice(void)
{
    cout << "Enter  Id of your no " << counter + 1 << endl;
    cin >> itemId[counter];

    cout << "Enter Price of your item " << endl;
    cin >> itemPrice[counter];
    counter++;
}
void shop::display(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The price of item with Id " << itemId[i] << " is " << itemPrice[i] << endl;
    }
}
int main()
{
    shop obj;
    obj.initcounter();
    obj.setprice();
    obj.setprice();
    obj.setprice();
    obj.display();

    return 0;
}