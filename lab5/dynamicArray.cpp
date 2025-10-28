#include <iostream>
using namespace std;


int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int* arr = new int[n];
    for(int i=0;i<n;i++){
        cout<<"arr["<<i<<"]=";
        cin>>arr[i];
    }
    cout<<"The elements in the array are:"<<endl;
    for(int i=0;i<n;i++){
        cout<<"arr["<<i<<"]=";
        cout<<arr[i]<<endl;
    }
    delete[] arr;
    return 0;
}
