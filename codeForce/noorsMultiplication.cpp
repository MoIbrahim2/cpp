#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    long long arr[n];
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    for(int i =0;i<n;i++){
       if(arr[i]%2 ==0){
        cout<<arr[i]/2<<" 2"<<endl;
       }
       else if(arr[i]%5 ==0){
        cout<<arr[i]/5<<" 5"<<endl;
       }
       else if(arr[i]%3 ==0){
        cout<<arr[i]/3<<" 3"<<endl;
       }
       else
            cout << arr[i] << " 1\n";
    }
    
    return 0;
}
