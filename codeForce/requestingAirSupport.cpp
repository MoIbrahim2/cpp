
#include <iostream>

using namespace std;

int main() {
     int grid,smokeGrenades;
     cin>>grid>>smokeGrenades;
     long long arrK[smokeGrenades];
     long long arrC[smokeGrenades];
    for(int i=0;i<smokeGrenades;i++){ 
     cin>>arrK[i];
     cin>>arrC[i];
    }
    for(int i=0;i<smokeGrenades;i++){
        if(arrK[i]>grid || arrC[i]>grid || arrK[i]<0 ||arrC[i]<0)
        {
            cout<<"Negative Sir"<<endl;
            
        }
        else{
            cout<<"Roger that, Danger close!"<<endl;
        }
    }
} 

