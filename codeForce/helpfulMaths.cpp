#include <iostream>
#include <string>
#include <math.h>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    string x; cin>>x;
    vector<int> v;
    for(int i =0;i<x.length();i++){
        if(i%2==0)
            v.push_back(stoi(to_string(x[i])));
    }   
    sort(v.begin(),v.end());
    for(int i =0;i<v.size();i++){
        cout<< v[i];
        if(i!=v.size()-1)
            cout<<"+";
    }
}