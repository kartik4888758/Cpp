// #include <iostream>
// using namespace std;

// void add()
// {
//     int a, b;
//     cout << "enter value for a:";
//     cin >> a;
//     cout << "enter value for b:";
//     cin>> b;
//     cout << "sum of both number is :" << a + b;
// }

// int main()
// {
//     add();
//     return 0;
// }

// #include <iostream>
// using namespace std;

// class Sum{
//     public:
// Sum(){
//     int a,b;
//     cout<<"enter value for a:";
//     cin>>a;
//     cout<<"enter value for b:";
//     cin>>b;
//     cout<<"sum of both the number is:"<<a+b;
// }

// };
// int main()
// {
//     Sum abc;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// class Sum
// {
// private:
//     int a, b;

// public:
//     Sum(int len, int wid)
//     {
//         a = len;
//         b = wid;
//     }
//     void add()
//     {
//         cout << "sum of both the number is:" << a + b;
//     }
// };
// int main()
// {
//     Sum abc(10, 20);
//     abc.add();
//     return 0;
// }

// #include <iostream>
// using namespace std;

// class Sum
// {
// private:
//     int a, b;

// public:
//     Sum(int x, int y)
//     {
//         a = x;
//         b = y;
//     }

//     Sum(Sum & obj)
//     {
//         a = obj.a;
//         b = obj.b;
//     }
//     void add()
//     {
//         cout << "the sum of both the number is:" << a + b<<endl;
//     }
// };
// int main()
// {
//     Sum abc(10, 20);
//     Sum abc1 = abc;
//     abc.add();
//     abc1.add();
//     return 0;
// }

#include <iostream>
using namespace std;

int add(int a, int b)
{
    cout << "sum is :" << a + b << endl;
}

int add(int a, int b, int c)
{
    cout << "sum is :" << a + b + c<<endl;
}

double add(double a, double b)
{
    cout << "sum is:" << a + b<<endl;
}
double add(double a, double b, double c)
{
    cout << "sum is:" << a + b + c<<endl;
}

int main()
{
    add(10, 20);
    add(10, 20, 30);
    add(100.20, 10.20);
    add(10.12, 20.20, 10.30);
    return 0;
}

// #include <iostream>
// using namespace std;

// class Student{
//     private:
//     string name;
//     int age;
//     public:
//     Student(string don,int b)
//     {
//         name=don;
//         age=b;
//     }
//     Student(Student &obj){
//         name=obj.name;
//         age=obj.age;
//     }

//     void ask()
//     {
//         cout<<"name of the user is " <<name<<" and his age is "<<age<<endl;
//     }
// };
// int main()
// {
//     Student abc("kartik",18);
//     Student abc1=abc;
//     abc.ask();
//     abc1.ask();
//     return 0;
// }
