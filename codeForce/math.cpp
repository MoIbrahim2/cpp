#include <iostream>
using namespace std;
class Point{
    public:
    int x;
    int y;
};
int main() {
  int n;
  cin>>n;
  Point current[n];
  Point target[n];
  for(int i =0;i<n;i++){
    cin>> current[i].x>>current[i].y>>target[i].x>>target[i].y;
  } 
  for(int i =0;i<n;i++){
    if(target[i].y < current[i].y){
        cout<< -1<<endl;
    }
    else{
        int yStep = target[i].y - current[i].y;
        if(current[i].x + yStep>=target[i].x){
            cout <<(yStep +(current[i].x + yStep-target[i].x))<<endl;
        }
        else{cout <<-1<<endl;}
    }
  }

}
