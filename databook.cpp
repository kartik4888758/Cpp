#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Customer {
    string name;
    int age;
    string location;
    string contact;
};

int main() {
    vector<Customer> customers;
    char choice;

    do {
        Customer newCustomer;

        cout << "Enter customer details:" << endl;
        cout << "Name: ";
        cin >> newCustomer.name;
        cout << "Age: ";
        cin >> newCustomer.age;
        cout << "Location: ";
        cin >> newCustomer.location;
        cout << "Contact: ";
        cin >> newCustomer.contact;

        customers.push_back(newCustomer);

        cout << "Do you want to add another customer? (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    cout << "Customer Details:" << endl;
    for (const Customer& customer : customers) {
        cout << "Name: " << customer.name << endl;
        cout << "Age: " << customer.age << endl;
        cout << "Location: " << customer.location << endl;
        cout << "Contact: " << customer.contact << endl;
        cout << "--------------------" << endl;
    }

    return 0;
}
