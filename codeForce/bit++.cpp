#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(){
    int i; cin>>i;
    int x = 0;
    string t;
    for(int k =0;k<i;k++){
      cin>> t;
      for(int j =0;j<t.length();j++){
        if(t[j]=='+'){
            x++;
            break;}
        else if(t[j] == '-'){
            x--;
            break;}
      } 
    }
    cout<< x;
}