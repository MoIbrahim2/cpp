#include <iostream>
using namespace std;

void roundNumbersOfArray(long long* arr,int size){
    for(int i =0;i<size;i++){
         if(arr[i]%10>=5){
            arr[i] = arr[i] + (10-arr[i]%10);
         }
         else{
            arr[i] = arr[i] - arr[i]%10;
         }
   } 
}
int main() {
   int n;
   cin>>n;
   long long abdo[n];
   long long _3baky[n];
   
   for(int i =0;i<n;i++){
       cin>>abdo[i]>>_3baky[i];
   }
   roundNumbersOfArray(abdo,n);
   roundNumbersOfArray(_3baky,n);

   for(int i =0;i <n;i++){
    cout<< abdo[i]+_3baky[i]<<endl;
   }
   
    return 0;
}
