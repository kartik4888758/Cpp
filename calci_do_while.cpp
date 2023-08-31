#include <iostream>
using namespace std;

int main() 
{
  int  a, b;
  char operation,repeat;

  do {
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;
    cout << "Enter the operation (+, -, *, /): ";
    cin >> operation;
  switch (operation) {
    case '+':
      cout << a + b <<endl;
      break;

    case '-':
      cout << a - b <<endl;
      break;

    case '*':
      cout << a * b <<endl;
      break;

    case '/':
      if (b == 0) {
        cout << "not divisible by zero" <<endl;
      } else {
        cout << a / b <<endl;
      }
      break;
      
      
  }
  cout<<"do you want to continue:(y/n):";
  cin>>repeat;
}while (repeat=='y');
cout<<"exit";
return 0;
}