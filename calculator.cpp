#include <iostream>

using namespace std;

int main() {
    char operation;
    double num1, num2, result;
    bool continueCalculations = true;
    // continuous loop formation with 
    // switch cases and predefined if/else condtions 

    while (continueCalculations) {
        cout << "Enter an operation (+, -, *, /) or 'q' to quit: ";
        cin >> operation;

        if (operation == 'q') {
            continueCalculations = false;
            break;
        }

        cout << "Enter two numbers: ";
        cin >> num1 >> num2;

        switch (operation) {
            case '+':
                result = num1 + num2;
                cout << "Result: " << result << endl;
                break;
            case '-':
                result = num1 - num2;
                cout << "Result: " << result << endl;
                break;
            case '*':
                result = num1 * num2;
                cout << "Result: " << result << endl;
                break;
            case '/':
                if (num2 != 0) {
                    result = num1 / num2;
                    cout << "Result: " << result << endl;
                } else {
                    cout << "Error: Division by zero!" << endl;
                }
                break;
            default:
                cout << "Invalid operation! Please enter +, -, *, /, or 'q' to quit." << endl;
        }
    }

    cout << "Calculator program has exited. Goodbye!" << endl;

    return 0;
}
