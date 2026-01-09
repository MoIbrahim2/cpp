#include <iostream>
#include <string>
#include <set>
using namespace std;
int main(){
    set<char> s1;
    string x; cin >>x;
    for(char c: x){
        s1.insert(c);
    }
    if(s1.size()%2==0){
        cout<<"CHAT WITH HER!"<<"\n";
    }
    else{
        cout<<"IGNORE HIM!"<<"\n";
    }
}