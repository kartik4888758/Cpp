#include <iostream>
using namespace std;

class home{
    public:
    int x,y;
    int add()
    {
        return x+y;
    }

    int substract()
    {
        return x-y;
    }
};

int main()
{
    home ijk;
    cout<<"enter first number:";
    cin>>ijk.x;
    cout<<"enter second number:";
    cin>>ijk.y;

    cout<<"sum is: "<<ijk.add()<<endl;
    cout<<"difference is:"<<ijk.substract()<<endl;
}