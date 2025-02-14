#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double num1, num2;
    char op;

    cout << "Enter an operator (+, -, *, /, ^, r for sqrt): ";
    cin >> op;

    if (op == 'r') {
        cout << "Enter number: ";
        cin >> num1;
        cout << "Result: " << sqrt(num1) << endl;
    } else {
        cout << "Enter first number: ";
        cin >> num1;
        cout << "Enter second number: ";
        cin >> num2;

        switch(op) {
            case '+': cout << "Result: " << num1 + num2 << endl; break;
            case '-': cout << "Result: " << num1 - num2 << endl; break;
            case '*': cout << "Result: " << num1 * num2 << endl; break;
            case '/': num2 != 0 ? cout << "Result: " << num1 / num2 << endl : cout << "Error! Division by zero.\n"; break;
            case '^': cout << "Result: " << pow(num1, num2) << endl; break;
            default: cout << "Invalid operator!\n";
        }
    }
    return 0;
}
