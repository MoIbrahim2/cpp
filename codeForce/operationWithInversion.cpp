#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(){
    int x; cin >>x;
    while(x--){
        int n; cin>>n;
        int count =0;
        vector<int> v(n);
        for(int i =0;i<n;i++){
            cin>>v[i];
        }
        for(int i=0;i<v.size();i++)
        {
            for(int j =i+1;j<v.size();j++)
            {
                if(v[i]>v[j])
                {   
                    v.erase(v.begin()+ j);
                    j--;
                    count++;
                }
            }
        }
        cout<<count<<"\n";
    }
}