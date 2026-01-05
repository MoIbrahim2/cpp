#include <iostream>
using namespace std;
int main(){
   int x,y; cin>>x>>y;
   int area = x*y;
   if(area % 2 ==0){
        cout<< area /2<<endl;
   }
   else{
    int remainder = area %2;
    cout<< (area-remainder)/2;
   }
}