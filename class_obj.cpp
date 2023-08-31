// # include <iostream>
// using namespace std;
// class Room 
// {
//     // access specifier
// public:   
// //class members
// int x,y;

//  int perimeter  ()

//  {
//      return 2*(x+y);
//  }

//  int area ()
//  {       
//     return x*y;
//  }
// // class ends with semicolon
// };
 
// int main ()
// {


//     Room abc ;
//     // dot operator for memory allocation
//     cout <<"Enter Length :";
//     cin >> abc.x;
//     cout << "Enter Breadth :";
//     cin >> abc.y;
    
//     cout << "Perimeter :" << abc.perimeter ()<< endl;

//     cout << "Area :"<< abc.area () << endl;

// }



//another program
# include <iostream>
# include <cmath>
using namespace std ;

class Math 
{
    public:
    int x,y;
    int power ()
    {
        return pow(x,2)+pow (y,2)+2*x*y;
    }

};
int main ()
{
    Math abc;

    cout <<"Enter value of 1st term :";
    cin >>abc.x;
    cout << "Enter value of 2nd term :";
    cin>> abc.y;

    cout << "Total :"<< abc.power();
}