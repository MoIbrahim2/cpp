#include <iostream>
using namespace std;
int checkQuarter(int inputX,int inputY,int queenX, int queenY){
    if(inputX > queenX && inputY> queenY )
        return 1;
    else if(inputX > queenX && inputY< queenY )
        return 2;
    else if(inputX < queenX && inputY< queenY )
        return 3;
    else
        return 4;
}
int main(){
    int x,Ax,Ay,Bx,By,Cx,Cy; cin>>x;
    cin>>Ax>>Ay>>Bx>>By>>Cx>>Cy;
    int kingQuarter = checkQuarter(Bx,By,Ax,Ay);
    int targetQuarter = checkQuarter(Cx,Cy,Ax,Ay);
    if(kingQuarter == targetQuarter)
        cout<<"YES"<<endl;
    else{
        cout<<"NO"<<endl;
    }
}