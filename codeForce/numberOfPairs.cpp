#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

long long countLessThanR(vector<long long> &v,long long r){
    long long i =0; long long j = v.size()-1;
    long long count =0;
    while(i!=j){
        long long sum = v[i]+v[j];
        if(sum <=r){
            count+= (j-i);
            i++;
        }
        else{
            j--;
        }
    }
    return count;
}
long long countLessThanL(vector<long long> &v,long long l){
    long long i =0; long long j = v.size()-1;
    long long count =0;
    while(i!=j){
        long long sum = v[i]+v[j];
        if(sum <l){
            count+= (j-i);
            i++;
        }
        else{
            j--;
        }
    }
    return count;
}
int main(){
    int x; cin>>x;
    while(x--){
        long long n,l,r ;cin>>n>>l>>r;

        vector<long long> v(n);
        for(int i =0;i<n;i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        cout<< countLessThanR(v,r)-countLessThanL(v,l) <<endl;
    }
}