#include <iostream>
#define size 5

using namespace std;

int main() {
   
    int arr[size];
    //reading the data
    for(int i =0; i<size;i++){
        cout<<"arr["<<i<<"]=";
        cin>>arr[i];
    }
    cout<<endl;
    
    for (int i = 0; i < size ; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap the two elements
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    cout << "After sorting:  ";
    for (int i = 0; i < size; i++)
    cout << arr[i] << " ";
    cout << endl;
    return 0;
}
