#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(){
    string x,y;cin>>x>>y;
    int flag=0,i =0;
    for(int i =0;i<x.length();i++){
        if(x[i] >= 65 && x[i] <= 90)
            x[i]= x[i]+32;
        if(y[i] >= 65 && y[i] <= 90)
            y[i]= y[i]+32;
    }
    while(i!=x.length()){
        if(x[i]>y[i]) {flag =1; break;}
        else if(x[i]<y[i]) {flag =-1; break;}
        i++;
    }
    cout<<flag<<endl;
}