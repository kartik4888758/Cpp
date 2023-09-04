#include <iostream>
using namespace std;

class AccessDemo {
private:
    int privateData; // Private data member

protected:
    double protectedData; // Protected data member

public:
    int publicData; // Public data member

    // Constructor to initialize data members
    AccessDemo(int priv, double prot, int pub) : privateData(priv), protectedData(prot), publicData(pub) {}

    // Public member function to display data
    void DisplayData() {
        cout << "Private Data: " << privateData << endl; // Accessible within the class
        cout << "Protected Data: " << protectedData << endl; // Accessible within the class and derived classes
        cout << "Public Data: " << publicData << endl; // Accessible from anywhere
    }
};

class DerivedAccessDemo : public AccessDemo {
public:
    DerivedAccessDemo(int priv, double prot, int pub) : AccessDemo(priv, prot, pub) {}

    // Public member function to access protected and public data
    void AccessProtectedAndPublic() {
        cout << "Derived Class - Accessing Protected Data: " << protectedData << endl; // Accessing protected data
        cout << "Derived Class - Accessing Public Data: " << publicData << endl; // Accessing public data
    }
};

int main() {
    AccessDemo obj1(10, 20.5, 30);
    DerivedAccessDemo obj2(5, 15.2, 25);

    cout << "Accessing Data from the Base Class:" << endl;
    obj1.DisplayData();

    cout << "\nAccessing Data from the Derived Class:" << endl;
    obj2.DisplayData();

    cout << "\nAccessing Protected and Public Data from Derived Class:" << endl;
    obj2.AccessProtectedAndPublic();

    // Uncommenting the following lines will result in compilation errors
    // cout << obj1.privateData << endl; // Private data is not accessible outside the class
    // cout << obj1.protectedData << endl; // Protected data is not accessible outside the class
    // cout << obj2.privateData << endl; // Private data is not accessible in the derived class

    return 0;
}
