#include <iostream>
using namespace std;

int main() {
    int days;
    cin>>days;
    int years = days/365;
    int remaining = days%365;
    int month = remaining /30;
    remaining = remaining % 30;
    days = remaining;
    cout<<years<<" years\n"<<month<<" months\n"<<days<<" days"<<endl;
    return 0;
}