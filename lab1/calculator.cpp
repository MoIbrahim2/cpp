#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    
    cout << "Enter first number: ";
    cin >> num1;
    
    cout << "Enter second number: ";
    cin >> num2;
    
    // Addition
    cout << "\nAddition: " << num1 << " + " << num2 << " = " << (num1 + num2) << endl;
    
    // Subtraction
    cout << "Subtraction: " << num1 << " - " << num2 << " = " << (num1 - num2) << endl;
    
    // Multiplication
    cout << "Multiplication: " << num1 << " * " << num2 << " = " << (num1 * num2) << endl;
    
    // Division with zero check
    if (num2 == 0) {
        cout << "Division: Error! Cannot divide by zero." << endl;
    } else {
        cout << "Division: " << num1 << " / " << num2 << " = " << (num1 / num2) << endl;
    }
    
    return 0;
}
