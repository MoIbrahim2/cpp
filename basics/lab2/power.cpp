#include <iostream>
using namespace std;

int main() {
    int power =1 ;
    int x,y;
    cout<< "enter the two numbers one for the base and the second for the exponent"<<endl;
    cin >> x >> y; 
    for(int i =0; i<y;i++){
       power *= x;
    }
    cout<< x <<" to the power "<<y<<" is equal to "<< power<<endl; 
    return 0;
}
