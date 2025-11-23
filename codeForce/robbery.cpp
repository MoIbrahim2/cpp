#include <iostream>
using namespace std;

int main() {
    long long a=0,b=0,c=0,x;
    cin>>a>>b>>c;
    cin>>x;
    int arr[x];
    for(int i =0;i<x;i++){
        cin>>arr[i];
    }
    int count =0;
    for(int i =0;i<x;i++){
        if(arr[i]>b &&arr[i]<c) count++;
    }
    cout<<count<<endl;
    return 0;
}
