#include <iostream>
using namespace std;

class Overload
{
public:
    int value;
    int value2;
    int value3;
    int value4;

    Overload() : value(5)
    {
    }
    void operator++()
    {
        // for prefix overloading
        ++value;
        cout << " Increament value is: " << value << endl;
    }
    void operator++(int)
    {
        // for postfix overloading
        value2++;
        cout << " Increament value is: " << value2 << endl;
    }
    void operator--()
    {
        // for prefix overloading
        --value3;
        cout << " Decreament value is: " << value3 << endl;
    }
    void operator--(int)
    {
        // for postfix overlaoding
        value4--;
        cout << " Decreament value is: " << value4 << endl;
    }
};

int main()
{
    Overload abc;
    ++abc;
    ++abc;
    --abc;
    --abc;
}