/***************************************************************************************************************************************************
Author name : Shahd Mohammed Attia
Task name : Simple Calculator
************************************************************************************************************************************************/
#include <iostream>
using namespace std;


int main() {
    char operation;
    float number1, number2;

    cout << "Enter first number: " << endl;
    cin >> number1;

    cout << "Enter second number: " << endl;
    cin >> number2;

    cout << "Enter operation tybe :+, -, *, / "<< endl;
    cin >> operation;

    switch(operation)
     {
        case '+':
            cout << number1 << " + " << number2 << " = " << number1 + number2 << endl;
            break;

        case '-':
            cout << number1 << " - " << number2 << " = " << number1 - number2 << endl;
            break;

        case '*':
            cout << number1 << " * " << number2 << " = " << number1 * number2 << endl;
            break;

        case '/':
            if(number2 != 0)
                cout << number1 << " / " << number2 << " = " << number1 / number2 << endl;
            else
                cout << "Error: Division by zero is not vaild." << endl;
            break;

        default:
            cout << "Invalid operation." << endl;
    }

    return 0;
}
