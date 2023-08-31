#include <iostream>
using namespace std;

class first
{
public:
    int r;
    first()
    {
        cout << "enter radius of circle:";
        cin >> r;
    }
};
class second : public first
{
public:
    void area()
    {
        cout << "area of the circle is:" << 3.14 * r * r << endl;
    }
};
class third : public first
{
    public:
    void circumference()
    {
        cout<<"circumference of circle is:"<<2*3.14*r<<endl;
    }
};
int main()
{
    second abc;
    abc.area();
    third xyz;
    xyz.circumference();
    return 0;
}