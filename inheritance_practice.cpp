//c++ program to find area and circumference
#include <iostream>
using namespace std;

class Circle{
    public:
    
    int radius;
    void input()
    {
        
        cout<<"enter radius of the circle : ";
        cin>>radius;
    }

};

class Calculate: public Circle{
    public:

    void area()
    {
        cout<<"area of circle is:"<<3.14*radius*radius<<endl;
    }

    void circumference()
    {
        cout<<"circumference of circle is: "<<2*3.14*radius<<endl;
    }
};

int main()
{
    Calculate xyz;
    xyz.input();
    xyz.area();
    xyz.circumference();
    return 0;

}