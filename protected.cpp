#include <iostream>
using namespace std;

class Animal
{
protected:
    string name;
};

class Dog:public Animal
{
public:
    void display(string a)
    {
        name = a;
        cout << name << " barks" << endl;
    }
};

int main()
{
    Dog abc;
    abc.display("ravi");
    return 0;
}