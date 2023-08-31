#include <iostream>
using namespace std;

void calci(int a, int b, char operation) {
  
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
        cout << "Division by zero error" <<endl;
      } else {
        cout << a / b <<endl;
      }
      break;

    default:
      cout << "Invalid operator" <<endl;
  }
}

int main() {
  int  a, b;
  char operation, repeat;

  do {
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;
    cout << "Enter the operation (+, -, *, /): ";
    cin >> operation;

    calci(a, b, operation);

    cout << "Do you want to perform another calculation (y/n)? ";
    cin >> repeat;
  } while (repeat == 'y');

  return 0;
}
