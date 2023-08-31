#include <iostream>
using namespace std;

class Sun
{
private:
    // can be accessed only in base class
    int age;
    // can only be accessed in derived class
protected:
    int code;

public:
    void detail()
    {

        string name;
        cout << "Enter your name: ";
        cin >> name;
        cout << "Enter your age: ";
        cin>>age;
        cout << "Your name is: " << name<<endl;
        cout << " Your age is:" << age << endl;
        cout << "Code info : ABC_XYZ " << code<<endl;
    }
};

class Moon : public Sun
{
public:
    void get_code()
    {
        cout << "Enter your code number: ";
        cin >> code;
    }
};

int main()
{
    Moon abc;
    abc.get_code();
    abc.detail();
    return 0;
}