//  2. Basic Input/Output

#include <iostream>
using namespace std;

int main() {
    string name;
    int age;

    cout << "Enter your name: ";
    cin >> name;  // Take input for name

    cout << "Enter your age: ";
    cin >> age;  // Take input for age

    cout << "Hello, " << name << "! You are " << age << " years old." << endl;

    return 0;
}