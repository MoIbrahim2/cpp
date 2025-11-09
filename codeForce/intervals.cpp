#include <iostream>
using namespace std;

long long  min(long long  x, long long  y){
    return x<=y? x:y;
}
long long  max(long long  x, long long  y){
    return x>=y? x:y;
}

int  main() {
   long long  l1,r1,l2,r2;
   cin>>l1>>r1>>l2>>r2;
   long long  left = max(l1,l2);
   long long  right = min(r1,r2);
   if(left> right) cout<<"-1"<<endl;
   else cout<<left<<" "<<right<<endl;
}