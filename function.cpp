#include <iostream>
using namespace std;
int a = 10;
int b = 10;

int num(int c, int d)
{
   
   return a + b;
}
double num()
{
   return double c * d;
}
float num()
{
   
   return float a/b;
}

int main()
{
   cout << "product of number is :" << num(10, 10) << endl;
   cout << "product of number is :" << num(2.510, 2.510) << endl;
   cout << "division of number is :" << num(2.5, 2.5) << endl;
}