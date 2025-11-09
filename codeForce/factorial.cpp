#include <iostream>
#include <typeinfo>
using namespace std;

long long factorial(int f){
    if(f==1 || f==0){
        return 1;
    }
    return f* factorial(f-1);
}
int main() {

  int x;
  cin>>x;
  int arr[x];
  for(int i =0;i<x;i++){
    cin>>arr[i];
  }
  for(int i =0;i<x;i++){
    cout<<factorial(arr[i])<<endl;
  }
}