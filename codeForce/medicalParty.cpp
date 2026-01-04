#include <iostream>
#include <vector>
#include <string>
#include<algorithm>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int numberOfFlippedBitsY=0,numberOfFlippedBitsX=0;
        int numberOf1Y=0;
        int numberOf1X=0;
        string x_, y_,y,x="";
        cin>>x_>>y_;
        for(int i =0;i<x_.length();i++){
            if(x_[i]=='1')    numberOf1Y++;
            y.append(to_string(numberOf1Y %2));
        }
        for (size_t i = 0; i < x_.length(); i++)
            {
                if(numberOf1X % 2 == y_[i]-'0')
                    x.append("0");
                else{
                    numberOf1X++;
                    x.append("1");
                }
            }
        if(y_ == y){
           numberOfFlippedBitsY=0;}
        else{
            for (size_t i = 0; i < y_.length(); i++)
            {
                if(y_[i]!= y[i]) numberOfFlippedBitsY++;
                if(x_[i]!= x[i]) numberOfFlippedBitsX++;
            }
           
            
        }
        cout<<min(numberOfFlippedBitsX,numberOfFlippedBitsY)<<endl;
    }
}