#include <iostream>
using namespace std;

// class Moon{
//     public:
//     int x,y;
//     Moon(){
//         cout<<"enter lenght:";
//         cin>>x;
//         cout<<"enter width:";
//         cin>>y;
//         cout<<"area of the shape is : "<<x*y;
//     }
// };
// int main()
// {
//     Moon abc;
//     return 0;
// }

// class Moon{
//     private:
//     int len,wid;
//     public:
//     Moon(int x,int y)
//     {
//         len=x;
//         wid=y;
//     }
//     void area()
//     {
//         cout<<"area of the figure is:"<<len*wid;
//     }
// };

// int main()
// {

//     Moon abc(10,30);
//     abc.area();
//     return 0;
// }

// class Maths{
//     private:
//     int x,y;
//     public:
//     Maths(int a,int b){
//         x=a;
//         y=b;
//     }
//     void add()
//     {
//         cout<<"sum is :"<<x+y<<endl;
//     }
//     void subs()
//     {
//         cout<<"difference is :"<<x-y<<endl;
//     }
//     void product()
//     {
//         cout<<"product of both number is:"<<x*y;
//     }
// };

// int main()
// {
//     Maths abc(50,10);
//     abc.add();
//     abc.subs();
//     abc.product();
//     return 0;
// }

// class Maths{
//     private:
//     int x,y;
//     public:
//     Maths(int a,int b)
//     {
//         x=a;
//         y=b;
//     }

//     Maths(Maths &obj){
//         x=obj.x;
//         y=obj.y;
//     }
//     void add()
//     {
//         cout<<"sum of both the number is: "<<x+y<<endl;
//     }

// };
// int main()
// {
//     Maths abc(10,20);
//     Maths abc1=abc;
//     Maths abc2=abc;
//     abc.add();
//     abc1.add();
//     abc2.add();
//     return 0;
// }

// int add(int a, int b)
// {
//     cout<<"sum is "<<a+b<<endl;
// }
// int add(int a,int b,int c)
// {
//     cout<<"sum is "<<a+b+c<<endl;
// }
// double add(double a, double b)
// {
//     cout<<"sum is "<<a+b<<endl;
// }
// double add(double a, int b,double c)
// {
//     cout<<"sum is "<<a+b+c<<endl;
// }
// int main()
// {
//     add(10,20);
//     add(10,30);
//     add(10.1,40.9);
//     add(10.1,20.4);
//     return 0;
// }
// class Overload
// {
// public:
//     int value;
//     int value1;
//     int value2;
//     int value3;
//     Overload() : value(5) {}

//     void operator++()
//     {
//         ++value;
//         cout << "new value is:" << value << endl;
//     }
//     void operator++(int)
//     {
//         value2++;
//         cout << "new value is:" << value1 << endl;
//     }
//     void operator--()
//     {
//         --value2;
//         cout << "new value is:" << value2 << endl;
//     }
//     void operator--(int)
//     {
//         value3--;
//         cout << "new value is:" << value3 << endl;
//     }
// };
// int main()
// {
//     Overload abc;
//     ++abc;
//     ++abc;
//     --abc;
//     --abc;
//     return 0;
// }

class Moon
{
public:
    int radius;
    void get()
    {
        cout << "enter radius for circle:" ;
        cin >> radius;
    }
};
class Sun : public Moon
{
public:
    void area()
    {
        cout << "area of the circle is:" << radius * radius * 3.14 << endl;
    }
    void circum()
    {
        cout << "circumference of the circle is :" << 2 * 3.14 * radius << endl;
    }
};
int main(){
    Sun abc;
    abc.get();
    abc.area();
    abc.circum();
    return 0;
}