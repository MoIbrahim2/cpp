#include <iostream>
using namespace std;
void comparison(int a, char s,int b){
    if(s==62){
        if(a > b) {cout<<"Right"; return;} 
        else cout<<"Wrong"; return;
    }
    else if (s==60)
    {
       if(a < b) {cout<<"Right"; return;} 
        else cout<<"Wrong"; return;
    }
    else{
        if(a == b) {cout<<"Right"; return;} 
        else cout<<"Wrong"; return;
    }
}
int main() {
    int a,b;
    char s;
    cin>>a>>s>>b;
    comparison(a,s,b);
}