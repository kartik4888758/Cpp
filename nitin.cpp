#include <iostream>
using namespace std;

// int main()
// {
//     int a,i;
//     cout<<"enter number:";
//     cin>>a;

//     for(i=1;i<=10;i++)
//     {
//         cout<<a<<"x"<<i<<"="<<a*i<<endl;
//     }
//     return 0;
// }

// int main()
// {
//     int a;
//     cout << "ENTER YOUR AGE:";
//     cin >> a;

//     if (a >= 18 && a<100 )
//     {
//         cout << "YOU ARE ELIGIBLE TO VOTE.";
//     }
//     else if (a>100 || a=0)
//     {
//         cout<<"YOU ARE DEAD LMAOOO!!!!!!";
//     }

//     else
//     {
//         cout << "YOU ARE MINOR.";
//     }
//     return 0;
// }

// class Student{
//     public:
//     string name;
//     int age;
//     char grade;

//     Student(string abc,int d,char e)
//     {
//         name=abc;
//         age=d;
//         grade=e;
//     }
//     void print()
//     {
//         cout<<"name is:"<<name<<endl;
//         cout<<"enter your age:"<<age<<endl;
//         cout<<"enter your grade:"<<grade<<endl;
//     }

// };
// int main()
// {
//     Student obj("kartik",19,'A');
//     obj.print();
//     return 0 ;

// }

// class Hello
// {
// public:
//     int abc=10;
//     int bcd=20;
// };
// class Student : public Hello
// {
// public:
//     int studentid=100;

//     void display()
//     {
//         cout<<studentid<<endl;
//         cout<<abc<<endl;
//         cout<<bcd<<endl;
//     }

// };
// int main()
// {
//     Student xyz;
//     xyz.display();
// }

// void sum()
// {
//     int a, b;
//     cout << "enter first number:";
//     cin >> a;
//     cout << "enter second number:";
//     cin >> b;
//     cout << "sum of both number is:" << a + b;
// }
// int main()
// {
//     sum();
//     return 0;
// }

// class Maths
// {
// public:
//     int a, b;
//     Maths(int c, int d)
//     {
//         a = c;
//         b = d;
//     }
//     void add()
//     {
//         cout << "sum is:" << a + b;
//     }
// };
// int main()
// {
//     Maths abc(10, 20);
//     abc.add();
//     return 0;
// }

// class Sun{
//     public:
//     int a,b;
//     Sun()
//     {
//         cout<<"enter a:";
//         cin>>a;
//         cout<<"enter b:";
//         cin>>b;
//         cout<<"sum is:"<<a+b;
//     }
// };
// int main()
// {
//     Sun abc;
//     return 0;
// }

// class Sun
// {
// public:
//     int a, b;
//     Sun()
//     {
//         cout << "enter a:";
//         cin >> a;
//         cout << "enter b:";
//         cin >> b;
//         cout << "sum is:" << a + b<<endl;
//     }
//     Sun(Sun &obj)
//     {
//         a=obj.a;
//         b=obj.b;
//     }
//     void multi()
//     {
//         cout<<"product is :"<<a*b<<endl;
//     }
// };
// int main()
// {
//     Sun abc1;
//     Sun abc2=abc1;
//     abc1.multi();
//     abc2.multi();
//     return 0;

// }

// class Sun
// {
// private:
//     int a;

// protected:
//     int b;

// public:
//     int c = 30;
//     Sun()
//     {
//         cout << "value of c is :" << c << endl;
//     }

//     void num(int num1)
//     {
//         a=num1;
//         cout << "value of a is :" << a << endl;
//     }
// };
// class Moon : public Sun
// {
// public:
// int d=100;
// Moon()
// {
//     cout<<"value of d is:"<<d<<endl;
// }
//     void nume(int num2)
//     {
//         b=num2;
//         cout << "value of b is :" << b << endl;
//     }
// };

// int main()
// {

//     Moon xyz;
//     xyz.num(10);
//     xyz.nume(20);
//     return 0;

// }
// int sum(int a,int b)
// {

//     cout<<a+b<<endl;
// }

// int sum(int a,int b, int c)
// {

//     cout<<a+c+b<<endl;
// }

// float sum(float a,float b)
// {

//     cout<<a+b<<endl;

// }
// double sum(double a,double b)
// {

//     cout<<a+b<<endl;

// }
// int main()
// {
//     sum(10,20);
//     sum(10,20,30);
//     sum(10.20,20.20);
//     sum(10.231,30.258);
//     return 0;

// }

// class Overload{
//     public:
//     int a,b,c,d;
//     Overload():a(10)
//     {

//     }
//     void operator++()
//     {
//         ++a;
//         cout<<"new value is:"<<a<<endl;
//     }
//     void operator++(int)
//     {
//         a++;
//         cout<<"new value is:"<<b<<endl;
//     }
//     void operator--()
//     {
//         --a;
//         cout<<"new value is:"<<c<<endl;
//     }
//     void operator--(int)
//     {
//         a--;
//         cout<<"new value is:"<<d<<endl;
//     }

// };
// int main()
// {
//     Overload abc;
//     ++abc;
//     ++abc;
//     --abc;
//     --abc;

// }
// class overload{
//     public:
//     int a,b,c,d;
//     overload():a(10)
//     {}
//     void operator++()
//     {
//         ++a;
//         cout<<"new value is:"<<a<<endl;
//     }
//     void operator++(int)
//     {
//         b++;
//         cout<<"new value is:"<<b<<endl;
//     }
//     void operator--()
//     {
//         --c;
//         cout<<"new value is:"<<c<<endl;
//     }
//     void operator--(int)
//     {
//         d--;
//         cout<<"new value is:"<<d<<endl;
//     }
// };
// int main()
// {
//     overload abc;
//     ++abc;
//     ++abc;
//     --abc;
//     --abc;

// }
// class sun
// {
// public:
//     int a, b;
//     sun(int c, int d)
//     {
//         a = c;
//         b = d;
//     }

//     void add()
//     {
//         cout<<"sum is :"<<a+b<<endl;
//     }

// };

// int main()
// {
//     sun abc(10,20);
//     abc.add();
//     return 0;
// }

// class sun
// {
// public:
//     int a, b;
//     sun(int c, int d)
//     {
//         a = c;
//         b = d;
//     }
//     sun(sun &obj)
//     {
//         a=obj.a;
//         b=obj.b;
//     }
//     void add()
//     {
//         cout<<"sum is :"<<a+b<<endl;
//     }
// };
// int main()
// {
//     sun abc1(10,20);
//     sun abc2=abc1;
//     abc1.add();
//     abc2.add();
//     return 0;

// }

// class sun{
//     private:
//     int a;
//     protected:
//     int b;
//     public:
//     int c;

//     void get_a()
//     {
//         cout<<"enter value for a:";
//         cin>>a;
//     }
//     void display_ac()
//     {
//         cout<<" value of a is :"<<a<<endl;
//         cout<<" value of c is :"<<c<<endl;
//     }
// };
// class moon:public sun{
//     public:
//     moon()
//     {
//          cout<<"enter a value for c:";
//         cin>>c;
//     }
//     void get_b()
//     {
//          cout<<"enter value for b:";
//         cin>>b;
//     }

//     void display_b()
//     {
//        cout<<"value of b is:"<<b<<endl;
//     }
// };
// int main()
// {
//     moon xyz;
//     xyz.get_a();
//     xyz.get_b();
//     xyz.display_ac();
//     xyz.display_b();
//     return 0;
// }

#include <iostream>
#include <fstream>
using namespace std;

// int main()
// {
    // ofstream myfile("newew.txt");
    // myfile<<"this is new sentence.";
    // myfile.close();

    // ifstream myfile("newew.txt");
    // string line;
    // while (getline(myfile, line))
    // {
    //     cout << line;
    // }
    // myfile.close();
//}