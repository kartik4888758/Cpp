#include <iostream>
using namespace std;

class Person
{
public:
    string name;
    int age;
};

class Student : public Person
{
public:
    int studentID;
    void details1()
    {
        cout << "Enter your student ID:";
        cin >>studentID;
    }
};

class Teacher : public Person
{
public:
    string department;
    void details()
    {
        cout << "Enter your name:";
        cin >> name;
        cout << "Enter your age:";
        cin >> age;
        cout << "Enter your department:";
        cin >> department;
    }
};
int main()
{
    Teacher abc;
    abc.details();
    Student xyz;
    xyz.details1();
    return 0;
}