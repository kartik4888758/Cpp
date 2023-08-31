#include <iostream>
using namespace std;

class Student
{
public:
    void read()
    {
        cout << "student is reading." << endl;
    }
    void write()
    {
        cout << "student is writing." << endl;
    }
    void run()
    {
        cout << "student is running." << endl;
    }
    void code()
    {
        cout << "student is coding." << endl;
    }
};

class Track : public Student
{
public:
    void swim()
    {
        cout << "student is swimming." << endl;
    }
};

int main()
{
    Track act;
    act.write();
    act.code();
    act.run();
    act.swim();
    act.read();
    return 0;
}