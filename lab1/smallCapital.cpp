#include <iostream>
using namespace std;

int main() {
    char ch;
    
    cout << "Enter a character: ";
    cin >> ch;
    
    // Check if it's a lowercase letter (ASCII 97-122)
    if (ch >= 97 && ch <= 122) {
        cout << "Input is a lowercase letter." << endl;
        ch = ch - 32;  // Convert to uppercase
        cout << "Converted to uppercase: " << ch << endl;
    }
    // Check if it's an uppercase letter (ASCII 65-90)
    else if (ch >= 65 && ch <= 90) {
        cout << "Input is an uppercase letter." << endl;
        ch = ch + 32;  // Convert to lowercase
        cout << "Converted to lowercase: " << ch << endl;
    }
    // Not an alphabetic character
    else {
        cout << "Error: Input is not an alphabetic character!" << endl;
    }
    
    return 0;
}
