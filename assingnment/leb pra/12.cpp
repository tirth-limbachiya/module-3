// 12. Simple Calculator Using Functions

#include <iostream>
using namespace std;

// Function declarations
float add(float a, float b)
 {
    return a + b;
}

float subtract(float a, float b) 
{
    return a - b;
}

float multiply(float a, float b)
{
    return a * b;
}

float divide(float a, float b)
 {
    if (b != 0)
        return a / b;
    else {
        cout << "Error: Division by zero!" << endl;
        return 0;
    }
}

int main()
 {
    float num1, num2;
    char op;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << "Enter operator (+, -, *, /): ";
    cin >> op;

    switch(op) {
        case '+': cout << "Result: " << add(num1, num2) << endl; break;
        case '-': cout << "Result: " << subtract(num1, num2) << endl; break;
        case '*': cout << "Result: " << multiply(num1, num2) << endl; break;
        case '/': cout << "Result: " << divide(num1, num2) << endl; break;
        default: cout << "Invalid operator!" << endl;
    }

    return 0;
}