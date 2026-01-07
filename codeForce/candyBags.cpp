#include <iostream>
using namespace std;
int main(){
    int x,n=1;  cin>>x;
    int y =x;
    while(y--){
        for(int i=0;i<x/2;i++){
            cout<<n+i<<" ";
            cout<<(x*x)+1-n-i<<" ";
        }
        n = n+(x/2);
        cout<<endl;
    }
}