#include <iostream>
using namespace std;
#include <vector>
#include <string>
int main(){
   
   int i; cin>>i;
   vector<string> v(i);
   for(int i =0;i<v.size();i++){
      cin>>v[i];
   }
   for(int i =0;i<v.size();i++){
      if(v[i].length()>10)
         cout<< v[i][0]<<v[i].length()-2<<v[i][v[i].length()-1]<<endl;
      else{
         cout<< v[i]<<endl;
      }
   }
}