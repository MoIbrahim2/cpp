
#include <iostream>
using namespace std;

int main() {
    int n,m;
    int flag =0;
    string s1,s2;

    cin>>n;
    cin.ignore();
    
    for(int i =0;i<n;i++){
        
        string temp;
        getline(cin,temp);
        s1+=temp;    
    }


    cin>>m;
    cin.ignore();
    for(int i =0;i<m;i++){
        string temp;
        getline(cin,temp);
        s2+=temp;    
    }
    for(int i=0;i<s1.length();i++){
        if(s1[i]==32){
            s1.erase(i, 1);
            i--;
        }
    }
    for(int i=0;i<s2.length();i++){
        if(s2[i]==32){
            s2.erase(i, 1);
            i--;
        }
        
    }

    if(s1.length()!=s2.length()){
        flag =1;
    }
    else{
        for(int i=0;i<s1.length();i++){
            if(s1[i]!=s2[i]){
                flag =1;
                break;
            }
        }
        
    }
    if(flag){
        cout<<"NO";
    }else{
        cout<<"YES";
    }
    
   return 0;
} 

