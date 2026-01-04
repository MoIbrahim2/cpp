#include <iostream>
#include <vector>
using namespace std;
int main(){
    int x; cin>>x;
    vector<vector<int>> v(x, vector<int>(3));
    for(int i=0;i<x;i++){
        for(int k=0;k<3;k++){
            cin>> v[i][k];
        }
    }
    int numberOfProblemsAgreedOn =0;
    int countOfAgreement=0;
    for(int i=0;i<x;i++){
        for(int k=0;k<3;k++){
            if(v[i][k])
                countOfAgreement++;
        }
        if(countOfAgreement>=2)
            numberOfProblemsAgreedOn++;
        countOfAgreement=0;
    }
    cout<<numberOfProblemsAgreedOn<<endl;
}