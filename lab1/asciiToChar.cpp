#include <iostream>
using namespace std;

int main() {
    int ascii;
    
    cout << "Enter an ASCII value : ";
    cin >> ascii;
    
    if (ascii >= 0 && ascii <= 127) {
        char x = ascii;
        cout << "The character for ASCII " << ascii << " is: '" << x << "'" << endl;
    } else {
        cout << "Error: Please enter a valid ASCII value (0-127)." << endl;
    }
    
    return 0;
}
