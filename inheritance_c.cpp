#include <iostream>
using namespace std;

// class Kid
// {
// public:
//     void eat()
//     {
//         cout << "kid is eating." << endl;
//     }
//     void run()
//     {
//         cout << "kid is running." << endl;
//     }
//     void read()
//     {
//         cout << "kid is reading." << endl;
//     }
// };

// class Work : public Kid
// {
//     public:
//     void write()
//     {
//         cout << "kid is writing." << endl;
//     }
// };

// int main()
// {
//     Work act;
//     act.write();
//     act.run();
//     act.read();
//     act.eat();
//     return 0;
// }

class Vehicle{
    private:
    int weight;
    protected:
    int max_speed;
    public:
    int wheels;

    void display()
    {
        int abc;
        weight=abc;
        cout<<"enter weight of the car:";
        cin>>abc;
        cout<<"weight of the car is:"<<abc;
    }

};
class Car:public Vehicle{
    public:
    void set_speed(int speed)
    {
        max_speed=speed;
        cout<<"maximum speed is "<<max_speed<<endl;
    }
};

int main()
{
    Car my_car;
    my_car.wheels=4;
    my_car.set_speed(350);
    my_car.display();

    return 0;
}

// class Animal
// {
// public:
//     void eat()
//     {
//         cout << "i can eat." << endl;
//     }
// };
// class Dog : public Animal
// {

// public:
//     void bark()
//     {
//         cout << " i can bark " << endl;
//     }
// };

// int main()
// {
//     Dog d;
//     d.eat();
//     d.bark();
//     return 0;
// }