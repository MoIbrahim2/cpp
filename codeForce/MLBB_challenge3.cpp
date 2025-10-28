#include <iostream>
using namespace std;

int main() {
    int n;
    int hayabusaTotalCreeps=0,dyrtohTotalCreeps=0;
    cin>>n;
    int hayabusa[n];
    int dyroth[n];
    for(int i =0;i<n;i++){
        int hayabusaCreeps,dyrothCreeps;
        cin>> hayabusaCreeps>>dyrothCreeps;
        hayabusa[i]=hayabusaCreeps;
        dyroth[i]= dyrothCreeps;
    }

    for(int i =0;i<n;i++){
        hayabusaTotalCreeps += hayabusa[i] + (2-dyroth[i]);
        dyrtohTotalCreeps += dyroth[i] + (2-hayabusa[i]);
    }
    cout<<"Hayabusa "<<hayabusaTotalCreeps*200<<" Gold"<<endl;
    cout<<"Dyroth "<<dyrtohTotalCreeps*200<<" Gold"<<endl;

    return 0;
}
