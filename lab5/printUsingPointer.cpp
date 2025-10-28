#include <iostream>
#include <string>
#define size 5
using namespace std;


int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int* pointer = arr;
    for (int i = 0; i < size; i++) {
         cout<<"arr["<<i<<"]=";
        cout << pointer[i] << endl;
    }
    cout << endl;
    for(int i=0;i<size;i++){
        cout<<"arr["<<i<<"]=";
        cout<<*(pointer+i)<<endl;
    }
    cout<<endl;
    for(int i=0;i<size;i++){
        cout<<"arr["<<i<<"]=";
        cout<<*(arr+i)<<endl;
    }
    cout<<endl;
    for(int i=0;i<size;i++){
        cout<<"arr["<<i<<"]=";
        cout<<arr[i]<<endl;
    }
    cout<<endl;
    return 0;
}
