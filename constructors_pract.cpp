// C++ program of default constructor

// #include <iostream>
// using namespace std;

// class  Wall {
//   private:
//     double length;

//   public:
//     Wall() {
//       length = 5.5;
//       cout << "Creating a wall." << endl;
//       cout << "Length = " << length << endl;
//     }
// };

// int main() {
//   Wall wall1;
//   return 0;
// }

// C++ program to calculate the area of a wall

// #include <iostream>
// using namespace std;

// class Wall
// {
// private:
//     double length;
//     double height;

// public:
//     Wall(double len, double hgt)
//     {
//         length = len;
//         height = hgt;
//     }

//     double calculateArea()
//     {
//         return length * height;
//     }
// };

// int main()
// {
//     // create object and initialize data members
//     Wall wall1(10.5, 8.6);
//     Wall wall2(8.5, 6.3);

//     cout << "Area of Wall 1: " << wall1.calculateArea() << endl;
//     cout << "Area of Wall 2: " << wall2.calculateArea();

//     return 0;
// }

////////////////copy parameters

#include <iostream>
using namespace std;

class Math
{
private:
    double length;
    double height;

public:
    Math(double len, double hgt)
    {
        length = len;
        height = hgt;
    }

    // copy constructor with a Wall object as parameter
    // copies data of the obj parameter
    Math(Math &obj)
    {
        length = obj.length;
        height = obj.height;
    }

    double calculateArea()
    {
        return length * height;
    }
};

int main()
{

    Math area1(10, 20);

    // copy contents of wall1 to wall2
    Math area2 = area1;

    cout << "area of first wall is : " << area1.calculateArea() << endl;
    cout << "area of second wall is : " << area2.calculateArea();

    return 0;
}