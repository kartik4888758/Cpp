#include <iostream>
using namespace std;

class Car
{
private:
    string make, model;

public:
    Car(string abc, string xyz)
    {
        make=abc;
        model=xyz;

    }
    int printinfo()
    {
        cout << "MAKER:" << make<<endl;
        cout << "MODEL:" << model<<endl;
    }
};

int main()
{
    Car object("Koinegsegg","Agera");
    object.printinfo();
    return 0;
}