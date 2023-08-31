#include <iostream>
using namespace std;

class vehicle
{
public:
    int a = 10;
    vehicle()
    {
        cout << "value is:" << a << endl;
    }
};
class car : public vehicle
{
    public:
    int b=12;
    car()
    {
        cout << "value is:" << b << endl;
    }

};
int main()
{
    vehicle abc;
    car xyz;
}