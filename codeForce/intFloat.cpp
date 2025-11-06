#include <iostream>
#include <typeinfo>
using namespace std;

int main() {
    float x;
    cin>>x;
    if (x == (int)x)
        cout << "int " <<(int)x<< endl;
    else
     {
        int intPart = (int)x;      // Truncate the decimal part
        float fracPart = x - intPart;         // Subtract to get fractional part
        cout << "float " << fracPart << endl;
     }
    return 0;
}