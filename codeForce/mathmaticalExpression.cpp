#include <iostream>
using namespace std;

void comparison(int a, char s,int b,long long c){
    if(s==42){
        if(a * b==c) {cout<< "Yes"<<endl; return;}
        else {cout<<a*b<<endl;}
    }
    else if(s==43)
    {
       if(a + b == c) {cout<<"Yes"<<endl; return;} 
        else {cout<<a+b<<endl; return;}
    }
    else{
        if(a - b==c) {cout<<"Yes"<<endl; return;} 
        else {cout<<a-b<<endl; return;}
    }
    return;
}

int main() {
   int x,b;
   long long c;
   char op,eq;
   cin>>x>>op>>b>>eq>>c;
   comparison(x,op,b,c);
   return 0;
}