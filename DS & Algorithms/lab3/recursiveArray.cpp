#include <iostream>
using namespace std;
void printArrayReccursively(int*&arr,int &size,int index){
        if(index>=size){
             return;
        }
        cout<< arr[index]<< endl;
        printArrayReccursively(arr,size,++index);
    }
int main(){
    int size = 0;
    cout<< "Enter the size of the array: ";
    cin>> size;
    int *arr = new int[size];
    for(int i = 0; i<size; i++){
        cout<< "arr["<<i<<"]=";
        cin>>arr[i];
    }
    printArrayReccursively(arr,size,0);
}