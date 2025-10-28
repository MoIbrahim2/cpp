#include <iostream>
using namespace std;

int main() {
    int num;
    cout<<"enter the numbe you want to mirror"<<endl;
    cin>> num;
    int temp = num;

    while (temp != 0) {
        int mod = temp % 10;
        temp /= 10;   
        cout<<mod;
    }
}