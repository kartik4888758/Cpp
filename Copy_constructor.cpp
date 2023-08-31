#include <iostream>
using namespace std;

class Sum
{
private:
    int lenght, width;

public:
    Sum(int len,int wid)
    {
        lenght=len;
        width=wid;
    }
    int area()
    {
        cout<<"lenght of the shape is:"<<lenght<<endl;
        cout<<"width of the shape is:"<<width<<endl;
        cout<<"area of shape is = "<<lenght*width<<endl;

    }

};
int main()
{
    Sum abc1(10,20);
    Sum abc2(20,30);
    abc1.area();
    abc2.area();

    return 0;

}