#include <iostream>
using namespace std;

int main() {
    int i;
    cout<<"enter the degree of your subject"<<endl;
    cin>>i;
    if(i<50){
        cout<<"Fail";
    }
    else if(i>=50 && i<65)
    {
        cout<<"Pass";
    }
    else if(i>=65&& i<75)
    {
        cout<<"Good";
    }
    else if(i>=75 && i < 85)
    { 
        cout<<"Very good";
    }
    else if(i>=85 && i<100) 
    {
        cout<<"Excellent";
    }
    else{
        cout<<"you should enter a number between 0-100";
    }
    return 0;
}
