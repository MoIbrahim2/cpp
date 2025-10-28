#include <iostream>
#include <string>
using namespace std;
void swap(int* x, int* y);

int main() {
    int a = 5, b = 10;
   
    cout<<"before swaping a: "<<a<<"\t"<<" b: "<<b<<endl;

    swap(&a,&b);
    
    cout<<"after swaping a: "<<a<<"\t"<<"b: "<<b<<endl;
    
    return 0;
}
void swap(int* x, int* y){
    int temp = *x;
    *x = *y;
    *y = temp;
}