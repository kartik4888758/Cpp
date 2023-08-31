#include <iostream>
using namespace std;

class maths
{
private:
    int a, b, c;

public:
    int call(int num1, int num2)
    {
        num1 = a;
        num2 = b;
    }

    int sum()
    {
        return a + b;
    }
};
int main()
{
    maths calc1;
    call(20, 30);

    cout << "sum is " << sum.calci();
}
