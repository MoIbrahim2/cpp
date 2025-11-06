#include <iostream>
using namespace std;
#define size 3
void swap(int & a, int& b){
    int temp = b;
     b =a;
     a =temp;
}
int main() {
    long long arr[size],arr1[size];
    for(int i =0;i<size;i++){
        cin>>arr[i];
    }
    for(int i =0;i<size;i++){
        arr1[i] = arr[i];
    }
   
    for(int i =0;i<size-1;i++){
       for(int n=0;n<size-i-1;n++){
        if(arr[n+1]<arr[n])
            {    
                swap(arr[n],arr[n+1]);
            }
       }
    }
    for(int i =0;i<size;i++){
        cout<<arr[i]<<endl;
    }
    cout<<endl;
    for(int i =0;i<size;i++){
        cout<<arr1[i]<<endl;
    }
    return 0;
}